#!/bin/sh
export KERNELDIR=`readlink -f .`
export RAMFS_SOURCE=`readlink -f $KERNELDIR/ramfs_$1`
export PARENT_DIR=`readlink -f ..`
export USE_SEC_FIPS_MODE=true
export DROPBOX_DIR=`readlink -f ../../Dropbox/`
export CROSS_COMPILE=$PARENT_DIR/toolchain/eabi-4.7.4_11/bin/arm-eabi-
export CPUS=`grep -c processor /proc/cpuinfo`
RAMFS_TMP="/tmp/ramfs-source"

export ARCH=arm

cd $KERNELDIR/
nice -n 20 make -j${CPUS} || exit 1
#remove previous ramfs files
rm -rf $RAMFS_TMP
rm -rf $RAMFS_TMP.cpio
rm -rf $RAMFS_TMP.cpio.lzo
#copy ramfs files to tmp directory
cp -ax $RAMFS_SOURCE $RAMFS_TMP
#clear git repositories in ramfs
find $RAMFS_TMP -name .git -exec rm -rf {} \;
#remove empty directory placeholders
find $RAMFS_TMP -name EMPTY_DIRECTORY -exec rm -rf {} \;
rm -rf $RAMFS_TMP/tmp/*
#remove mercurial repository
rm -rf $RAMFS_TMP/.hg
#copy modules into ramfs
mkdir -p $RAMFS_TMP/lib/modules
cp $PARENT_DIR/commonmodules/*.ko $RAMFS_TMP/lib/modules/
find -name '*.ko' -exec cp -av {} $RAMFS_TMP/lib/modules/ \;
"$CROSS_COMPILE"strip --strip-unneeded $RAMFS_TMP/lib/modules/*

cd $RAMFS_TMP
find | fakeroot cpio -H newc -o > $RAMFS_TMP.cpio 2>/dev/null
ls -lh $RAMFS_TMP.cpio
lzop -9 $RAMFS_TMP.cpio
cd -

nice -n 20 make -j${CPUS} zImage || exit 1

./mkbootimg --kernel $KERNELDIR/arch/arm/boot/zImage --ramdisk $RAMFS_TMP.cpio.lzo --board smdk4x12 --base 0x10000000 --pagesize 2048 --ramdiskaddr 0x11000000 -o $KERNELDIR/boot.img.pre

$KERNELDIR/mkshbootimg.py $KERNELDIR/boot.img $KERNELDIR/boot.img.pre $KERNELDIR/payload.tar
rm -f $KERNELDIR/boot.img.pre
rm -f $DROPBOXDIR/boot.tar
rm -f $KERNELDIR/boot.tar
tar cvf boot.tar boot.img

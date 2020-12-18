#!/bin/sh
PKG_CONFIG_SYSROOT_DIR=/home/xuejun/SyberOS-CCE/SyberOS5_0/sysroot
export PKG_CONFIG_SYSROOT_DIR
PKG_CONFIG_LIBDIR=/home/xuejun/SyberOS-CCE/SyberOS5_0/sysroot/usr/lib64/pkgconfig
export PKG_CONFIG_LIBDIR
exec pkg-config "$@"

# Kernel-fo-Zenfone-6-by-BORETS24
How to build zenfone kernel

#1 download aosp source code
	cd [working dir]
	repo init -u https://android.googlesource.com/platform/manifest -b android-5.1.1_r10
	repo sync

# 2 Download original source from ASUS site end extract this to [working dir]
#3 Download my source code, then rename  Kernel-fo-Zenfone-6-by-BORETS24-master folder to 'linux' and put this folder in [working dir]

#4 build 'minigzip' and 'openssl' modules
	source build/envsetup.sh
	lunch aosp_x86-eng
	make -j20 minigzip openssl

#5 build kernel image and modules
## define TARGET_DEVICE to overwrite
## available options : 
## 	TARGET_DEVICE=hd  (A500CG/A501CG/A600CG - default)
##	TARGET_DEVICE=fhd (A502CG/A451CG)

	make -f KernelMakefile TARGET_DEVICE=hd build_kernel
  	or
	make -j20 -f KernelMakefile TARGET_DEVICE=hd modules_install
	
#6 If you want to compile this kernel for recovery, define in kernel makefile CONFIG_CC_OPTIMIZE_FOR_SIZE

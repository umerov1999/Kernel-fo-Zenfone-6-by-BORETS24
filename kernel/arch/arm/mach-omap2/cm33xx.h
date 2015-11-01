/*
 * AM33XX CM offset macros
 *
 * Copyright (C) 2011-2012 Texas Instruments Incorporated - http://www.ti.com/
 * Vaibhav Hiremath <hvaibhav@ti.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation version 2.
 *
 * This program is distributed "as is" WITHOUT ANY WARRANTY of any
 * kind, whether express or implied; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef __ARCH_ARM_MACH_OMAP2_CM_33XX_H
#define __ARCH_ARM_MACH_OMAP2_CM_33XX_H

#include "common.h"

#include "cm.h"
#include "cm-regbits-33xx.h"
#include "iomap.h"

/* CM base address */
#define AM33XX_CM_BASE		0x44e00000

#define AM33XX_CM_REGADDR(inst, reg)				\
	AM33XX_L4_WK_IO_ADDRESS(AM33XX_CM_BASE + (inst) + (reg))

/* CM instances */
#define AM33XX_CM_PER_MOD		0x0000
#define AM33XX_CM_WKUP_MOD		0x0400
#define AM33XX_CM_DPLL_MOD		0x0500
#define AM33XX_CM_MPU_MOD		0x0600
#define AM33XX_CM_DEVICE_MOD		0x0700
#define AM33XX_CM_RTC_MOD		0x0800
#define AM33XX_CM_GFX_MOD		0x0900
#define AM33XX_CM_CEFUSE_MOD		0x0A00

/* CM */

/* CM.PER_CM register offsets */
#define AM33XX_CM_PER_L4LS_CLKSTCTRL_OFFSET		0x0000
#define AM33XX_CM_PER_L4LS_CLKSTCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0000)
#define AM33XX_CM_PER_L3S_CLKSTCTRL_OFFSET		0x0004
#define AM33XX_CM_PER_L3S_CLKSTCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0004)
#define AM33XX_CM_PER_L4FW_CLKSTCTRL_OFFSET		0x0008
#define AM33XX_CM_PER_L4FW_CLKSTCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0008)
#define AM33XX_CM_PER_L3_CLKSTCTRL_OFFSET		0x000c
#define AM33XX_CM_PER_L3_CLKSTCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x000c)
#define AM33XX_CM_PER_CPGMAC0_CLKCTRL_OFFSET		0x0014
#define AM33XX_CM_PER_CPGMAC0_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0014)
#define AM33XX_CM_PER_LCDC_CLKCTRL_OFFSET		0x0018
#define AM33XX_CM_PER_LCDC_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0018)
#define AM33XX_CM_PER_USB0_CLKCTRL_OFFSET		0x001c
#define AM33XX_CM_PER_USB0_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x001c)
#define AM33XX_CM_PER_MLB_CLKCTRL_OFFSET		0x0020
#define AM33XX_CM_PER_MLB_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0020)
#define AM33XX_CM_PER_TPTC0_CLKCTRL_OFFSET		0x0024
#define AM33XX_CM_PER_TPTC0_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0024)
#define AM33XX_CM_PER_EMIF_CLKCTRL_OFFSET		0x0028
#define AM33XX_CM_PER_EMIF_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0028)
#define AM33XX_CM_PER_OCMCRAM_CLKCTRL_OFFSET		0x002c
#define AM33XX_CM_PER_OCMCRAM_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x002c)
#define AM33XX_CM_PER_GPMC_CLKCTRL_OFFSET		0x0030
#define AM33XX_CM_PER_GPMC_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0030)
#define AM33XX_CM_PER_MCASP0_CLKCTRL_OFFSET		0x0034
#define AM33XX_CM_PER_MCASP0_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0034)
#define AM33XX_CM_PER_UART5_CLKCTRL_OFFSET		0x0038
#define AM33XX_CM_PER_UART5_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0038)
#define AM33XX_CM_PER_MMC0_CLKCTRL_OFFSET		0x003c
#define AM33XX_CM_PER_MMC0_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x003c)
#define AM33XX_CM_PER_ELM_CLKCTRL_OFFSET		0x0040
#define AM33XX_CM_PER_ELM_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0040)
#define AM33XX_CM_PER_I2C2_CLKCTRL_OFFSET		0x0044
#define AM33XX_CM_PER_I2C2_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0044)
#define AM33XX_CM_PER_I2C1_CLKCTRL_OFFSET		0x0048
#define AM33XX_CM_PER_I2C1_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0048)
#define AM33XX_CM_PER_SPI0_CLKCTRL_OFFSET		0x004c
#define AM33XX_CM_PER_SPI0_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x004c)
#define AM33XX_CM_PER_SPI1_CLKCTRL_OFFSET		0x0050
#define AM33XX_CM_PER_SPI1_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0050)
#define AM33XX_CM_PER_SPI2_CLKCTRL_OFFSET		0x0054
#define AM33XX_CM_PER_SPI2_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0054)
#define AM33XX_CM_PER_SPI3_CLKCTRL_OFFSET		0x0058
#define AM33XX_CM_PER_SPI3_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0058)
#define AM33XX_CM_PER_L4LS_CLKCTRL_OFFSET		0x0060
#define AM33XX_CM_PER_L4LS_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0060)
#define AM33XX_CM_PER_L4FW_CLKCTRL_OFFSET		0x0064
#define AM33XX_CM_PER_L4FW_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0064)
#define AM33XX_CM_PER_MCASP1_CLKCTRL_OFFSET		0x0068
#define AM33XX_CM_PER_MCASP1_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0068)
#define AM33XX_CM_PER_UART1_CLKCTRL_OFFSET		0x006c
#define AM33XX_CM_PER_UART1_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x006c)
#define AM33XX_CM_PER_UART2_CLKCTRL_OFFSET		0x0070
#define AM33XX_CM_PER_UART2_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0070)
#define AM33XX_CM_PER_UART3_CLKCTRL_OFFSET		0x0074
#define AM33XX_CM_PER_UART3_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0074)
#define AM33XX_CM_PER_UART4_CLKCTRL_OFFSET		0x0078
#define AM33XX_CM_PER_UART4_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0078)
#define AM33XX_CM_PER_TIMER7_CLKCTRL_OFFSET		0x007c
#define AM33XX_CM_PER_TIMER7_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x007c)
#define AM33XX_CM_PER_TIMER2_CLKCTRL_OFFSET		0x0080
#define AM33XX_CM_PER_TIMER2_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0080)
#define AM33XX_CM_PER_TIMER3_CLKCTRL_OFFSET		0x0084
#define AM33XX_CM_PER_TIMER3_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0084)
#define AM33XX_CM_PER_TIMER4_CLKCTRL_OFFSET		0x0088
#define AM33XX_CM_PER_TIMER4_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0088)
#define AM33XX_CM_PER_MCASP2_CLKCTRL_OFFSET		0x008c
#define AM33XX_CM_PER_MCASP2_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x008c)
#define AM33XX_CM_PER_RNG_CLKCTRL_OFFSET		0x0090
#define AM33XX_CM_PER_RNG_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0090)
#define AM33XX_CM_PER_AES0_CLKCTRL_OFFSET		0x0094
#define AM33XX_CM_PER_AES0_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0094)
#define AM33XX_CM_PER_AES1_CLKCTRL_OFFSET		0x0098
#define AM33XX_CM_PER_AES1_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0098)
#define AM33XX_CM_PER_DES_CLKCTRL_OFFSET		0x009c
#define AM33XX_CM_PER_DES_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x009c)
#define AM33XX_CM_PER_SHA0_CLKCTRL_OFFSET		0x00a0
#define AM33XX_CM_PER_SHA0_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x00a0)
#define AM33XX_CM_PER_PKA_CLKCTRL_OFFSET		0x00a4
#define AM33XX_CM_PER_PKA_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x00a4)
#define AM33XX_CM_PER_GPIO6_CLKCTRL_OFFSET		0x00a8
#define AM33XX_CM_PER_GPIO6_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x00a8)
#define AM33XX_CM_PER_GPIO1_CLKCTRL_OFFSET		0x00ac
#define AM33XX_CM_PER_GPIO1_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x00ac)
#define AM33XX_CM_PER_GPIO2_CLKCTRL_OFFSET		0x00b0
#define AM33XX_CM_PER_GPIO2_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x00b0)
#define AM33XX_CM_PER_GPIO3_CLKCTRL_OFFSET		0x00b4
#define AM33XX_CM_PER_GPIO3_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x00b4)
#define AM33XX_CM_PER_GPIO4_CLKCTRL_OFFSET		0x00b8
#define AM33XX_CM_PER_GPIO4_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x00b8)
#define AM33XX_CM_PER_TPCC_CLKCTRL_OFFSET		0x00bc
#define AM33XX_CM_PER_TPCC_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x00bc)
#define AM33XX_CM_PER_DCAN0_CLKCTRL_OFFSET		0x00c0
#define AM33XX_CM_PER_DCAN0_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x00c0)
#define AM33XX_CM_PER_DCAN1_CLKCTRL_OFFSET		0x00c4
#define AM33XX_CM_PER_DCAN1_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x00c4)
#define AM33XX_CM_PER_EPWMSS1_CLKCTRL_OFFSET		0x00cc
#define AM33XX_CM_PER_EPWMSS1_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x00cc)
#define AM33XX_CM_PER_EMIF_FW_CLKCTRL_OFFSET		0x00d0
#define AM33XX_CM_PER_EMIF_FW_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x00d0)
#define AM33XX_CM_PER_EPWMSS0_CLKCTRL_OFFSET		0x00d4
#define AM33XX_CM_PER_EPWMSS0_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x00d4)
#define AM33XX_CM_PER_EPWMSS2_CLKCTRL_OFFSET		0x00d8
#define AM33XX_CM_PER_EPWMSS2_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x00d8)
#define AM33XX_CM_PER_L3_INSTR_CLKCTRL_OFFSET		0x00dc
#define AM33XX_CM_PER_L3_INSTR_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x00dc)
#define AM33XX_CM_PER_L3_CLKCTRL_OFFSET			0x00e0
#define AM33XX_CM_PER_L3_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x00e0)
#define AM33XX_CM_PER_IEEE5000_CLKCTRL_OFFSET		0x00e4
#define AM33XX_CM_PER_IEEE5000_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x00e4)
#define AM33XX_CM_PER_PRUSS_CLKCTRL_OFFSET		0x00e8
#define AM33XX_CM_PER_PRUSS_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x00e8)
#define AM33XX_CM_PER_TIMER5_CLKCTRL_OFFSET		0x00ec
#define AM33XX_CM_PER_TIMER5_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x00ec)
#define AM33XX_CM_PER_TIMER6_CLKCTRL_OFFSET		0x00f0
#define AM33XX_CM_PER_TIMER6_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x00f0)
#define AM33XX_CM_PER_MMC1_CLKCTRL_OFFSET		0x00f4
#define AM33XX_CM_PER_MMC1_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x00f4)
#define AM33XX_CM_PER_MMC2_CLKCTRL_OFFSET		0x00f8
#define AM33XX_CM_PER_MMC2_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x00f8)
#define AM33XX_CM_PER_TPTC1_CLKCTRL_OFFSET		0x00fc
#define AM33XX_CM_PER_TPTC1_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x00fc)
#define AM33XX_CM_PER_TPTC2_CLKCTRL_OFFSET		0x0100
#define AM33XX_CM_PER_TPTC2_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0100)
#define AM33XX_CM_PER_GPIO5_CLKCTRL_OFFSET		0x0104
#define AM33XX_CM_PER_GPIO5_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0104)
#define AM33XX_CM_PER_SPINLOCK_CLKCTRL_OFFSET		0x010c
#define AM33XX_CM_PER_SPINLOCK_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x010c)
#define AM33XX_CM_PER_MAILBOX0_CLKCTRL_OFFSET		0x0110
#define AM33XX_CM_PER_MAILBOX0_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0110)
#define AM33XX_CM_PER_L4HS_CLKSTCTRL_OFFSET		0x011c
#define AM33XX_CM_PER_L4HS_CLKSTCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x011c)
#define AM33XX_CM_PER_L4HS_CLKCTRL_OFFSET		0x0120
#define AM33XX_CM_PER_L4HS_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0120)
#define AM33XX_CM_PER_MSTR_EXPS_CLKCTRL_OFFSET		0x0124
#define AM33XX_CM_PER_MSTR_EXPS_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0124)
#define AM33XX_CM_PER_SLV_EXPS_CLKCTRL_OFFSET		0x0128
#define AM33XX_CM_PER_SLV_EXPS_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0128)
#define AM33XX_CM_PER_OCPWP_L3_CLKSTCTRL_OFFSET		0x012c
#define AM33XX_CM_PER_OCPWP_L3_CLKSTCTRL		AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x012c)
#define AM33XX_CM_PER_OCPWP_CLKCTRL_OFFSET		0x0130
#define AM33XX_CM_PER_OCPWP_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0130)
#define AM33XX_CM_PER_MAILBOX1_CLKCTRL_OFFSET		0x0134
#define AM33XX_CM_PER_MAILBOX1_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0134)
#define AM33XX_CM_PER_PRUSS_CLKSTCTRL_OFFSET		0x0140
#define AM33XX_CM_PER_PRUSS_CLKSTCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0140)
#define AM33XX_CM_PER_CPSW_CLKSTCTRL_OFFSET		0x0144
#define AM33XX_CM_PER_CPSW_CLKSTCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0144)
#define AM33XX_CM_PER_LCDC_CLKSTCTRL_OFFSET		0x0148
#define AM33XX_CM_PER_LCDC_CLKSTCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0148)
#define AM33XX_CM_PER_CLKDIV32K_CLKCTRL_OFFSET		0x014c
#define AM33XX_CM_PER_CLKDIV32K_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x014c)
#define AM33XX_CM_PER_CLK_24MHZ_CLKSTCTRL_OFFSET	0x0150
#define AM33XX_CM_PER_CLK_24MHZ_CLKSTCTRL		AM33XX_CM_REGADDR(AM33XX_CM_PER_MOD, 0x0150)

/* CM.WKUP_CM register offsets */
#define AM33XX_CM_WKUP_CLKSTCTRL_OFFSET			0x0000
#define AM33XX_CM_WKUP_CLKSTCTRL			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0000)
#define AM33XX_CM_WKUP_CONTROL_CLKCTRL_OFFSET		0x0004
#define AM33XX_CM_WKUP_CONTROL_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0004)
#define AM33XX_CM_WKUP_GPIO0_CLKCTRL_OFFSET		0x0008
#define AM33XX_CM_WKUP_GPIO0_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0008)
#define AM33XX_CM_WKUP_L4WKUP_CLKCTRL_OFFSET		0x000c
#define AM33XX_CM_WKUP_L4WKUP_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x000c)
#define AM33XX_CM_WKUP_TIMER0_CLKCTRL_OFFSET		0x0010
#define AM33XX_CM_WKUP_TIMER0_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0010)
#define AM33XX_CM_WKUP_DEBUGSS_CLKCTRL_OFFSET		0x0014
#define AM33XX_CM_WKUP_DEBUGSS_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0014)
#define AM33XX_CM_L3_AON_CLKSTCTRL_OFFSET		0x0018
#define AM33XX_CM_L3_AON_CLKSTCTRL			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0018)
#define AM33XX_CM_AUTOIDLE_DPLL_MPU_OFFSET		0x001c
#define AM33XX_CM_AUTOIDLE_DPLL_MPU			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x001c)
#define AM33XX_CM_IDLEST_DPLL_MPU_OFFSET		0x0020
#define AM33XX_CM_IDLEST_DPLL_MPU			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0020)
#define AM33XX_CM_SSC_DELTAMSTEP_DPLL_MPU_OFFSET	0x0024
#define AM33XX_CM_SSC_DELTAMSTEP_DPLL_MPU		AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0024)
#define AM33XX_CM_SSC_MODFREQDIV_DPLL_MPU_OFFSET	0x0028
#define AM33XX_CM_SSC_MODFREQDIV_DPLL_MPU		AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0028)
#define AM33XX_CM_CLKSEL_DPLL_MPU_OFFSET		0x002c
#define AM33XX_CM_CLKSEL_DPLL_MPU			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x002c)
#define AM33XX_CM_AUTOIDLE_DPLL_DDR_OFFSET		0x0030
#define AM33XX_CM_AUTOIDLE_DPLL_DDR			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0030)
#define AM33XX_CM_IDLEST_DPLL_DDR_OFFSET		0x0034
#define AM33XX_CM_IDLEST_DPLL_DDR			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0034)
#define AM33XX_CM_SSC_DELTAMSTEP_DPLL_DDR_OFFSET	0x0038
#define AM33XX_CM_SSC_DELTAMSTEP_DPLL_DDR		AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0038)
#define AM33XX_CM_SSC_MODFREQDIV_DPLL_DDR_OFFSET	0x003c
#define AM33XX_CM_SSC_MODFREQDIV_DPLL_DDR		AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x003c)
#define AM33XX_CM_CLKSEL_DPLL_DDR_OFFSET		0x0040
#define AM33XX_CM_CLKSEL_DPLL_DDR			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0040)
#define AM33XX_CM_AUTOIDLE_DPLL_DISP_OFFSET		0x0044
#define AM33XX_CM_AUTOIDLE_DPLL_DISP			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0044)
#define AM33XX_CM_IDLEST_DPLL_DISP_OFFSET		0x0048
#define AM33XX_CM_IDLEST_DPLL_DISP			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0048)
#define AM33XX_CM_SSC_DELTAMSTEP_DPLL_DISP_OFFSET	0x004c
#define AM33XX_CM_SSC_DELTAMSTEP_DPLL_DISP		AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x004c)
#define AM33XX_CM_SSC_MODFREQDIV_DPLL_DISP_OFFSET	0x0050
#define AM33XX_CM_SSC_MODFREQDIV_DPLL_DISP		AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0050)
#define AM33XX_CM_CLKSEL_DPLL_DISP_OFFSET		0x0054
#define AM33XX_CM_CLKSEL_DPLL_DISP			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0054)
#define AM33XX_CM_AUTOIDLE_DPLL_CORE_OFFSET		0x0058
#define AM33XX_CM_AUTOIDLE_DPLL_CORE			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0058)
#define AM33XX_CM_IDLEST_DPLL_CORE_OFFSET		0x005c
#define AM33XX_CM_IDLEST_DPLL_CORE			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x005c)
#define AM33XX_CM_SSC_DELTAMSTEP_DPLL_CORE_OFFSET	0x0060
#define AM33XX_CM_SSC_DELTAMSTEP_DPLL_CORE		AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0060)
#define AM33XX_CM_SSC_MODFREQDIV_DPLL_CORE_OFFSET	0x0064
#define AM33XX_CM_SSC_MODFREQDIV_DPLL_CORE		AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0064)
#define AM33XX_CM_CLKSEL_DPLL_CORE_OFFSET		0x0068
#define AM33XX_CM_CLKSEL_DPLL_CORE			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0068)
#define AM33XX_CM_AUTOIDLE_DPLL_PER_OFFSET		0x006c
#define AM33XX_CM_AUTOIDLE_DPLL_PER			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x006c)
#define AM33XX_CM_IDLEST_DPLL_PER_OFFSET		0x0070
#define AM33XX_CM_IDLEST_DPLL_PER			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0070)
#define AM33XX_CM_SSC_DELTAMSTEP_DPLL_PER_OFFSET	0x0074
#define AM33XX_CM_SSC_DELTAMSTEP_DPLL_PER		AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0074)
#define AM33XX_CM_SSC_MODFREQDIV_DPLL_PER_OFFSET	0x0078
#define AM33XX_CM_SSC_MODFREQDIV_DPLL_PER		AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0078)
#define AM33XX_CM_CLKDCOLDO_DPLL_PER_OFFSET		0x007c
#define AM33XX_CM_CLKDCOLDO_DPLL_PER			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x007c)
#define AM33XX_CM_DIV_M4_DPLL_CORE_OFFSET		0x0080
#define AM33XX_CM_DIV_M4_DPLL_CORE			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0080)
#define AM33XX_CM_DIV_M5_DPLL_CORE_OFFSET		0x0084
#define AM33XX_CM_DIV_M5_DPLL_CORE			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0084)
#define AM33XX_CM_CLKMODE_DPLL_MPU_OFFSET		0x0088
#define AM33XX_CM_CLKMODE_DPLL_MPU			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0088)
#define AM33XX_CM_CLKMODE_DPLL_PER_OFFSET		0x008c
#define AM33XX_CM_CLKMODE_DPLL_PER			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x008c)
#define AM33XX_CM_CLKMODE_DPLL_CORE_OFFSET		0x0090
#define AM33XX_CM_CLKMODE_DPLL_CORE			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0090)
#define AM33XX_CM_CLKMODE_DPLL_DDR_OFFSET		0x0094
#define AM33XX_CM_CLKMODE_DPLL_DDR			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0094)
#define AM33XX_CM_CLKMODE_DPLL_DISP_OFFSET		0x0098
#define AM33XX_CM_CLKMODE_DPLL_DISP			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x0098)
#define AM33XX_CM_CLKSEL_DPLL_PERIPH_OFFSET		0x009c
#define AM33XX_CM_CLKSEL_DPLL_PERIPH			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x009c)
#define AM33XX_CM_DIV_M2_DPLL_DDR_OFFSET		0x00a0
#define AM33XX_CM_DIV_M2_DPLL_DDR			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x00a0)
#define AM33XX_CM_DIV_M2_DPLL_DISP_OFFSET		0x00a4
#define AM33XX_CM_DIV_M2_DPLL_DISP			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x00a4)
#define AM33XX_CM_DIV_M2_DPLL_MPU_OFFSET		0x00a8
#define AM33XX_CM_DIV_M2_DPLL_MPU			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x00a8)
#define AM33XX_CM_DIV_M2_DPLL_PER_OFFSET		0x00ac
#define AM33XX_CM_DIV_M2_DPLL_PER			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x00ac)
#define AM33XX_CM_WKUP_WKUP_M3_CLKCTRL_OFFSET		0x00b0
#define AM33XX_CM_WKUP_WKUP_M3_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x00b0)
#define AM33XX_CM_WKUP_UART0_CLKCTRL_OFFSET		0x00b4
#define AM33XX_CM_WKUP_UART0_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x00b4)
#define AM33XX_CM_WKUP_I2C0_CLKCTRL_OFFSET		0x00b8
#define AM33XX_CM_WKUP_I2C0_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x00b8)
#define AM33XX_CM_WKUP_ADC_TSC_CLKCTRL_OFFSET		0x00bc
#define AM33XX_CM_WKUP_ADC_TSC_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x00bc)
#define AM33XX_CM_WKUP_SMARTREFLEX0_CLKCTRL_OFFSET	0x00c0
#define AM33XX_CM_WKUP_SMARTREFLEX0_CLKCTRL		AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x00c0)
#define AM33XX_CM_WKUP_TIMER1_CLKCTRL_OFFSET		0x00c4
#define AM33XX_CM_WKUP_TIMER1_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x00c4)
#define AM33XX_CM_WKUP_SMARTREFLEX1_CLKCTRL_OFFSET	0x00c8
#define AM33XX_CM_WKUP_SMARTREFLEX1_CLKCTRL		AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x00c8)
#define AM33XX_CM_L4_WKUP_AON_CLKSTCTRL_OFFSET		0x00cc
#define AM33XX_CM_L4_WKUP_AON_CLKSTCTRL			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x00cc)
#define AM33XX_CM_WKUP_WDT0_CLKCTRL_OFFSET		0x00d0
#define AM33XX_CM_WKUP_WDT0_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x00d0)
#define AM33XX_CM_WKUP_WDT1_CLKCTRL_OFFSET		0x00d4
#define AM33XX_CM_WKUP_WDT1_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x00d4)
#define AM33XX_CM_DIV_M6_DPLL_CORE_OFFSET		0x00d8
#define AM33XX_CM_DIV_M6_DPLL_CORE			AM33XX_CM_REGADDR(AM33XX_CM_WKUP_MOD, 0x00d8)

/* CM.DPLL_CM register offsets */
#define AM33XX_CLKSEL_TIMER7_CLK_OFFSET			0x0004
#define AM33XX_CLKSEL_TIMER7_CLK			AM33XX_CM_REGADDR(AM33XX_CM_DPLL_MOD, 0x0004)
#define AM33XX_CLKSEL_TIMER2_CLK_OFFSET			0x0008
#define AM33XX_CLKSEL_TIMER2_CLK			AM33XX_CM_REGADDR(AM33XX_CM_DPLL_MOD, 0x0008)
#define AM33XX_CLKSEL_TIMER3_CLK_OFFSET			0x000c
#define AM33XX_CLKSEL_TIMER3_CLK			AM33XX_CM_REGADDR(AM33XX_CM_DPLL_MOD, 0x000c)
#define AM33XX_CLKSEL_TIMER4_CLK_OFFSET			0x0010
#define AM33XX_CLKSEL_TIMER4_CLK			AM33XX_CM_REGADDR(AM33XX_CM_DPLL_MOD, 0x0010)
#define AM33XX_CM_MAC_CLKSEL_OFFSET			0x0014
#define AM33XX_CM_MAC_CLKSEL				AM33XX_CM_REGADDR(AM33XX_CM_DPLL_MOD, 0x0014)
#define AM33XX_CLKSEL_TIMER5_CLK_OFFSET			0x0018
#define AM33XX_CLKSEL_TIMER5_CLK			AM33XX_CM_REGADDR(AM33XX_CM_DPLL_MOD, 0x0018)
#define AM33XX_CLKSEL_TIMER6_CLK_OFFSET			0x001c
#define AM33XX_CLKSEL_TIMER6_CLK			AM33XX_CM_REGADDR(AM33XX_CM_DPLL_MOD, 0x001c)
#define AM33XX_CM_CPTS_RFT_CLKSEL_OFFSET		0x0020
#define AM33XX_CM_CPTS_RFT_CLKSEL			AM33XX_CM_REGADDR(AM33XX_CM_DPLL_MOD, 0x0020)
#define AM33XX_CLKSEL_TIMER1MS_CLK_OFFSET		0x0028
#define AM33XX_CLKSEL_TIMER1MS_CLK			AM33XX_CM_REGADDR(AM33XX_CM_DPLL_MOD, 0x0028)
#define AM33XX_CLKSEL_GFX_FCLK_OFFSET			0x002c
#define AM33XX_CLKSEL_GFX_FCLK				AM33XX_CM_REGADDR(AM33XX_CM_DPLL_MOD, 0x002c)
#define AM33XX_CLKSEL_PRUSS_OCP_CLK_OFFSET		0x0030
#define AM33XX_CLKSEL_PRUSS_OCP_CLK			AM33XX_CM_REGADDR(AM33XX_CM_DPLL_MOD, 0x0030)
#define AM33XX_CLKSEL_LCDC_PIXEL_CLK_OFFSET		0x0034
#define AM33XX_CLKSEL_LCDC_PIXEL_CLK			AM33XX_CM_REGADDR(AM33XX_CM_DPLL_MOD, 0x0034)
#define AM33XX_CLKSEL_WDT1_CLK_OFFSET			0x0038
#define AM33XX_CLKSEL_WDT1_CLK				AM33XX_CM_REGADDR(AM33XX_CM_DPLL_MOD, 0x0038)
#define AM33XX_CLKSEL_GPIO0_DBCLK_OFFSET		0x003c
#define AM33XX_CLKSEL_GPIO0_DBCLK			AM33XX_CM_REGADDR(AM33XX_CM_DPLL_MOD, 0x003c)

/* CM.MPU_CM register offsets */
#define AM33XX_CM_MPU_CLKSTCTRL_OFFSET			0x0000
#define AM33XX_CM_MPU_CLKSTCTRL				AM33XX_CM_REGADDR(AM33XX_CM_MPU_MOD, 0x0000)
#define AM33XX_CM_MPU_MPU_CLKCTRL_OFFSET		0x0004
#define AM33XX_CM_MPU_MPU_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_MPU_MOD, 0x0004)

/* CM.DEVICE_CM register offsets */
#define AM33XX_CM_CLKOUT_CTRL_OFFSET			0x0000
#define AM33XX_CM_CLKOUT_CTRL				AM33XX_CM_REGADDR(AM33XX_CM_DEVICE_MOD, 0x0000)

/* CM.RTC_CM register offsets */
#define AM33XX_CM_RTC_RTC_CLKCTRL_OFFSET		0x0000
#define AM33XX_CM_RTC_RTC_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_RTC_MOD, 0x0000)
#define AM33XX_CM_RTC_CLKSTCTRL_OFFSET			0x0004
#define AM33XX_CM_RTC_CLKSTCTRL				AM33XX_CM_REGADDR(AM33XX_CM_RTC_MOD, 0x0004)

/* CM.GFX_CM register offsets */
#define AM33XX_CM_GFX_L3_CLKSTCTRL_OFFSET		0x0000
#define AM33XX_CM_GFX_L3_CLKSTCTRL			AM33XX_CM_REGADDR(AM33XX_CM_GFX_MOD, 0x0000)
#define AM33XX_CM_GFX_GFX_CLKCTRL_OFFSET		0x0004
#define AM33XX_CM_GFX_GFX_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_GFX_MOD, 0x0004)
#define AM33XX_CM_GFX_BITBLT_CLKCTRL_OFFSET		0x0008
#define AM33XX_CM_GFX_BITBLT_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_GFX_MOD, 0x0008)
#define AM33XX_CM_GFX_L4LS_GFX_CLKSTCTRL__1_OFFSET	0x000c
#define AM33XX_CM_GFX_L4LS_GFX_CLKSTCTRL__1		AM33XX_CM_REGADDR(AM33XX_CM_GFX_MOD, 0x000c)
#define AM33XX_CM_GFX_MMUCFG_CLKCTRL_OFFSET		0x0010
#define AM33XX_CM_GFX_MMUCFG_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_GFX_MOD, 0x0010)
#define AM33XX_CM_GFX_MMUDATA_CLKCTRL_OFFSET		0x0014
#define AM33XX_CM_GFX_MMUDATA_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_GFX_MOD, 0x0014)

/* CM.CEFUSE_CM register offsets */
#define AM33XX_CM_CEFUSE_CLKSTCTRL_OFFSET		0x0000
#define AM33XX_CM_CEFUSE_CLKSTCTRL			AM33XX_CM_REGADDR(AM33XX_CM_CEFUSE_MOD, 0x0000)
#define AM33XX_CM_CEFUSE_CEFUSE_CLKCTRL_OFFSET		0x0020
#define AM33XX_CM_CEFUSE_CEFUSE_CLKCTRL			AM33XX_CM_REGADDR(AM33XX_CM_CEFUSE_MOD, 0x0020)


#ifndef __ASSEMBLER__
extern bool am33xx_cm_is_clkdm_in_hwsup(s16 inst, u16 cdoffs);
extern void am33xx_cm_clkdm_enable_hwsup(s16 inst, u16 cdoffs);
extern void am33xx_cm_clkdm_disable_hwsup(s16 inst, u16 cdoffs);
extern void am33xx_cm_clkdm_force_sleep(s16 inst, u16 cdoffs);
extern void am33xx_cm_clkdm_force_wakeup(s16 inst, u16 cdoffs);

#ifdef CONFIG_SOC_AM33XX
extern int am33xx_cm_wait_module_idle(u16 inst, s16 cdoffs,
					u16 clkctrl_offs);
extern void am33xx_cm_module_enable(u8 mode, u16 inst, s16 cdoffs,
					u16 clkctrl_offs);
extern void am33xx_cm_module_disable(u16 inst, s16 cdoffs,
					u16 clkctrl_offs);
extern int am33xx_cm_wait_module_ready(u16 inst, s16 cdoffs,
					u16 clkctrl_offs);
#else
static inline int am33xx_cm_wait_module_idle(u16 inst, s16 cdoffs,
					u16 clkctrl_offs)
{
	return 0;
}
static inline void am33xx_cm_module_enable(u8 mode, u16 inst, s16 cdoffs,
					u16 clkctrl_offs)
{
}
static inline void am33xx_cm_module_disable(u16 inst, s16 cdoffs,
					u16 clkctrl_offs)
{
}
static inline int am33xx_cm_wait_module_ready(u16 inst, s16 cdoffs,
					u16 clkctrl_offs)
{
	return 0;
}
#endif

#endif /* ASSEMBLER */
#endif

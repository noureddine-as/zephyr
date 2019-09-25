/*
 * Copyright (c) 2017 Jean-Paul Etienne <fractalclone@gmail.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file SoC configuration macros for the SiFive Freedom processor
 */

#ifndef __RISCV_LOWRISC_FREEDOM_SOC_H_
#define __RISCV_LOWRISC_FREEDOM_SOC_H_

#include <soc_common.h>
#include <generated_dts_board.h>

/* PINMUX Configuration */
#define LOWRISC_PINMUX_0_BASE_ADDR     (DT_INST_0_LOWRISC_GPIO0_BASE_ADDRESS + 0x38)

/* PINMUX IO Hardware Functions */
#define LOWRISC_PINMUX_IOF0            0x00
#define LOWRISC_PINMUX_IOF1            0x01

/* PINMUX MAX PINS */
#define LOWRISC_PINMUX_PINS            32

/* Clock controller. */
#define PRCI_BASE_ADDR               0x10008000

/* Timer configuration */
#define RISCV_MTIME_BASE             0x0200BFF8
#define RISCV_MTIMECMP_BASE          0x02004000

/* Always ON Domain */
#define LOWRISC_PMUIE		     0x10000140
#define LOWRISC_PMUCAUSE		     0x10000144
#define LOWRISC_PMUSLEEP		     0x10000148
#define LOWRISC_PMUKEY		     0x1000014C
#define LOWRISC_SLEEP_KEY_VAL	     0x0051F15E

#define LOWRISC_BACKUP_REG_BASE	     0x10000080

/* lib-c hooks required RAM defined variables */
#define RISCV_RAM_BASE               DT_SRAM_BASE_ADDRESS
#define RISCV_RAM_SIZE               KB(DT_SRAM_SIZE)

#endif /* __RISCV_LOWRISC_FREEDOM_SOC_H_ */

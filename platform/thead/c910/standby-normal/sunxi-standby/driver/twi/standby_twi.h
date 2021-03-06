// SPDX-License-Identifier: BSD-2-Clause
/*
*********************************************************************************************************
*                                                    LINUX-KERNEL
*                                        AllWinner Linux Platform Develop Kits
*                                                   Kernel Module
*
*                                    (c) Copyright 2006-2011, kevin.z China
*                                             All Rights Reserved
*
* File    : standby_twi.h
* By      : kevin.z
* Version : v1.0
* Date    : 2011-5-31 15:22
* Descript:
* Update  : date                auther      ver     notes
*********************************************************************************************************
*/

#ifndef __STANDBY_TWI_H__
#define __STANDBY_TWI_H__
#include "type.h"
#include "head.h"

typedef struct tag_twic_reg {
	volatile unsigned int reg_saddr;
	volatile unsigned int reg_xsaddr;
	volatile unsigned int reg_data;
	volatile unsigned int reg_ctl;
	volatile unsigned int reg_status;
	volatile unsigned int reg_clkr;
	volatile unsigned int reg_reset;
	volatile unsigned int reg_efr;
	volatile unsigned int reg_lctl;
} __twic_reg_t;

enum twi_op_type_e {
	TWI_OP_RD,
	TWI_OP_WR,
};

extern s32 standby_twi_init(sram_head_t *para);
extern s32 standby_twi_exit(void);
extern s32 twi_byte_rw(enum twi_op_type_e op, u8 saddr, u8 baddr, u8 *data);

#endif /* __STANDBY_TWI_H__ */

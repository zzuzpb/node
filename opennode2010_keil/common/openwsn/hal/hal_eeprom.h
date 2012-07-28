/*******************************************************************************
 * This file is part of OpenWSN, the Open Wireless Sensor Network Platform.
 *
 * Copyright (C) 2005-2010 zhangwei(TongJi University)
 *
 * OpenWSN is a free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 2 or (at your option) any later version.
 *
 * OpenWSN is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
 * A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59 Temple
 * Place, Suite 330, Boston, MA 02111-1307 USA.
 *
 * For non-opensource or commercial applications, please choose commercial license.
 * Refer to OpenWSN site http://code.google.com/p/openwsn/ for more detail.
 *
 * For other questions, you can contact the author through email openwsn#gmail.com
 * or the mailing address: Dr. Wei Zhang, Dept. of Control, Dianxin Hall, TongJi
 * University, 4800 Caoan Road, Shanghai, China. Zip: 201804
 *
 ******************************************************************************/

#ifndef _EEPROM_H_5783_
#define _EEPROM_H_5783_
/*******************************************************************************
 * This module provides the interface to read/write e2prom.
 * 
 * @attention 
 *  - This module is firstly introduced on OpenWSN 2.0/3.5 hardware, which
 * uses LPC2136/LPC2146 from Philips(now NXP).
 *  - The atmegal128 micro-controller used by the MicaZ and GAINZ node has 4KB E2PROM.
 * 
 ******************************************************************************/

#include "hal_foundation.h"

void eeprom_rawread( uint32 flashaddr, uint32 memaddr, uint32 size );
void eeprom_rawwrite( uint32 flashaddr, uint32 memaddr, uint32 size );

#endif
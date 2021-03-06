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

#include "rtl_configall.h"

int16queue_t 
TiInt16Queue

typedef struct {uint16 value; uint16 next} _TiInt16QueueItem;

typedef struct
{
	uint16 count;
	uint16 capacity;
	uint16 head;
	uint16 tail;
}TiInt16Queue;

n16que_create

n16que_construct( char * buf, int len )
{
	TiInt16Queue * que;
	que = (TiInt16Queue *)buf;
	que->capacity = (len - sizeof(TiInt16Queue)) / _TiInt16QueueItem;
	que->count = 0;
	que->head = 0;
	que->tail = 0;
	return que;
}

n16que_destroy
n16que_free

n16que_assign

n16que_empty

n16que_full

n16que_front
n16que_back
n16que_push
n16que_pop
#define n16que_top front
n16que_size

n16que_insert
n16que_remove
n16que_transfer
n16que_next
n16que_prev
n16que_first
n16que_last





#define KCHARQUEUE_MAX_CAPACITY_LIMIT (0xFFFF-1)
#define kcharqueue_t TKCharQueue

TkCharQueue
//


typedef struct{
  uint16 count;
  uint16 capacity;
  uint16 head;
  uint16 tail;
  char * datatable;
}TKCharQueue; 


/* construct a queue object in a memory area
 * the memory is allocated as the following:
 *
 *	[KQueue structure][item 0][item 1]...[item count-1][data 1][data 2]...
 * 
 * all the items in the above memory area are grouped into two list:
 * the queue list and the available list. you can get one new item from 
 * the available list through que_applyitem() and return it back through  
 * que_releaseitem().
 * 
 * @param
 * 	buf			memory are
 * 	size		the memory size
 * 	capacity	maximum number of items the queue can hold. it should be 
 * 				less than KQUEUE_MAX_CAPACITY_LIMIT
 * @return 
 * 	an pointer to the KQueue object if success
 * 	NULL when failed
 */
TKCharQueue * cque_construct( void * buf, uint16 size, uint16 capacity );
void cque_destroy( TKCharQueue * que );

#define cque_isempty(que) (que->count == 0)
#define cque_isfull(que) (que->count >= que->capacity)

boolean cque_push( TKCharQueue * que, char ch );
boolean cque_pop( TKCharQueue * que, char * ch );
boolean cque_feed( TKCharQueue * que, char ch );

#endif








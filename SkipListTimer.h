
#ifndef _SKIP_LIST_TIMER_
#define _SKIP_LIST_TIMER_

#include "skiplist.h"
#include <stdint.h>

zskiplist *init_timer();
zskiplistNode *add_timer(zskiplist *zsl, uint32_t msec, handler_pt func);
void del_timer(zskiplist *zsl, zskiplistNode *zn);
void expire_timer(zskiplist *zsl);

#endif
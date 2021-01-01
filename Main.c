
#include "SkipListTimer.h"
#include <stdio.h>
#include <unistd.h> 


void print_hello(zskiplistNode *zn) {
    printf("hello world time = %lu\n", zn->score);
}

void print_hello1(zskiplistNode *zn) {
    printf("hello world1 time = %lu\n", zn->score);
}

void print_hello2(zskiplistNode *zn) {
    printf("hello world2 time = %lu\n", zn->score);
}

int main()
{
    zskiplist *zsl = init_timer();
    add_timer(zsl, 3010, print_hello);
    add_timer(zsl, 6000, print_hello1);
    add_timer(zsl, 9000, print_hello2);
    //zskiplistNode *zn = add_timer(zsl, 3005, print_hello);
    //del_timer(zsl, zn);
    //add_timer(zsl, 3008, print_hello);
    //add_timer(zsl, 3003, print_hello);
    // zslPrint(zsl);
    for (;;) {
        expire_timer(zsl);
        usleep(10000);
    }
    return 0;
}
// nginx keepalive 
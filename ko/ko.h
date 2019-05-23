#include <stdio.h>

#define true 1

#define false 0

#define SZ 64 //maximum size of array
#define MSK (SZ-1)//mask for applying on index

typedef int bool ;
//if index is more than max index
//it will beg from null
//ex (MSK=01000 INDEX=00111 RES=(01000&00111)=00000(first element))



void ad_bf(short *bf,short *tl,short vl); //add new element to the cycle buffer

void del_bf(short *bf,short *hd); //delete element in cycle buffer

bool empt(short *bf,short hd,short tl); //check if the buffer is empty

short rd_bf(short *bf,short hd,short in); //read the element after index in
short bf_cnt(short hd,short tl); //get the count of elements in buffer

void ar_bf(short *bf); //read whole buffer



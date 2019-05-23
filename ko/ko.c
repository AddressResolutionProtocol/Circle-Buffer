#include "ko.h"

//if index is more than max index
//it will beg from null
//ex (MSK=01000 INDEX=00111 RES=(01000&00111)=00000(first element))

void ad_bf(short *bf,short *tl,short vl) //add new element to the cycle buffer
{
bf[*tl&MSK]=vl; //add the element in the tail
*tl=*tl+1; //and offset the element to the next

}


void del_bf(short *bf,short *hd) //delete the element in cycle buffer
{
bf[*hd&MSK]=0; //delete head (the oldest element)
*hd=*hd+1; //and offset the head to the next added element


}



bool empt(short *bf,short hd,short tl)  //check if the cycle buffer is empty
{
if(hd==tl) //if the address of first added element (head) is equal to the last added el(tail)
	return 1; //the buffer is empty

return 0; //anyelse the buffer is not empty


}


short rd_bf(short *bf,short hd,short in)    //read the element after index 
{
return bf[(hd+in)&MSK];
}



short bf_cnt(short hd,short tl) //get the count of elements in buffer
{
return (tl-hd)&MSK;
}


void ar_bf(short *bf) //read whole buffer
{
printf("\n");

for(size_t i=0;i<SZ;i++)
{
//short *y=bf[i];
printf("%d",bf[i]);
printf("\t");
}

}





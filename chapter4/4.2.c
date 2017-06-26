//Check parity of a number
#include <stdio.h>

unsigned long setbit(unsigned long x, short ind)
{
	return (x|(1<<ind));
}

unsigned long clearbit(unsigned long x, short ind)
{
	return (x&~(1<<ind));
}

short getbit(unsigned long x, short ind)
{
	return ((x>>ind)&1);
		
}

unsigned long swapbits(unsigned long x, short i, short j)
{
	short bit_i,bit_j;
	bit_i = getbit(x,i);
	bit_j = getbit(x,j);
	if(bit_i!=bit_j){
		if(bit_i){
			x = setbit(x,j);
			x = clearbit(x,i);
		} else {
			x = setbit(x,i);
			x = clearbit(x,j);
		} 
	}
	return x;
}

//Lookup method
int main()
{
	unsigned long x = 1048635;
	printf("Swapped %ld is %ld \n",x,swapbits(x,2,20));
	return 0;
}

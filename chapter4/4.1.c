//Check parity of a number
#include <stdio.h>


//Bruce Force
short check_parity1(unsigned long x)
{
	short result = 0;
	while(x){
		result ^= x & 1;
		x >>=1;
	}
	return result;
}

//Little better
short check_parity2(unsigned long x)
{
	int num_1s = 0;
	while(x) {
		x= x & (x-1);
		num_1s++;
	}
	printf("Loop iter: %d\n",num_1s);
	return ((num_1s%2==0)?0:1);	
}

//Lookup method
int main()
{
	short parity;	
	parity = check_parity1(2552);
	printf("Parity:%d\n",parity);
	parity = check_parity2(2552);
	printf("Parity:%d\n",parity);
	return 0;
}

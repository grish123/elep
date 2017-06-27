//Check parity of a number

#include <stdio.h>

long double power(double x, int y)
{
	long double result = 1;
	
	for(int i = 0; i <y; i++)
		result *= x;
	
	return result;
}

//Lookup method
int main()
{
	short parity;
	double x = -256.935; 
	int y = 774;
	printf("%lf to the power of %d: %Lf \n",x,y,power(x,y));	
	return 0;
}

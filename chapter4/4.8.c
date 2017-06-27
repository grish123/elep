//Check parity of a number

#include <stdio.h>

int reverse_digits(int num)
{
	int ans = 0; int i = 0;
	short neg = (num < 0) ? 0 : 1;
	while(num) {
		ans = (ans*10) + (num % 10);
		num /= 10; 
	}
	if(neg)
		ans *= -1;
	return ans;
}

//Lookup method
int main()
{
	printf("Reversed Digit %d\n",reverse_digits(-8889999));
	return 0;
}

#include <stdio.h>
#include <math.h>
/*
Decimal Represenation of a decimal number: 
a3a2a1a0 = a3 * power(10,3) + a2 * power(10,2) + a1 * power(10,1) + a0 *power(10,0)

where ax : 0 < ax < 9

To check for palindrome-ness we want to walk through highest and lowest digits of a number and test if equal. If equal repeat (by reducing the number to remove the digits just compared) 

1. One way to do this is convert number to a string and then compare the string characters. Converting to string and then comparing both takes O(n) plus extra sspace to store the string and index's to walk through

2. Better way is maybe to take advantage of numeral system (as shown above)

To optimize we should be able to find how many digits are there in a given in one operation. For a number with n digits we need to find the power of 10 used to represent the nth digit: an * power(10, n)

essentially power(10,n) for nth decimal digit = 10 * floor(log10 given_number)
 
*/

short isPalindrome(int x)
{
	if (x < 0) return 0;
	
	int dp = pow(10, floor(log10(x)));
	while(x) { 
		if( x/dp != x%10)
			return 0;
		x = x - (x/dp * dp);
		x = (x - (x%10))/10; 
		dp = dp/100;
	}

	return 1;
}


//Lookup method
int main()
{
	int number;
	scanf("%d",&number);	
	printf("%d is %d\n",number,isPalindrome(number));
}

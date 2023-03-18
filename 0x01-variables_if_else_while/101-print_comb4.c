#include <stdio.h>

/**
 * 
 * Description: point all possible diffrent
 	       combinations of digits
*
* Rutern: Always 0 (success)
*/
int main(void)
{
	int digit1 = 0;
	int digit2 , digit3; 

	while(digit1 <= 9)
	{
	      digit2 = 0;
	while(digit2 <= 9)
	   {
		   digit3 = 0;
		   while(digit3 <=9)
			{
				if(digit

/*Problem Statement:
                    Accept number from user and print even factor of that number;
*/

/* Algorithm:
	START:
		Accept one number from user as iNo;
		create one couunter as iCnt and initiallise it at 1;
		iterate the counter less than that number which is given by user;
		
		then
		after iteraiting counter check that counter is divisible by 2;
		display the final value of that counter after division;
	END
	*/

#include "Header.h"

int main()
{
	int iNo=0;
	
	printf("Enter the number:");
	scanf("%d",&iNo);
	
	DisplayEvenFactor(iNo);
	
	return 0;
	
}
		
		
					
					

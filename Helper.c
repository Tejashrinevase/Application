
	////////////////////////////////////////////////////////////////
/// Function Name : DisplayEvenFactor;
/// Input : integer;
/// output: Integer;
/// Discription: it is used to display the even factor of that number;
/// Author : Tejashri H. Nevase
/// Date : 1 aug 2020
//////////////////////////////////////////////////////////////////
#include "Header.h"

void DisplayEvenFactor(int iNo)
{
	 int iCnt=0;
	
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if((iNo%iCnt==0)&&(iCnt%2==0))
		{
			printf("%d\n",iCnt);
			
		}
	}
}		
		

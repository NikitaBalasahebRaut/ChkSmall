//program to check given chracter is Smallcase or not

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char cValue)
{
	if((cValue >= 'a') && (cValue <= 'z'))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char ch = '\0';
	BOOL bRet = FALSE;
	
	printf("Enter the character \n");
	scanf("%c",&ch);
	
	bRet = ChkSmall(ch);
	
	if(bRet == TRUE)
	{
		printf("Given character is Small \n");
	}
	else
	{
		printf("Given character is not Small");
	}
	
	return 0;
}

/*

output

Enter the character
p
Given character is Small

D:\ProgramTopicWise\LB\4ProblemsOnString\ChkSmall>myexe
Enter the character
N
Given character is not Small

*/
/*
  Name - Neha Narayan Dhepe
  Branch - VLSI
  Batch - B
  PRN NO - 2503033111378UD007
  Date - 23/04/2026
 */
#include<stdio.h>
int main ()
{
	int marks;
	
	printf("Enter your marks : ");
	scanf("%d",&marks);
	
	if(marks==10)
	{
		printf("EXCELLENT A+");
	}
	else if(marks<=10)
	{
		printf("\n\nA");
	}
	else if(marks<=9)
	{
		printf("\n\nB+");
	}
	else if(marks<=8)
	{
		printf("\n\nB");
	}
	else if(marks<=7)
	{
		printf("\n\nC+");
	}
	else if(marks<=6)
	{
		printf("\n\nC");
	}
	else if(marks<=5)
	{
		printf("\n\nD");
	}
	else if(marks<=4)
	{
		printf("\n\nFAILED");
	}
	return 0;
}

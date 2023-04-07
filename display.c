#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	char ar1[] = "quickly!quickly!quick!ly";
	char ar2[] = "########################";

	int num =(sizeof(ar1) / sizeof(ar1[0]))-2;

	int i = 0,j = 0;


	printf("%s\n", ar2);

	for (i = 0;i<=2;i++)
	{
		
		
		for (j = i*8; j < (8+ i * 8); j++)
		{
			ar2[j] = ar1[j];
		}

		Sleep(1000);

		system("cls");

		printf("%s\n", ar2);


	}

	
}

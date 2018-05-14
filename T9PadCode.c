/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	int num,i;char a[50][1000];
	int j;
	char b[10][4]={{'.',',','?','!'},{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'}
,{'p','q','r','s'},{'t','u','v'},
{'w','x','y','z'},{'0'}};
printf("Enter the no. of characters you want to enter");
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT


for(i=0;i<num;i++)
{
    scanf("%s",a[i]);
}

printf("%c",a[1][3]);

for(i=0;i<num;i++)
{
        for(j=0;a[i][j]!=' ';j++)
        printf("\nLength of the String : %d",j);
}
    
}

void GetCharr(char m)
{
    for(int i=0;i<10;i++)
      for(int j=0;j<4;j++);
      
}

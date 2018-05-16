/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int num,i;char a[50][1000],PreviousCount,CurrentCount;
static int count=0;
int j;
char b[10][4]={{'.',',','?','!'},{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'}
,{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'},{'0'}};

void GetCharr(char);
int main()
{
printf("Enter the no. of characters you want to enter");
scanf("%d", &num);          
for(i=0;i<num;i++)
{
    scanf("%s",a[i]);
}

printf("%c",a[1][3]);

for(i=0;i<num;i++)
{count=0;
    for(j=0;a[i][j]!='\0';j++)
    {
       GetCharr(a[i][j]);
    }
       printf("\n Time Take %d",count);
}
    
}

void GetCharr(char m)
{
    for(int i=0;i<10;i++)
      for(int j=0;j<4;j++)
      {
          if(b[i][j]==m)
          {
              printf("\n%d",i);

              if(count!=0)
              {
                  if(PreviousCount!=i)
                  {
                      PreviousCount=CurrentCount;
                      CurrentCount=i;
                      count++;
                  }
              }
              else
              {
                  count++;
                    CurrentCount=i;
                   PreviousCount=CurrentCount;
                    
              
              }
                        }
      }
}

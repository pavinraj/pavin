#include<stdio.h>
int main()
{
chat a[100];
int n,i=0;
scanf("%[^\n]",a);
n=strlen(a);
for(i=0;a[i]<n;i++)
{
if(a[i]=='\0')
{
i++;
}}
  printf("%d",i);
  return 0;
  }


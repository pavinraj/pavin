#include<stdio.h>
int main()
{
chat a[100];
int n,i=0;
scanf("%[^\n]",a);
n=strlen(a);
for(i=0;a[i]<n;i++)
{
if(a[i]=='.')
{
i++;
}
  i=i+1;
  printf("%d",i);
  return 0;
  }


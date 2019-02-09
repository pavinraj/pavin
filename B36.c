#include<stdio.h>
int main()
{
int n,i;
char a[100];
scanf("%[^\n]",a);
n=strlen(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0' && a[i]<='9') || (a[i]>='a' && a[i]<='z'))
{
i++;
}
n=n-i;
printf("%d",n);
return 0;
}

#include<stdio.h>
int main()
{
chat a[100];
int n,i=0;,j=0;
scanf("%[^\n]",a);
n=strlen(a);
for(i=0;a[i]<n;i++)
{
if(a[i]=='\0')
{
i++;
}
else
{
j++;
}
j=j-i;
printf("%d",j);
return 0;
}

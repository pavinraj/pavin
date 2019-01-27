#include<stdio.h> 
int main()
{
int t;
char a[100];
scanf("%d",&t);
scanf("%s",&a);
while(t>0)
{
printf("%s",a);
t--;
}
return 0;
}

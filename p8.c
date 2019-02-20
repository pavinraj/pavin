#include<stdio.h>
int main()
{
char a[100],b[100];
int i;
scanf("%s%s",&a,&b);
a[0]=a[0]-32;
b[0]=b[0]-32;
printf("%s %s",a,b);
return 0;
}

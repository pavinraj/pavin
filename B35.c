#include<stdio.h>
int main()
{
int i=0;
char a[100];
scanf("%[^\n]",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]%2>=0)
{
i++;
}
}
printf("%d",i);
return 0;
}

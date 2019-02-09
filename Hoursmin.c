#include<stdio.h>
int main()
{
int n1,n2,n3,n4;
scanf("%d%d",&n1,&n2);
scanf("%d%d",&n3,&n4);
n1=n2-n1;
n3=n4-n3;
printf("%d %d",n1,n3);
return 0;
}

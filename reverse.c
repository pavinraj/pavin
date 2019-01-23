#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b[100];
  int i,j,c=0,k=0;
printf("enter string");
scanf("%s",&a);
  for(i=0;a[i]!='\0';i++)
      {
        c++;
      }
for(j=c-1;a[j]=0;j++)
{
  b[k]=a[j];
  k++;
}
  printf("%s",b);
getch();
}

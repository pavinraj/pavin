#include<stdio.h>
#include<conio.h>
void main()
{
  int n,t;
  clrscr();
  printf("enter test case");
  scanf("%d",&t);
  while(t!=0)
  {
  printf("enter value");
  scanf("%d",&n);
  if(n>0)
  {
    printf("positive");
  }
  elseif(n<0)
  {
    printf("negative");
  }
  else
  {
    printf("zero");
  }
  t--;
  }
  getch();
}

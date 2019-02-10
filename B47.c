#include<stdio.h>
 int main()
 {
 int a[100],i,n,l=0,t=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
 if(a[i]>l)
 {
 l=a[i];
 }
 }
 t=a[0];
 for(i=0;i<n;i++)
 {
 if(a[i]<t)
 {
 t=a[i];
 }
 }
 printf("%d %d",l,t);
 return 0;
 }
 

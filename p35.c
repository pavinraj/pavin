#include <stdio.h>
#include<string.h>
 
int main(void) {
	// your code goes here
char a[100],b[100];
int i,k=0,j,c=0;
scanf("%[^\n]",a);
for(i=0;a[i]!='\0';i++)
{
c=0;
for(j=0;a[j]!='\0';j++)
{
if(a[i]==a[j])
{
c++;
}
}
if(c==1)
{
b[k]=a[i];
k++;
}
}
for(i=0;i<k;i++)
{
printf("%c",b[i]);
}
	return 0;
}

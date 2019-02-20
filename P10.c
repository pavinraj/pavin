#include <stdio.h>
 
int main(void) {
	// your code goes here
char a[100],b[100];
int k=0,i;
gets(a);
gets(b);
for(i=0;a[i]!='\0';i++)
{
if(a[i]!=b[i])
{
k++;
}
}
 
if(k==1)
{
printf("yes")
}
else
{
printf("no");
}
 
	return 0;
}

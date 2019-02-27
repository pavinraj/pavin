
 #include <stdio.h>
int main()
{
    
 int n,i,m,k,z=0;
 scanf("%d",&n);
 while(n>0)
 {
     scanf("%d%d",&m,&k);
     if(m<k)
     {
         z++;
     }
     n--;
 }
 printf("%d",z);
 
    return 0;
}

#include <stdio.h>

int main()

{ int j;
    int n,k,i,a[40],temp=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }for(i=0;i<n;i++)
    {
        if((k-1)==i)
        {
            printf("\n%d",a[i]);
        }
    }
    
    
    return 0;

    
}

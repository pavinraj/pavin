#include <stdio.h>

int main()

{ int j;
    int n,k,c=0,i,a[70];
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            c++;
            if(c==k)
            {
                printf("\n%d",a[i]);
            }
        }
    }
    
    return 0;

    
}

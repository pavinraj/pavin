#include <stdio.h>
 
void main()
{
    int num1, num2, num3;
 
    printf("Enter num1, num2 and num3\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("num1 is the greatest \n");
        }
        else
        {
            printf("num3 is the greatest \n");
        }
    }
    else if (num2 > num3)
        printf("num2 is the greatest  \n");
    else
        printf("num3 is the greatest \n");
}
getch();
}

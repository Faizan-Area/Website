#include <stdio.h>
int main()
{
    int i, num, Prime;
    printf("Enter Any Number : ");
    scanf("%d", &num);

    // for (i = 2; i <= (num / 2); i++)
    for (i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            Prime = 0;
            break;
        }
    }

    if (Prime == 0)
    {
        printf("\n%d is Not Prime Number\n", num);
    }

    else
    {
        printf("\n%d is Prime Number\n", num);
    }

    return 0;

}

    /* int num, count = 0;
    printf("Enter any number : ");
    scanf("%d", &num);

    for (int i = 2; i <= (num / 2); i++)
    {
        if (num % i == 0)
        {
            count++;
            break;
        }
    }

    if (count == 0)
    {
        printf("This is Prime Number");
    }

    else
    {
        printf("This is not Prime Number");
    } */

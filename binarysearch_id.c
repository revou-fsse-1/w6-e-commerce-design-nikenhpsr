#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    long product_id = get_long("Product ID: ");

    //possible sample space
    long n;
    int i = 0;
    for (n = pow(2, i) ; i < 63; i++)
    {
        n += pow(2,i);
        n--;
    }
        printf("There are %li possible IDs\n", n);

    int binaryStep = log2(n);
    printf("Worst case condition: we need %i steps or cycles\n", binaryStep);

    long first = 0;
    long last = n;
    long mid = (first + last) / 2;

    if(product_id == mid)
    {
        printf("Cycle 1:\n\tFound it!\n");
    }
    else if(product_id < mid)
    {
        printf("Cycle 1:\n\tNeed to search in 1-50th percentile\n");
    }
    else if(product_id > mid)
    {
        printf("Cycle 1:\n\tNeed to search in 51-100th percentile\n");
    }
}

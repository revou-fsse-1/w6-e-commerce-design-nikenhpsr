#include <stdio.h>
#include <math.h>

int main(void)
{   
    long product_id = printf("Product ID: ");
    scanf("%li", &product_id);
    
    //possible sample space
    long n;
    int i = 0;
    for (n = pow(2, i); i < 63; i++)
    {
        n += pow(2,i);
        n--;
    }
        printf("There are %li possible IDs\n", n);

    do {
        product_id = printf("Product ID: ");
        scanf("%li", &product_id);
    }
    while(product_id < 0 || product_id > n);
    
    return 0;
    
    int binaryStep = log2(n);
    printf("Worst case condition: we need %i steps or cycles\n", binaryStep);

    //iteration 1
    long first = 0;
    long last = n;
    long mid = (first + last) / 2;

    if(product_id == mid)
    {
        printf("Iteration 1:\n\tFound it!\n");
    }
    else if(product_id < mid)
    {
        printf("Iteration 1:\n\tNeed to search in 1-50th percentile\n");
    }
    else
    {
        printf("Iteration 1:\n\tNeed to search in 51-100th percentile\n");
    }
    printf("This is last number at the end of cycle 1: %li\n", n / 2);
}

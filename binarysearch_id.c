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
    
    do 
    {
        product_id;
    }
    while(product_id < 0 || product_id > n);

    printf("There are %li possible IDs\n", n);

    //iteration 1
    int iteration = 1;
    int binaryStep = log2(n);
    printf("Worst case condition: we need %i steps or cycles\n", binaryStep);
    
    for(iteration; iteration < 64; iteration++)
    {
        long first = iteration;
        long last = n + 1;
        long mid = (first + last) / 2;
        if(product_id == mid)
        {
            printf("\n\tFound it!\n");
            printf("Product ID found in Iteration %i\n", iteration);
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

}

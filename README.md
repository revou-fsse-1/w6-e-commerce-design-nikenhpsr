# E-Commerce Design Assignment

## System Design

## Algorithm Design

## Complexity Analysis

1. Find Suitable Product ID -> Binary Search ($O(\log_{2} n)$)

Supposed that Product ID cannot be negative and Database stored in 64-bit hardware memory. Then we have possible 9 Quintillion Product IDs permutations as stated below:

*64-bit means you have ($2^0$ + $2^1$ + $2^2$ + ... + $2^{63}$) - 1 = 9223372036854775807 possible combinations*

by using C, this is how we calculate it

|                 **Input**                 |            **Output**             |
| :---------------------------------------: | :-------------------------------: |
| ![possible-ids](/assets/possible-ids.png) | ![output-1](/assets/output-1.png) |

Assuming that database already ordered, then we can use binary search to find Product Details (*Product ID = Primary Key in Databases*). Because ${n\to\infty}$ we can calculate worse scenario (Big O) for this case which is 

$O(\log_{2} n)$ = $log_{2} 9223372036854775807$ = 63 steps or cycles. 

You can refer to this code below for more details

|                 **Input**                 |            **Output**             |
| :---------------------------------------: | :-------------------------------: |
| ![possible-ids](/assets/binary-steps.png) | ![output-1](/assets/output-2.png) |

2. Update Product by ID

3. Create Order
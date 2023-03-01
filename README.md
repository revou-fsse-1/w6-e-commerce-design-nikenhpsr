# E-Commerce Design Assignment

## System Design

## Algorithm Design

## Complexity Analysis

1. Find Suitable Product ID -> Binary Search ($O(\log n)$)

Supposed that Product ID cannot be negative and Database stored in 64-bit hardware memory. Then we have possible 9 Quintillion Product IDs permutations as stated below:

_64-bit means you have ($2^0$ + $2^1$ + $2^2$ + ... + $2^{63}$) - 1 = 9223372036854775807 possible combinations_

by using C, this is how we calculate it

|                 **Input**                 |            **Output**             |
| :---------------------------------------: | :-------------------------------: |
| ![possible-ids](/assets/possible-ids.png) | ![output-1](/assets/output-1.png) |

Assuming that database already ordered, then we can use binary search to find Product Details (_Product ID = Primary Key in Databases_). Because ${n\to\infty}$ we can calculate worse scenario (Big O) for this case which is

$O(\log_{2} n)$ = $log_{2} 9223372036854775807$ = 63 steps or cycles.

You can refer to this code below for more details

|                 **Input**                 |            **Output**             |
| :---------------------------------------: | :-------------------------------: |
| ![binary-steps](/assets/binary-steps.png) | ![output-2](/assets/output-2.png) |

Example:
Suppose that we want to search for Product ID = 4719847891641 2147483617 1073741808. You can use the code below to see the result of Cycle 1 & Cycle 2:

|            **Input**            |            **Output**             |
| :-----------------------------: | :-------------------------------: |
| ![cycle-1](/assets/cycle-1.png) | ![output-1](/assets/output-3.png) |
| ![cycle-2](/assets/cycle-2.png) | ![output-4](/assets/output-4.png) |

2. Update Product by ID

3. Create Order

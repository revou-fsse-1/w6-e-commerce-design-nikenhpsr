# E-Commerce Design Assignment

## System Design

### High Level Design

|       **Get Product by ID Flow**        |       **Order Flow**        |
| :-------------------------------------: | :-------------------------: |
| ![get-product](/assets/get-product.png) | ![order](/assets/order.png) |

## Algorithm Design

### Pseudocode (order flow)

```
const idDatabase;
const i = productId;
function getProductByID(id) {
    for (i in idDatabase) {
        return productDetails;
    }
}
```

```
function orderedProduct {
    const price;
    const quantity;
    const listProduct = [];
    totalPrice = price x quantity;

    if (listProduct != fixed){
        listProduct--;
        totalPrice -= -quantity * price;
    } else {
        totalPrice will not change;
    }
    return totalPrice;
}
```

## Complexity Analysis

1. Find Suitable Product ID -> Binary Search ($O(\log n)$)

Supposed that Product ID cannot be negative and Database stored in 64-bit hardware memory. Then we have possible 9 Quintillion Product IDs permutations as stated below:

_64-bit means you have ($2^0$ + $2^1$ + $2^2$ + ... + $2^{63}$) - 1 = 9223372036854775807 possible combinations_

Assuming that database already ordered, then we can use binary search to find Product Details (_Product ID = Primary Key in Databases_). Because ${n\to\infty}$ and the amount of ID are reduce to $\frac{1}{2}^{k}$ for each iteration worse case scenario (Big O) is

$O(\log_{2} n)$ = $log_{2} 9223372036854775807$ = 63 steps or cycles.

2. Create Order

Time complexity for this step is $O(n)$ because the time will change in linear following the number of product in list.

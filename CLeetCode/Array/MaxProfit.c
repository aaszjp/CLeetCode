//
//  MaxProfit.c
//  CLeetCode
//
//  Created by andy.zhen on 2018/5/30.
//  Copyright © 2018年 andy.zhen. All rights reserved.
//

#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    if (!pricesSize) {
        return 0;
    }
    int profit = 0;
    for (int i = 1; i < pricesSize; i ++) {
        if (prices[i] > prices[i - 1]) {
            profit += prices[i] - prices[i - 1];
        }
    }
    return profit;
}

void testMaxProfit() {
    int prices[] = {7,1,5,3,6,4};
    printf("%d", maxProfit(prices, sizeof(prices) / sizeof(int)));
}

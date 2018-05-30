//
//  Common.c
//  CLeetCode
//
//  Created by andy.zhen on 2018/5/30.
//  Copyright © 2018年 andy.zhen. All rights reserved.
//

#include <stdio.h>

void printArray(int *arr, int arrLen) {
    int len = arrLen >= 0 ? arrLen : (int)(sizeof(arr) / sizeof(int));
    for (int i = 0; i < len; i ++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

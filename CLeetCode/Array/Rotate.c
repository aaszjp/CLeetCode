//
//  Rotate.c
//  CLeetCode
//
//  Created by andy.zhen on 2018/5/30.
//  Copyright © 2018年 andy.zhen. All rights reserved.
//

#include <stdio.h>
#include "Common.h"

void rotate(int* nums, int numsSize, int k) {
    if (!k || k == numsSize) {
        return;
    }
    int offset = k % numsSize;
    for (int i = 0; i < offset; i ++) {
        int temp = nums[numsSize - 1];
        for (int j = numsSize - 1; j > 0; j --) {
            nums[j] = nums[j - 1];
        }
        nums[0] = temp;
    }
}

void testRotate() {
    int nums[] = {-1,-100,3,99};
    int k = 2;
    rotate(nums, sizeof(nums) / sizeof(int), k);
    printArray(nums, sizeof(nums) / sizeof(int));
}

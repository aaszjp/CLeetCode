//
//  RemoveDuplicates.c
//  CLeetCode
//
//  Created by andy.zhen on 2018/5/30.
//  Copyright © 2018年 andy.zhen. All rights reserved.
//

#include <stdio.h>
#include "Common.h"

int removeDuplicates(int* nums, int numsSize) {
    if (!numsSize) {
        return 0;
    }
    int index = 1;
    for (int i = 1; i < numsSize; i ++) {
        if (nums[i] != nums[i - 1]) {
            nums[index++] = nums[i];
        }
    }
    return index;
}

void testRemoveDuplicates() {
    int nums[] = {0,0,1,1,1,2,2,3,3,4};
    int len = removeDuplicates(nums, sizeof(nums) / sizeof(int));
    printArray(nums, len);
}

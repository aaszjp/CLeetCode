//
//  Rotate.c
//  CLeetCode
//
//  Created by andy.zhen on 2018/5/30.
//  Copyright © 2018年 andy.zhen. All rights reserved.
//

#include <stdio.h>
#include "Common.h"

// 旋转数组


/*
 给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。
 示例 1:
 输入: [1,2,3,4,5,6,7] 和 k = 3
 输出: [5,6,7,1,2,3,4]
 解释:
 向右旋转 1 步: [7,1,2,3,4,5,6]
 向右旋转 2 步: [6,7,1,2,3,4,5]
 向右旋转 3 步: [5,6,7,1,2,3,4]
 
 示例 2:
 输入: [-1,-100,3,99] 和 k = 2
 输出: [3,99,-1,-100]
 解释:
 向右旋转 1 步: [99,-1,-100,3]
 向右旋转 2 步: [3,99,-1,-100]
 
 说明:
 尽可能想出更多的解决方案，至少有三种不同的方法可以解决这个问题。
 要求使用空间复杂度为 O(1) 的原地算法。
 
 */


void overTern(int* nums, int numsSize, int startIdx, int endIdx) {
    if (startIdx < 0 || startIdx >= numsSize || endIdx < 0 || endIdx >= numsSize) {
        return;
    }
    while (startIdx < endIdx) {
        swapInt(&nums[startIdx], &nums[endIdx]);
        startIdx++;
        endIdx--;
    }
}

void rotate(int* nums, int numsSize, int k) {
    if (!k || k == numsSize) {
        return;
    }
    int index = numsSize - 1 - k % numsSize;
    // 先翻转前一部分
    overTern(nums, numsSize, 0, index);
    // 再翻转后一部分
    overTern(nums, numsSize, index + 1, numsSize - 1);
    // 全局翻转
    overTern(nums, numsSize, 0, numsSize - 1);
}

void testRotate() {
    int nums[] = {1,2,3,4,5,6,7};
    int k = 3;
    rotate(nums, sizeof(nums) / sizeof(int), k);
    printArray(nums, sizeof(nums) / sizeof(int));
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    // 1. 设置返回数组的长度（必须赋值，告诉调用者结果数组的大小）
    *returnSize = numsSize;
    
    // 2. 为结果数组分配内存（int类型，共numsSize个元素）
    int* result = (int*)malloc(numsSize * sizeof(int));
    if (result == NULL) { // 内存分配失败的异常处理
        return NULL;
    }
    
    // 3. 计算累加和
    int carry = 0;
    for (int i = 0; i < numsSize; i++) {
        carry += nums[i];
        result[i] = carry; // 将累加结果存入新分配的数组
    }
    
    // 4. 返回分配好的结果数组
    return result;
}
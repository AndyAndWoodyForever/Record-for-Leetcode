int removeElement(int* nums, int numsSize, int val) {
    int slow = 0;    // 慢指针
    int fast = 0;    // 快指针
    for (; fast < numsSize; fast++) {
        if (nums[fast] != val) {
            nums[slow] = nums[fast];  
            slow++;                  
        }

    }

    return slow;
}
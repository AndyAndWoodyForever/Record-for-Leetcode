int removeDuplicates(int* nums, int numsSize) {

    int i = 0; // 慢指针
    int j = 1; // 快指针

    while (j < numsSize) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
        j++;
    }
    return i + 1;//长度为索引+1
}
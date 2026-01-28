/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    *returnSize = digitsSize;
    int* result = (int*)malloc(sizeof(int) * digitsSize);
    for (int i = 0; i < digitsSize; i++) {
        result[i] = digits[i];
    }

    int carry = 1; // 初始进位是 1
    for (int i = digitsSize - 1; i >= 0 && carry > 0; i--) {
        int sum = result[i] + carry;
        result[i] = sum % 10;
        carry = sum / 10;    
    }

    if (carry > 0) {
        *returnSize = digitsSize + 1;
        int* newResult = (int*)malloc(sizeof(int) * (digitsSize + 1));

        newResult[0] = carry; 
        for (int i = 0; i < digitsSize; i++) {
            newResult[i + 1] = result[i];
        }
        free(result); // 释放原来的内存
        result = newResult; // 指向新数组
    }

    return result;
}
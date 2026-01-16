int lengthOfLongestSubstring(char* s) {
    if (s == NULL || *s == '\0') {
        return 0;
    }

    int maxLen = 1; 
    int strLen = strlen(s);

    int i = 0;
    for (; i < strLen; i++) {
        int hasChar[128] = {0}; 
        int currentLen = 0;   
        int j = i;
        for (; j < strLen; j++) {
            char c = s[j];
            if (hasChar[c] == 1) {
                break;
            }
            hasChar[c] = 1;
            currentLen++;
        }
        if (currentLen > maxLen) {
            maxLen = currentLen;
        }
    }

    return maxLen;
}
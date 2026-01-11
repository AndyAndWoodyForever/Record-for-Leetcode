char* longestCommonPrefix(char** strs, int strsSize) {
   if (strsSize == 0) {
        return "";
    }
    char* s = strs[0];
    for (int j = 0; s[j]; j++) {
        for (int i = 1; i < strsSize; i++) {
            if (strs[i][j] != s[j]) {
                s[j] = '\0';
                return s;
            }
        }
    }
    return s;

}
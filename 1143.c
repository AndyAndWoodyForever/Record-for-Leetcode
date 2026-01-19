    int lcsLen(char *a, char *b)
{
    int m = strlen(a), n = strlen(b), i, j;
    for (i = 0; i <= m; i++) c[i][0] = 0;
    for (j = 1; j <= n; j++) c[0][j] = 0;
    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
            if (a[i-1] == b[j-1])
                c[i][j] = c[i-1][j-1] + 1;
            else if (c[i-1][j] > c[i][j-1])
                c[i][j] = c[i-1][j];
            else
                c[i][j] = c[i][j-1];
    return c[m][n];
}
char *build_lcs(char s[], char *a, int blen, int clen)
{
    s[clen] = '\0';
    int i = strlen(a), j = blen, k = clen - 1;
    while (k >= 0)
    {
        if (c[i][j] == c[i-1][j])
            i--;
        else if (c[i][j] == c[i][j-1])
            j--;
        else
        {
            s[k--] = a[i-1];
            i--;
            j--;
        }
    }
    return s;
}
int longestCommonSubsequence(char* text1, char* text2) {
    int c[1001][1001];
char str3[1001];
    int len = lcsLen(text1, text2);
    build_lcs(str3, text1, strlen(text2), len);
    return strlen(str3);
}
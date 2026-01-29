int strStr(char* haystack, char* needle) {
    int len_h = strlen(haystack), len_n = strlen(needle);
    if (len_n == 0) {
        return 0;
    }
    if (len_n > len_h) {
        return -1;
    }
    int i=0,j;
    int status=0,count=0;
    char aim[len_n+1]; 
    
    for(;i<=len_h-len_n;i++){
        for(j=i,count=0;count<len_n;){
            aim[count++]=haystack[j++];
        }
        aim[count]='\0'; 
        status=strcmp(aim,needle);
        if(status==0) return i;
    }
    return -1;
}
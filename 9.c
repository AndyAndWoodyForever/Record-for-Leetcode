bool isPalindrome(int x) {
    if(x<0) return false;
    int a[200],b[200];
    int i=0,k=0;
    int res=0,ret=x;
    for(;ret!=0;i++){
        res=ret%10;
        ret=ret/10;
        a[i]=res;
    }
    i--;
    int num=i,status=1;
    for(;k<=num;){
        b[k++]=a[i--];
    }
    for(i=0;i<=num;i++){
        if(a[i]!=b[i])  status=0;
    }
    if(status) return true;
    else return false;

}
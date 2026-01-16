double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int count1=0,count2=0;
    double nums[2000];
    int count=0;
    for(;count1<nums1Size && count2<nums2Size ;){
        if(nums1[count1]<=nums2[count2]){
            nums[count++]=nums1[count1++];
        }
        else nums[count++]=nums2[count2++];
    }
    if(count1==nums1Size && count2<nums2Size){
        do{
            nums[count++]=nums2[count2++];
        }while(count2<nums2Size);
    }
    if(count1<nums1Size && count2==nums2Size){
        do{
            nums[count++]=nums1[count1++];
        }while(count1<nums1Size);
    }
    if(count%2==0){
        return (nums[(count)/2] + nums[(count)/2-1])/2.0;
    }
    else return (nums[(count)/2]);
}
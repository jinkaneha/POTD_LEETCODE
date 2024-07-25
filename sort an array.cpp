class Solution {
public:
    void merge(vector<int> &nums,int start,int mid,int end){
        int len1=mid-start+1;
        int len2=end-mid;
        vector<int> arr1(len1);
        vector<int> arr2(len2);
        int originalindex=start;
        for(int i=0;i<len1;i++){
            arr1[i]=nums[originalindex];
            originalindex++;
        }
        originalindex=mid+1;
        for(int i=0;i<len2;i++){
            arr2[i]=nums[originalindex];
            originalindex++;
        }
        originalindex=start;
        int index1=0;
        int index2=0;
        while(index1<len1&&index2<len2){
            if(arr1[index1]<arr2[index2]){
                nums[originalindex]=arr1[index1];
                index1++;
            }
            else{
                nums[originalindex]=arr2[index2];
                index2++;
            }
            originalindex++;
        }
        while(index1<len1){
            nums[originalindex]=arr1[index1];
            originalindex++;
            index1++;
        }
         while(index2<len2){
            nums[originalindex]=arr2[index2];
            originalindex++;
            index2++;
        }
    }
    void mergesort(vector<int> &nums,int start,int end){
        if(start>=end){
            return;
        }
        int mid=start+(end-start)/2;
        mergesort(nums,start,mid);
        mergesort(nums,mid+1,end);
        merge(nums,start,mid,end);
    }
    vector<int> sortArray(vector<int>& nums) {
    int start=0;
    int end=nums.size()-1;
    mergesort(nums,start,end);
    return nums;
    }
};
//
// Created by 34043 on 2023/7/27.
//

#include <stdio.h>
int binarySearch(int * nums, int target, int left, int right){
    int middle = (right + left) / 2;
    if(left > right) return -1;
    if(nums[middle] == target) return middle;
    if(nums[middle] > target)
        return binarySearch(nums,target,left,middle-1);
    else return binarySearch(nums, target, middle+1, right);
}

int search(int* nums, int numsSize, int target){
    return binarySearch(nums,target,0,numsSize-1);
}
int main() {
    int arr[] = {1,3,4,6,7,8,10,11,13,15,17};
    printf("%d", search(arr,11,10));
    return 0;
}

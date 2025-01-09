int search(int* nums, int numsSize, int target) {
    int beg = 0;
    int end = numsSize - 1;
    int mid;

    while (beg <= end) { 
        mid = (beg + end) / 2; 

        if (nums[mid] == target) {
            printf("Element is found at index %d\n", mid);
            return mid; 
        } else if (target < nums[mid]) {
            end = mid - 1; 
        } else {
            beg = mid + 1; 
        }
    }

    printf("Element not found\n");
    return -1; 
}

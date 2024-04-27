#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for(int i=0; i<numsSize; i++){
        for(int j=i+1; j<numsSize; j++){
            
            if (*(nums+i) + *(nums+j) == target){
                *returnSize = 2;
                int* v = malloc(sizeof(int) * 2);
                *v = i;
                *(v+1) = j;
                return v;
            
            }
        }
    }
    
    return NULL;
}

void main(){
    int nums[] = {3,2,4};
    int numsSize = 3;
    int target = 6;
    int returnSize = 0;

    int *response = twoSum(nums, numsSize, target, &returnSize);
    
    printf("\n");
    for(int i=0; i<returnSize; i++)
        printf("%d ", *(response + i));
    printf("\n");

}

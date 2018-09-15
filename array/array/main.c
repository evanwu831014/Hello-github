#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target);
int main()
{
	int nums[4]={2,7,11,15};
	int numsSize=4;
	int target=9;
	int *ans;

	ans=twoSum(nums,numsSize,target);
	printf("%d %d\n",ans[0],ans[1]);


	system("pause");
	return 0;
}
int* twoSum(int* nums, int numsSize, int target) 
{
    
	int i=0, j=0, sum=0;
    int ans[2];
    int*a;
    for(i=0;i<numsSize;i++)
    {
        for(j=i+1;j<numsSize;j++)
            {   if( target == (nums[i]+nums[j]) )
                    {ans[0]=i; ans[1]=j;   }
            }
    }

    a=&ans;
return a;
}
//yashika vaish
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count=0,count1=0,count2=0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]==0)
                count++;
            else if(nums[i]==1)
                count1++;
            else
                count2++;
        } 
        int i;
        while(count>0)
        {
            nums[i]=0;
            i++;
            count--;
        }
        while(count1>0)
        {
            nums[i]=1;
            i++;
            count1--;
        }
        while(count2>0)
        {
            nums[i]=2;
            i++;
            count2--;
        }        

        
    }
};

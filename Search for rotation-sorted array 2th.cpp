class Solution {
public:
    bool search(vector<int>& nums, int target) {
         if (nums.empty())
               return false;
         int l=0,r=nums.size()-1;
         while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target) return true;
            if(nums[mid]==nums[l]){
                l++;
                continue;
            }
            if(nums[mid]>nums[l]){
                 if(target>=nums[l] && target<nums[mid])
                     r=mid-1;
                 else 
                     l=mid+1;
             }
             else if(nums[mid]<nums[l]){
                 if(target>nums[mid] && target<=nums[r])
                     l=mid+1;
                  else 
                     r=mid-1;
             }
         }
           return false;
    } 
};
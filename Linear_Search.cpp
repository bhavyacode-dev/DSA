#include<iostream>
using namespace std;
#include<vector>
class Solution {
   public:
    int linearSearch(vector<int>& nums, int target) {
        // your code goes here
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                return i;
            }
        }

        return -1;
    }
};
int main()
{
    Solution obj;
    vector<int>nums={1,4,2,6,7};
    int target=2;
    int res=obj.linearSearch(nums,target);
    cout<<res;
}
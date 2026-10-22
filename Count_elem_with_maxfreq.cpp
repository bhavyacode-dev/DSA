#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    bool isPresent(vector<int>& sec, int k, int wanted) {
        for (int i = 0; i < k; i++) {
            if (sec[i] == wanted)
                return true;
        }
        return false;
    }
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> sec;
        int count;
        int max = 0;
        int ans = 0;
        int k = 0;
        for (int i = 0; i < n; i++) {
            count = 0;
            bool resp = isPresent(sec, k, nums[i]);
            if (resp == true)
                continue;
            for (int j = 0; j < n; j++) {
                if (nums[i] == nums[j])
                    count++;
            }
            sec.push_back(nums[i]);
            k++;

            if (max < count) {
                max = count;
                ans = max;

            } else if (max == count) {
                ans = ans + max;
            }
        }

        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int>nums={1,2,3,4,5};
    int res=obj.maxFrequencyElements(nums);
    cout<<res<<endl;
}
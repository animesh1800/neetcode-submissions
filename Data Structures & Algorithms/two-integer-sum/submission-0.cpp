class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

        vector<int> ans;
        map<int,int> mp;
        for(int i = 0; i < n; i++){
            int diff = target - nums[i];
            auto it = mp.find(diff);

            // cout << it->first << "value:" << it->second <<endl;

            if(it != mp.end()){
                if(it->second < i){
                    ans.push_back(it->second);
                    // cout << it->first <<endl;
                    ans.push_back(i);
                    // cout << i <<endl;
                }
                else{
                    ans.push_back(i);
                    ans.push_back(it->second);
                }
            }
            else{
                mp.emplace(nums[i],i);
        
            }
        }

        return ans;
    }
};

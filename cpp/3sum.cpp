/*
	@author: Rohit Chauhan
	Probem Name: 3Sum
	Problem Link: https://leetcode.com/problems/3sum/
	Date: 24-sep-2016
*/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>result;
        map<vector<int>,bool>mp;
        sort(nums.begin(),nums.end());
        vector<int>indices;
        int nums_size=nums.size();
        int start=0;
        int middle=start+1;
        int end=nums_size-1;
        while(start<=nums_size-3){
            int target=-nums[start];
            while(middle<end){
                int sums=nums[middle]+nums[end];
                if(sums==target){
                    vector<int> temp;
                    temp.push_back(nums[start]);
                    temp.push_back(nums[middle]);
                    temp.push_back(nums[end]);
                    if(mp.find(temp)==mp.end())
                        result.push_back(temp);
                        mp[temp]=true;
                    middle++;
                    end--;
                }
                else if(target>sums){
                    middle++;
                }
                else{
                    end--;
                }
            }
            start++;
            while(nums[start]==nums[start-1])
                start++;
            middle=start+1;
            end=nums_size-1;
        }
        return result;
    }
};
#include<bits/stdc++.h>

using namespace std;

int TwoSum(vector<int>& nums, int target){
    vector<pair<int,int>> numswithIndex(nums.size());
    for (int i = 0; i < nums.size(); i++){
        numswithIndex[i] = {nums[i], i};
    }

    sort(numswithIndex.begin(), numswithIndex.end());

    int left = 0;
    int right = nums.size() - 1;

    while (left < right)
    {
        int sum = numswithIndex[left].first + numswithIndex[right].first ;
        if (sum == target) {
            return {numswithIndex[left].second,numswithIndex[right].second};
        } 
        else if (sum < target) {
                left++;
        } 
        else {
                right--;
        }
    }
    return {};
    
}
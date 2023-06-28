#include<bits/stdc++.h>
using namespace std;

vector<string> summaryRanges(vector<int>& nums){
        vector<string> ans;
        int i = 0;
        while(i < nums.size()){
            int j = i;
            while(i < nums.size() - 1 and nums[i + 1] == nums[i] + 1){
                i++;
            }
            if(i != j){
                ans.push_back(to_string(nums[j]) + "->" + to_string(nums[i]));
            }else{
                ans.push_back(to_string(nums[i]));
            }
            i++;
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    vector<string> ans = summaryRanges(nums);
    for(auto it : s){
      cout << it << " ";
    }
}

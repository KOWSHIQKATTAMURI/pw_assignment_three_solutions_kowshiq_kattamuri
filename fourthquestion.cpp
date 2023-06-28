#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target){
    return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    cout << searchInsert(nums, m) << endl;
}

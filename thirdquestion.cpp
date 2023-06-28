#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums){
    next_permutation(nums.begin(), nums.end());
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    nextPermutation(nums);
    for(int i = 0; i < nums.size(); i++}{
        cout << nums[i] << " ";
    }
}

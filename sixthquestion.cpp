#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    auto kow = [](int& x, int& y){
       return x^y;
    };
    return accumulate(nums.begin(), nums.end(), 0, kow);
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    cout << singleNumber(nums) << endl;
}

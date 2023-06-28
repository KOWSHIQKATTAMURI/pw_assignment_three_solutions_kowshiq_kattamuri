#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target){

}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    vector<vector<int>> ans = fourSum(nums, m);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[j] << " ";
        }
        cout << endl;
    }
}

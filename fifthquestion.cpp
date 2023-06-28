#include<bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>& digits){
      int n = digits.size();
      for(int i = n - 1; i >= 0; i--){
          if(digits[i] == 9){
               digits[i] = 0;
          }else{
               digits[i]++;
               return digits;
          }
       }
       digits[0] = 1;
	     digits.push_back(0);
       return digits;
  }

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    vector<int> ans = plusOne(nums);
    for(int i = 0; i < ans.size(); i++){
      cout << ans[i] << " ";
    }
}

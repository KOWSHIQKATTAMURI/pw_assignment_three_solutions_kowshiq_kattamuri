#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b){
  return a.first == b.first ? a.second - b.second: a.first - b.first;
}

bool canattendmeetings(vector<pair<int, int>>& nums){
  if(!nums.size()){
    return false;
  }
  sort(nums.begin(), nums.end(), compare);
  for(int i = 1; i < nums.size(); i++){
 			if(nums[i].first < nums[i - 1].second){
        return false;
      }
 	}	
 	return true;
}

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> kow;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        kow.push_back(make_pair(a, b));
    }
    cout << canattendmeetings(kow) << endl;
}

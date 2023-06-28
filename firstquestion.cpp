#include<bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int present = nums[0] + nums[1] + nums[2];
        for(int i = 0; i <= nums.size() - 3; i++){
            int first = i + 1, last = nums.size() - 1;
            while(first < last){
                int temp = nums[i] + nums[first] + nums[last];
                if(temp == target){
                    return temp;
                }
                if(temp < target){
                    if(abs(present - target) > abs(temp - target)){
                        present = temp;
                    }
                    first++;
                }else{
                    if(abs(present - target) > abs(temp - target)){
                        present = temp;
                    }
                    last--;
                }
            }
        }
        return present;
    }

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    cout << threeSumClosest(nums, m);
}

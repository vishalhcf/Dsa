
// algorithm:

// // class Solution {
// //  public:
// //   vector<vector<int>> subsets(vector<int>& nums) {
// //     vector<vector<int>> ans;
// //     dfs(nums, 0, {}, ans);
// //     return ans;
// //   }

// //  private:
// //   void dfs(const vector<int>& nums, int s, vector<int>&& path,
// //            vector<vector<int>>& ans) {
// //     ans.push_back(path);

// //     for (int i = s; i < nums.size(); ++i) {
// //       path.push_back(nums[i]);
// //       dfs(nums, i + 1, move(path), ans);
// //       path.pop_back();
// //     }
// //   }
// // };


// by using recursion:


#include <bits/stdc++.h>
using namespace std;

vector<int> subset;
void solve(int a[], int n, int index) {
    if(index == n){
        // print the subset
        for(int i=0; i<subset.size(); i++){
            cout << subset[i] << " ";
        }
        cout << "\n";
    }else{
        subset.push_back(a[index]);
        solve(a, n, index+1);
        subset.pop_back();
        solve(a, n, index+1);
    }
}

int main() {
    int a[] = {1, 2, 3};
    int n = sizeof(a)/sizeof(a[0]);
    int startIndex = 0;
    solve(a, n, startIndex);
    return 0;
}
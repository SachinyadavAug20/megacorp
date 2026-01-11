#include <bits/stdc++.h>
using namespace std;

void printvector(vector<int> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

const int N = 2e6;
int prefixsum[N];

int maxSubarraySum(vector<int> &arr, int k) {
  // prefix sum 1 index
  vector<int> prefixsum(arr.size() + 1);
  for (int i = 1; i <= arr.size(); i++) {
    prefixsum[i] = prefixsum[i - 1] + arr[i - 1];
  }
  printvector(prefixsum);
  int maxnum = 0;
  for (int i = 0; i < arr.size() && i + k <= arr.size(); i++) {
    if (maxnum < (prefixsum[i + k] - prefixsum[i])) {
      maxnum = (prefixsum[i + k] - prefixsum[i]);
    }
  }
  return maxnum;
}

int main() {
  vector<int> num = {100, 200, 300, 400};
  int k = 2;
  cout << maxSubarraySum(num, k);
}

class Solution {
public:
  int maxSubarraySum(vector<int> &arr, int k) {
    // prefix sum 1 index
    vector<int> prefixsum(arr.size() + 1);
    for (int i = 1; i <= arr.size(); i++) {
      prefixsum[i] = prefixsum[i - 1] + arr[i - 1];
    }
    printvector(prefixsum);
    int maxnum = 0;
    for (int i = 0; i < arr.size() && i + k <= arr.size(); i++) {
      if (maxnum < (prefixsum[i + k] - prefixsum[i])) {
        maxnum = (prefixsum[i + k] - prefixsum[i]);
      }
    }
    return maxnum;
  }
};

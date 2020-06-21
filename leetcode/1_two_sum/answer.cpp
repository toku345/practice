#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    for (auto i = 0; i < nums.size(); i++) {
      for (auto j = i + 1; j < nums.size(); j++) {
        if (nums[i] + nums[j] == target)
          return vector<int> {i,j};
      }
    }

    // TODO: ここまで来たらエラーにしたい
    return vector<int> {-1,-1};
  }
};

void test1()
{
  vector<int> nums {1,2,3};
  auto target = 3;

  Solution s;
  vector<int> result = s.twoSum(nums, target);
  vector<int> expected {0,1};

  cout << "expected: ";
  for (auto x : expected)
    cout << x << ' ';
  cout << endl;

  cout << "result: ";
  for (auto x : result)
    cout << x << ' ';
  cout << endl;

  assert(result == expected);
}

void test2()
{
  vector<int> nums {1,2,3};
  auto target = 5;

  Solution s;
  vector<int> result = s.twoSum(nums, target);
  vector<int> expected {1,2};

  cout << "expected: ";
  for (auto x : expected)
    cout << x << ' ';
  cout << endl;

  cout << "result: ";
  for (auto x : result)
    cout << x << ' ';
  cout << endl;

  assert(result == expected);
}

int main()
{
  test1();
  test2();
}

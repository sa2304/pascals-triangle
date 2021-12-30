#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<vector<int>> generate(int numRows) {
    // FIXME
    return {};
  }
};

void TestGenerate() {
  Solution s;
  {
    vector<vector<int>> rows{{1}, {1, 1}, {1, 2, 1}, {1, 3, 3, 1}, {1, 4, 6, 4, 1}};
    assert(rows == s.generate(5));
  }
  {
    vector<vector<int>> rows{{1}};
    assert(rows == s.generate(1));
  }
}

int main() {
  TestGenerate();
  std::cout << "Ok!" << std::endl;
  return 0;
}

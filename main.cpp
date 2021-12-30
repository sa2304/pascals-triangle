#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<vector<int>> generate(int numRows) {
    vector<vector<int>> rows;
    if (0 < numRows) {
      rows.resize(numRows);
      for (int i = 0; i < numRows; ++i) {
        auto &next_row = rows[i];
        int length = i + 1;
        next_row.resize(length);
        next_row.front() = rows[i].back() = 1;
        if (0 < i) {
          auto &prev_row = rows[i - 1];
          for (int k = 1; k < length - 1; ++k) {
            next_row[k] = prev_row[k - 1] + prev_row[k];
          }
        }
      }
    }

    return rows;
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

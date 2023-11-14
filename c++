#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  int count_a = count_if(s.begin(), s.end(), [](char c) { return c == 'a'; });

  int count_ways = 0;
  for (int k = count_a; k <= n; k++) {
    count_ways += C(n, k);
  }

  cout << count_ways << endl;

  return 0;
}
 

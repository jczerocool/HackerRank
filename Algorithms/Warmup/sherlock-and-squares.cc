#include <iostream>
#include <iterator>
#include <functional>
#include <algorithm>
#include <vector>
#include <string>
#include <list>
#include <map>
#include <set>
#include <bitset>
#include <stack>
#include <queue>
#include <deque>
#include <cstdlib>
#include <cmath>

using namespace std;

#define REP(i, a, n) for (int i = a; i < (int) n; i++)
#define FOR_ITER(c, it) for (typeof(c.begin()) it = c.begin(); it != c.end(); it++)
#define ALL(c) (c).begin(), (c).end()

const int MOD = 1000000007;
const double EPSILON = 1e-10;

int
calc(int a, int b) {
  int bottom = (int) ceil(sqrt(a));
  int top = (int) floor(sqrt(b));
  int cnt = top - bottom + 1;
  return cnt;
}

int
main(int argc, char *argv[]) {
  int t;
  cin >> t;
  while(t--) {
    int a, b;
    cin >> a >> b;
    cout << calc(a, b) << endl;
  }  
  return 0;
}
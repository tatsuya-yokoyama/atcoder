#include <iostream>

using namespace std;

int main() {
  int a,b,c,x;
  cin >> a >> b >> c >> x;
  int count = 0;
  for (int i = 0; i <= a; i ++) {
    for (int j = 0; j <= b; j ++) {
      for (int k = 0; k <= c; k ++) {
        int sum = 0;
        sum = 500 * i + 100 * j + 50 * k;
        if (sum == x) {
          count++;
          //cout << i << "," << j << "," << k << endl;
        }
      }
    }
  }
  cout << count << endl;
}

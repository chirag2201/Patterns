#include <bits/stdc++.h>
using namespace std;

void pattern6(int n) {
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    for (int j = 0; j < 2 * n - (2 * i + 1); j++) {
      cout << "*";
    }
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    cout << endl;
  }
}

int main() {
  int n = 0;
  pattern6(n);
  return 0;
}
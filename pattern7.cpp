#include <bits/stdc++.h>
using namespace std;

void pattern7(int n) {
  cin >> n;
  for (int i = 0; i < n; i++) {
    // space
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }
    // star
    for (int j = 0; j < 2 * i + 1; j++) {
      cout << "*";
    }
    // space
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }
    cout << endl;
  }
}

int main() {
  int n = 0;
  pattern7(n);
  return 0;
}
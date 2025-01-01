#include <bits/stdc++.h>
using namespace std;

void pattern12(int n) {
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++) {
      cout << ch << " ";
    }
    cout << endl;
  }
}

int main() {
    int n = 0;
    pattern12(n);
    return 0;
  }

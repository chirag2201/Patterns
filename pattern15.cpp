#include <bits/stdc++.h>
using namespace std;

void pattern15(int n) {
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (char ch = 'E' - i; ch <= 'E'; ch++) {
      cout << ch << " ";
    }
    cout << endl;
  }
}

int main() {
    int n = 0;
    pattern15(n);
    return 0;
  }

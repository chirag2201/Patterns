#include <bits/stdc++.h>
using namespace std;

void pattern11(int n) {
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (char ch = 'A'; ch <= 'A' + i; ch++) {
      cout << ch << " ";
    }
    cout << endl;
  }
}

int main() {
    int n = 0;
    pattern11(n);
    return 0;
  }
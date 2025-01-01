#include <bits/stdc++.h>
using namespace std;

void pattern18(int n) {
  cin >> n;
  int inis = 0;
  for (int i = 0; i < n; i++) {
    // stars
    for (int j = 1; j <= n - i; j++) {
      cout << "*";
    }
    // spaces
    for (int j = 0; j <= inis; j++) {
      cout << " ";
    }
    // stars
    for (int j = 1; j <= n - i; j++) {
      cout << "*";
    }
    inis += 2;
    cout << endl;
  }
  for (int i = 0; i <= n; i++) {
    // stars
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    // spaces
    for (int j = 0; j <= inis; j++) {
      cout << " ";
    }
    // stars
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    inis -= 2;
    cout << endl;
  }
}

int main() {
    int n = 0;
    pattern18(n);
    return 0;
  }
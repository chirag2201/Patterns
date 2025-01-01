#include<bits/stdc++.h>
using namespace std;

void pattern5(int n) {
  cout<<"Input: ";
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i + 1; j++) {
      cout << j << " ";
    }
    cout << endl;
  }
}

int main() {
  int n = 0;
  pattern5(n);
  return 0;
}
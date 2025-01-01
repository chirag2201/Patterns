#include <bits/stdc++.h>
using namespace std;

void pattern8(int n){
  cin >> n;
  for (int i = 1; i <= 2 * n - 1; i++) {
    // stars
    int stars = i;
    if (i > n)
      stars = 2 * n - i;
    for (int j = 1; j <= stars; j++) {
      cout << "*";
    }
    // stars1

    cout << endl;
  }
}

int main(){
    int n=0;
    pattern8(n);

return 0;
}
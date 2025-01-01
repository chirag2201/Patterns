#include <bits/stdc++.h>
using namespace std;

void pattern4(int n){
    cout<<"Input: ";
    cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=n; j>=i; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main() { 
  int n=0;
  pattern4(n);
  return 0;
}
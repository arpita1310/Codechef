#include <iostream>
using namespace std;

bool isPrime(int n){
  if(n==1||n==0)return false;
  for(int i=2; i*i<=n; i++){
    if(n%i==0)return false;
  }
  return true;
}

int main() {
	int t;
	cin>> t;
	while(t--){
	    int M, N;
	    cin>> M>> N;
        for(int i=M; i<=N; i++){
            if(isPrime(i)) {
            cout << i << endl;
      }
    }
	}
	return 0;
}
#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        long long total = 2LL*(k-1) + (1LL<<(n-k+1));
        cout << total << endl;    
    }
}
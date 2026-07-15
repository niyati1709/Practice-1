#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of elements in array" << endl;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    // precompute
    int hash[13] = {0}; // amx number in array can be 12
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;

        // fetch
        cout << "Appearance :- " << hash[num] << endl;
    }
    return 0;
}
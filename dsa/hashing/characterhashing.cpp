#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int q;
    cin >> q;

    // pre computation
    int hash[26] = {0}; // 26 if lower or upper case in specified
    //256 for all characters and no need to minus 'a'
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }

    while(q--){
        char c;
        cin >> c;

        // fetching
        cout << hash[c-'a'] << endl;
    }
    return 0;
}
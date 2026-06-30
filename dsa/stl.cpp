#include<bits/stdc++.h>
using namespace std;

void explainPair();
void explainVector();

int main(){

    explainPair();

    return 0;
}

// Pairs
void explainPair(){
    pair<int, int> p = {1,3};
    cout << p.first << " " << p.second << endl;
    pair<int, pair<int, int>> P = {1, {3,4}};
    cout << P.first << " " << P.second.second << " " << P.second.first << endl;
    pair<int, int> arr[] = {{1,2}, {2,5}, {5,1}};
    cout << arr[1].second;
}

// Vectors
void explainVector(){
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) << " ";

    it = it + 2;
    cout << *(it) << " ";
    
}
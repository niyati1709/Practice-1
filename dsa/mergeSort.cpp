#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& a,int i1, int i2, int j1, int j2){
    
}

void merge_sort(vector<int>& a,int i, int j){
    int mid;
    if(i<j){
        mid = (i+j)/2;
        merge_sort(a,i,mid);
        merge_sort(a,mid+1,j);
        merge();
    }
}

int main(){

}
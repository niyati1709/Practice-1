#include<iostream>
using namespace std;

// void insertion_sort(int arr[],int n){
//     int i,j,next;
//     for(i=1;i<n;i++){
//         next = arr[i];
//         for(j=i-1;j>=0 && next<arr[j];j--){
//             arr[j+1] = arr[j];
//         }
//         arr[j+1] = next;
//     }
//     for(i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }

void selection_sort(int a[],int n){
    int i,j,min;
    for(i=0;i<n-1;i++){
        min = i;
        for(j=i;j<n;j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

int part(int a[],int low, int high){
    int i = low;
    int j = high;
    int pivot = a[low];
    while(i<j){
        while(a[i] <= pivot && i<high){
            i++;
        }
        while(a[j]> pivot && j>low){
            j--;
        }
        if(i<j){
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    int t = a[low];
    a[low] = a[j];
    a[j] = t;
    return j;
}

void quick_sort(int a[], int low, int high){
    int p;
    if(low<high){
        p = part(a,low,high);
        quick_sort(a,low,p-1);
        quick_sort(a,p+1,high);
    }
}

void merge(int a[],int i1, int i2, int j1, int j2){
    int temp[50];
    int i = i1, j=j1, k=0;

    while(i<=i2 && j<=j2){
        if(a[i]<a[j]){
            temp[k++] = a[i++];
        }
        else{
            temp[k++] = a[j++];
        }
    }

    while(i<=i2){
        temp[k++] = a[i++];
    }
    while(j<=j2){
        temp[k++] = a[j++];
    }
    for(i=i1,j=0;i<=j2;i++,j++){
        a[i] = temp[j];
    }
}

void merge_sort(int a[],int i, int j){
    int mid;
    if(i<j){
        mid = (i+j)/2;
        merge_sort(a,i,mid);
        merge_sort(a,mid+1,j);
        merge(a,i,mid,mid+1,j);
    }
}

int main()
{
    int arr[] = {1,6,5,43,2,};
    // insertion_sort(arr,5);
    quick_sort(arr,0,4);
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
}
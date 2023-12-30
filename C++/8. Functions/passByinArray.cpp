#include<bits/stdc++.h>

using namespace std;


void doArray(int arr[], int n){
    for(int i=0; i<n; i++){
        arr[i]+=100;
        cout << "Value inside function: " << arr[i] << endl;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    doArray(arr, n);
    for(int i=0; i<n; i++){
        cout << "Value inside Main: " << arr[i] << endl;
    }
    return 0;
}
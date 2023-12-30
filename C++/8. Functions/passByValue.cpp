#include<bits/stdc++.h>

using namespace std;

int sum(int x){
    return x+=10;
}

int main(){
    int x;
    cin >> x;
    int z = sum(x);
    cout << "Value in function : " << z << endl;
    cout << "Value in main : " << x;
    return 0;
}
#include<bits/stdc++.h>

using namespace std;

int sum(int &x){
    return x+=10;
}

int main(){
    int x;
    cin >> x;
    int y = sum(x);
    cout << "Value in function : " << x << "\n";
    cout << "Value in main : " << x;
}
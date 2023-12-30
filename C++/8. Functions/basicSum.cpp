#include<bits/stdc++.h>

using namespace std;

int x, y;

int sum(int x, int y){
    return x+y;
}

void sum1(int x, int y){
    cout << x+y;
}

int main(){
    cin >> x >> y;
    cout << sum(x,y) << endl;
    sum1(x,y);
    return 0;
}
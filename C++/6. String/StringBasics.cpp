#include<bits/stdc++.h>

using namespace std;

int main(){
    string x = "HelloPuru";
    string z = "Hello";
    int y = x.size();
    cout << y;
    cout << x[y-1];
    

    x.append(z);
    cout << z;
    cout << x;

    return 0;
}
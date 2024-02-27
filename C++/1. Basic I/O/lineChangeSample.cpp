//Basic Input Output
#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin>> x >> y;
    cout<<"Hello " <<x << "\n";
    cout<<"and " <<y <<" with \\n" << "\n";
    cout<<"Hello " <<x <<endl <<"and " <<y <<" with endl";


    cout << "Hello World\t";
    cout << "Cool World" << endl;

    cout << "Hello World\\";
    cout << "Cool World\n";

    cout << "Hello World\"";
    cout << "Cool World\"";
    return 0;
}
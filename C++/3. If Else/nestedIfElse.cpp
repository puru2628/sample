#include<bits/stdc++.h>

using namespace std;

int main(){
    int age;
    cin >> age;

    if(age<18){
        printf("Not eligible for job");
    }

    else if (age<=57)
    {
        cout << "Eligible for Job";
        
        if(age>=55){
            cout << "Eligible for job, but retirement soon";
        }
        else
        {
            cout << "Retirement Time";
        }
        
    }
    

    return 0;
}
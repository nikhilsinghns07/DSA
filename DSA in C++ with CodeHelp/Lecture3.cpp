#include<iostream>
using namespace std;

void check() {
    char a;
    cout<< "Enter the Character:" << endl;
    cin>>a;
    cout<< int(a) <<endl;
    if(48 < int(a) < 57) {
        cout<< "Given Char is of type Integer" << endl;
    }else if (64 <= int(a) <= 90)
    {
        cout<< "Given char is of Lower Case" <<endl;
    }else if (97 <= int(a) <= 122) 
    {
        cout<< "Given Char is of Upper Case" <<endl;
    }
    
    
}

void primeCheck() {

    int n;
    cin>> n;

    int i = 1;

    while(i<n) {
        if(n%i == 0) {
            cout << "Not Prime" << endl;
        }
        else {
            cout<< "Prime" << endl;
        }
        i = i+1;
    }

}



int main() {
    
    // int a,b;
    // cout<< "Enter the Value of A: " <<endl;
    // cin>>a;
    // cout<< "Enter the Value of B: " <<endl;
    // cin>>b;

    // cout<< "Value of A is: " << a <<endl;
    // cout<< "Value of B is: " << b <<endl;

    // if(a>b) {
    //     cout<< "A is greater" << endl;
    // }
    // else{
    //     cout<< "B is greater" << endl;
    // }
}


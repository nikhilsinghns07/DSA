#include<iostream>
using namespace std;

void pattern8() {
    int n;
    cin>> n;

    int row = 1;
    while(row <= n) {
        int col = 1;

        while(col<=n) {
            char ch = 'A' + row -1;
            cout<< ch;
            col = col +1;
        }
        cout << endl;
        row = row +1;
    }
    
}

void pattern9() {
    int n;
    cin>>n;

    int row = 1;
    while(row <=n ){
        int col = 1;

        while(col <=n) {
            char ch = 'A' + row ;
            cout<< ch;
            col = col +1;
        }
        cout << endl;
        row = row +1;
    }
}


int main() {
    pattern8();
}
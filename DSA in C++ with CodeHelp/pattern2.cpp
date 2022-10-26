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
    cin>> n;

    int row = 1;
    char ch = 'A';

    while (row<=n)
    {
        int col = 1;
         
        while(col<= n) {
            cout << ch << " ";
            ch = ch + 1;
            col = col +1;
        }
        cout << endl;
        row = row + 1;
    }
    
}


void pattern10() {
    int n;
    cin>> n;

    int row = 1;
    
    
    while(row <= n) {
        int col = 1;
        
        while(col <= n) {
            char ch = 'A' + row +col -2;
            cout << ch << " ";
            col = col +1;
        }
        cout << endl;
        row = row + 1;
    }
    
}


void pattern11() {
    int n;
    cin>> n;

    int row = 1;
    while(row<=n) {
        int col = 1;
        
        while(col<=row){
            char ch = 'A' + row - 1;
            cout << ch << " ";
            
            col = col +1;
        }

        cout << endl;
        row = row +1;
    }
}

void pattern12() {
    int n;
    cin>> n;

    int row = 1;
    char ch = 'A';
    while(row<=n) {

        int col = 1;
        
        

        while(col<=row) {
            cout << ch << " ";
            ch = ch+1;    
            col = col+1;
        }
        cout << endl;
        row = row + 1;
    }
}

void pattern13() {
    int n;
    cin>> n;

    int row = 1;
    
    while(row<=n) {

        int col = 1;
        while(col<=row) {
            char ch = 'A' + row + col -2;
            cout << ch << " ";
            col = col+1;
        }
        cout << endl;
        row = row + 1;
    }
}

void pattern14() {
    int n;
    cin >> n;
    int row = 1;
    
    while(row<=n) {
        int col = 1;
        char ch = 'A' + n -row;
        while(col<=row) {
            cout <<  ch;
            ch = ch +1;
            col = col+1;
        }

        cout << endl;
        row = row +1;

    }
}


int main() {
    pattern14();
}
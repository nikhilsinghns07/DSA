#include<iostream>
using namespace std;

void pattern1() {
    int n;
    cin >> n;
    int i = 1;
    while (i<=n) {
        int j = 1;
        while(j<=n) {
            cout << "*";
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }
}

void pattern2() {
    int n;
    cin >> n;
    int i = 1;
    while(i<=n) {
        int j = 1;
        while(j<=n) {
            cout << i;
            j = j +1;
        }
        cout << endl;
        i = i+1;
    }
}

void pattern3() {
    int n;
    cin >> n;
    int i = 1;
    while(i<=n) {
       int j = 1;
       while(j<=n) {
        cout << n-j+1;
        j = j+1;
       }
       cout << endl;
       i = i+1; 
    }
}

void pattern4() {
    int n;
    cin>> n;
    int i = 1;
    int count = 1;
    while(i<=n) {
        int j=1;
        while(j<=n) {
            cout<<count<<" ";
            count = count + 1;
            j = j +1;
        }
        cout << endl;
        i = i+1;
    }
}

void pattern5() {
    int n;
    cin>>n;
    int row = 1;
    while (row<=n){
        int col = 1;
        while(col<=row) {
            cout<< "*";
            col = col +1;
        }
        cout<<endl;
        row = row +1;
    }
}

void pattern6() {
    int n;
    cin>> n;
    
    int row = 1;

    while(row<=n) {
        int col = 1;
        int value = row;
        while (col<=row) {
            cout << value;
            value = value+1;
            col = col+1;
        }
        cout<<endl;
        row = row + 1;
    
    }
}

void pattern7() {
    int n;
    cin>> n;

    int row = 1;

    while(row<=n) {
        int col = 1;
        int value = row;
        while(col<=row){
            cout<< value;
            value = value-1;
            col = col+1;
        }
        cout << endl;
        row = row +1;
    }
}

int main() {
    pattern7();
}

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

int main() {
    pattern2();
}
#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool check(int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return (s % 7 == 0);
}

int main(){
    int n;
    cout << "enter length\n";
    cin >> n;
    int a[n];
    cout << "now elements\n";

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (check(a[i]))
            j++;
    }
    cout << j;
}
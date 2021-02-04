#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int x, y1, y2, y3;
    cin >> x;
    y1 = x / 100 ;
    x %= 100 ;
    y2 = x / 10;
    x = x % 10;
    y3 = x;
    cout << y1 << ' ' << y2 << ' ' << y3;
    
}
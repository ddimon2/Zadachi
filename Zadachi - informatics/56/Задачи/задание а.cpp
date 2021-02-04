#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    cout << x <<'+' << y << '+' << z << '=' << x+y+z << endl;
    cout << x <<'*' << y << '*' << z << '=' << x*y*z << endl;
    cout <<'(' << x <<'+' << y << '+' << z << ')' << '/' << 3 << '=' << fixed << setprecision(3) << (x+y+z) / 3.0;
    
}

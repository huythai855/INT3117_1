
#include <bits/stdc++.h>

using namespace std;

double v;
int a;
int machine_number;

int main()
{
    cin >> v >> a;
    
    if (v < 0  || v > 100 || a < 0 || a > 60) {
        cout << "input khong hop le";
        return 0;
    }
    
    //if(v <= 100)
    //    machine_number = 3;
    
    machine_number = 3;
    if(v < 70)
        machine_number = 2;
    if(v < 30)
        machine_number = 1;
        
    if(machine_number > 1 && a > 30)
        machine_number -= 1;
        
    cout << machine_number << "\n";
    
    if(v >= 70)
        cout << "Slow down!!!";

    return 0;
}



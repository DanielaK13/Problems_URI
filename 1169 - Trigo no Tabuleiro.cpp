#include <iostream>
#include <math.h>

using namespace std;

int main(){
    unsigned long long int casas, n, x, calc;

    cin >> n;

    for(int i=0; i<n; i++){
        calc = 0;

        cin >> casas;

        x = pow(2, casas)- 1;
        cout << x/12000 << " kg" << endl;
    }
    return 0;
}

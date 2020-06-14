#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;


int main(){
    int n;
    int i = 0;

    cin >> n;

    while(n--){
        char s[10];

        cin >> s;

        int l = strlen(s);
        sort(s, s+l);

        do{
            cout << s << endl;
        }while(next_permutation(s, s+l));
        cout << endl;
    }

}

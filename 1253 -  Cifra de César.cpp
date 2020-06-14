#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, x, y;
    //, r, v;
    //bool retornou[10000];

    cin >> n;
    for (int i =0; i < n; i++){
        string str;
        int d;

        cin.ignore();
        getline(cin, str);
        cin  >> d;

        //cout << "Lido " << str << " " << d << endl;

        for(int j=0; j < str.length(); j++){
            x = d;
            //cout << str[j]+d << endl;
            y = str[j]-d;
            if (y < 'A'){
                x = str[j]-'A';
                x = d - x - 1;
                str[j] = 'Z' - x;
            }
            else
                str[j] = str[j] - x;
        }
        cout << str << endl;
    }

    return 0;
}

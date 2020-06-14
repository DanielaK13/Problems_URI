#include <iostream>
#include <stack>

using namespace std;

int main () {
    int i, vagao[1005], tam, atual;

    //cout << "Number of wagons: ";
    while (cin >> tam and tam) {
        //cout <<"Permutation 1,2,...,N values: "
        while (cin >> vagao[0] and vagao[0]) {
            for(i=1; i<tam; i++)
                cin >> vagao[i];

            stack <int> pilha;
            atual = 0;

            for (i = 1; i <= tam; i++) {
                pilha.push(i);

                while (!pilha.empty() && pilha.top() == vagao[atual]) {
                    pilha.pop();
                    atual++;
                }
            }
            if (pilha.empty() && atual == tam)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;

        }cout << endl;
    }return 0;

}

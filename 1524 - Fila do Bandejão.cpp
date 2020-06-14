#include <iostream>

using namespace std;

int main()
{
	int i, n, k;
	while (cin >> n >> k){
		int aux, ant, v[n-1];
		ant = 0;
		for (i=0; i<n-1; ++i){
			cin >> aux;
			v[i] = aux-ant;
			ant = aux;
		}
		while(--k){
			int pm = 0, maior = v[0];
			for (i=1; i<n-1; ++i){
				if (v[i] > maior){
					maior = v[i];
					pm = i;
				}
			}
			v[pm] = 0;
		}
		int soma = 0;
		for (i=0; i<n-1; ++i){
			soma+=v[i];
		}
		cout << soma << endl;
	}
}

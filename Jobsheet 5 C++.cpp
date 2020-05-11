#include <iostream>
using namespace std;
main(){
	cout<<"Nama : Ade Safarudin Madani\nNIM : F1B019005\nKelompok : 2\n\n\n";
	int matriks1 [5][5], matriks2 [6][6], i, j;
	cout << "Masukkan NIM pertama\n";
	for (i = 0; i <= 1; i++){
		for (j = 0; j <= 1; j++){
			cout << "Elemen [" << i << "]" << "[" << j << "] : ";
			cin >> matriks1 [i][j];
		}
	}
	
	cout << "\nMasukkan NIM kedua\n";
	for (i = 0; i <= 1; i++){
		for (j = 0; j <= 1; j++){
			cout << "Elemen [" << i << "]" << "[" << j << "] : ";
			cin >> matriks2 [i][j];
		}
	}
	cout << "\nHasil perkalian sebagai berikut\n";
	for (i = 0; i <= 1; i++){
		for (j = 0; j <= 1; j++)
		cout << "\t" << matriks1 [i][j] * matriks2 [i][j];
		cout << "\n";
	}
}

#include <iostream>
using namespace std;
main(){
	cout<<"Nama : Ade Safarudin Madani\nNIM : F1B019005\nKelompok : 2\n\n\n";
	int a [10][10], b, c, brs, klm;
	char cho;
	
	cout << "Jumlah baris : "; cin >> brs;
	cout << "Jumlah kolom : "; cin >> klm;
	cout << endl;
		
	for (b = 0; b < brs; b++){
		for (c = 0; c < klm; c++){
		cout << "Matriks ["<< b + 1 <<", "<< c + 1 <<"] : ";
		cin >> a [b][c];
		}
	}
	cout << endl;
	cout << "Matriks Pertama : " << endl;
	for (b = 0; b < brs; b++){
		for (c = 0; c < klm; c++){
			cout << " " << a [b][c] << " ";
		}
		cout << endl;
	}
	cout << "Matriks Transpose : " << endl;
	for (b = 0; b < brs; b++){
		for (c = 0; c < klm; c++){
			cout << " " << a [c][b] << " ";
		}
		cout << endl;
	}
	
}

#include <iostream>
using namespace std;
int main() {
  int l, j, m, n, matriks1[10][10], matriks2[10][10], hasil[10][10];
  	cout<<"Nama : Ade Safarudin Madani\nNIM : F1B019005\nKelompok : 2\n\n\n";
  cout << "Masukkan jumlah baris matriks: ";
  cin >> m;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> n;
  cout << "Masukkan elemen matrix pertama: \n";
  for(l = 0; l < m; l++){
    for(j = 0; j < n; j++){
      cin >> matriks1[l][j];
    }
  }
  cout << "Masukkan elemen matrix kedua: \n";
  for(l = 0; l < m; l++){
    for(j = 0; j < n; j++){
      cin >> matriks2[l][j];
    }
  }
  cout << "Hasil penjumlahan matrix: \n";
  for(l = 0; l < m; l++){
    for(j = 0; j < n; j++){
      hasil[l][j] = matriks1[l][j] + matriks2[l][j];
      cout << hasil[l][j] << "\t";
    }
    cout << endl;
  }
  
  return 0;
}

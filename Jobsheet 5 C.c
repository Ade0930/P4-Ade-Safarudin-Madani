#include<stdio.h>
main(){

	int matriks1 [5][5], matriks2 [6][6], m, j;
	printf("Nama : Ade Safarudin Madani\nNIM : F1B019005\nKelompok : 2\n\n");
	printf ("Masukkan NIM pertama\n");
	for (m = 0; m <= 1; m++){
		for (j = 0; j <= 1; j++){
			printf ("Elemen [%d][%d] : ", m, j);
			scanf ("%d", &matriks1 [m][j]);
		}
	}
	
	printf ("\nMasukkan NIM kedua\n");
	for (m = 0; m <= 1; m++){
		for (j = 0; j <= 1; j++){
			printf ("Elemen [%d][%d] : ", m, j);
			scanf ("%d", &matriks2 [m][j]);
		}
	}
	
	printf ("\nHasil Perkalian sebagai berikut\n");
	for (m = 0; m <= 1; m++){
		for (j = 0; j <= 1; j++)
		printf ("%d\t", matriks1 [m][j] * matriks2 [m][j]);
		printf ("\n");
	}
}

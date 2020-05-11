#include<stdio.h>
main(){
	
	printf("Nama : Ade Safarudin Madani\nNIM : F1B019005\nKelompok : 2\n\n");
	int matriks1 [5][5], matriks2 [6][6], i, j;
	printf ("Matriks 1\n");
	for (i = 0; i <= 1; i++){
		for (j = 0; j <= 1; j++){
			printf ("Elemen [%d][%d] : ", i, j);
			scanf ("%d", &matriks1 [i][j]);
		}
	}
	
	printf ("\nMatriks 2\n");
	for (i = 0; i <= 1; i++){
		for (j = 0; j <= 1; j++){
			printf ("Elemen [%d][%d] : ", i, j);
			scanf ("%d", &matriks2 [i][j]);
		}
	}
	
	printf ("\nHasil Penjumlahan matriks\n");
	for (i = 0; i <= 1; i++){
		for (j = 0; j <= 1; j++)
		printf ("%d\t", matriks1 [i][j] + matriks2 [i][j]);
		printf ("\n");
	}
}

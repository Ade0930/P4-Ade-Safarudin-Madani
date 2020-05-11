#include<stdio.h>

main()
{
int matrix1[2][2],
matrix2[2][2],i,j;
printf("Nama : Ade Safarudin Madani\nNIM : F1B019005\nKelompok : 2\n\n");
printf("Data Matriks A \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){ 
			printf("Elemen[%d][%d]: ",i,j); 
			scanf("%d",&matrix1[i][j]);
		}
		}
printf("\nMATRIX2\n");
	for(i=0;i<2;i++){ 
		for (j=0;j<2;j++){ 
			printf("Elemen[%d][%d]: ",i,j); 
			scanf("%d",&matrix2[i][j]);
		}
		}
printf("\nHasil Pengurangan matriks\n\n");
	for(i=0;i<2;i++){
		for( j=0;j<2;j++)
			printf("%d\t",matrix1[i][j]-matrix2[i][j]); 
			printf("\n");
	}
}

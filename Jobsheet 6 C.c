#include<stdio.h>

main(){
printf("Nama : Ade Safarudin Madani\nNIM : F1B019005\nKelompok : 2\n\n");
int i, j, matriks[10][10], transpose[10][10];
for(i = 0; i < 2; i++)
{for(j = 0; j < 2; j++)
{printf("Masukan Nilai Matriks [%d][%d] : ", i+1, j+1);
scanf("%d", &matriks[i][j]);}}

for (i = 0; i < 2; i++)
{for(j = 0; j < 2; j++)
{transpose[j][i] = matriks[i][j];}} 

printf("\nMatriks\n"); 
for (i = 0; i < 2; i++)
{for(j = 0; j < 2; j++)
{printf("%5d", matriks[i][j]);} 
printf("\n");} 
 
printf("\nTranspose Matriks\n"); 
for (i = 0; i < 2; i++)
{for (j = 0; j < 2; j++)
{printf("%5d", transpose[i][j]);} 
printf("\n");}}

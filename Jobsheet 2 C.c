#include <stdio.h>

main()
{
	printf("Nama : Ade Safarudin Madani\nNIM : F1B019005\nKelompok : 2\n\n");
	char* NIM [5];
	printf("Masukkan NIM ke-1 = ");
	scanf("%s",&NIM[0]);
	printf("Masukkan NIM ke-2 = ");
	scanf("%s",&NIM[1]);
	printf("Masukkan NIM ke-3 = ");
	scanf("%s",&NIM[2]);
	printf("Masukkan NIM ke-4 = ");
	scanf("%s",&NIM[3]);
	printf("Masukkan NIM ke-5 = ");
	scanf("%s",&NIM[4]);
	printf("\n\nNIM mahassiswa pertama = %s\n",&NIM[0]);
	printf("NIM mahassiswa kedua = %s\n",&NIM[1]);
	printf("NIM mahassiswa ketiga = %s\n",&NIM[2]);
	printf("NIM mahassiswa keempat = %s\n",&NIM[3]);
	printf("NIM mahassiswa kelima = %s\n",&NIM[4]);
}

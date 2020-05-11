#include <iostream>
#include <string>
using namespace std;

    string benda[22]={"","Puuuma Pro","Ardilos Los","Adadis Pro","Pro Att Macan","Kazout Warior","Karpille","Sky Jalan","Fila Klop","Vans Young Skul","Laker ARK","Armyprett","Tomscat Colum","Reebok KW","League Legend","Nike Like","Converse Indi ","Sport Run","NB Warrior","Cowboy Slip","Army Slop", "Legend slop"};
    int harga[22]={0,50,54,88,77,66,70,89,56,83,99,65,55,23,34,30,25,40,88,43,55,89};
    int stok[22]={0,1,2,4,5,0,2,4,6,2,3,5,6,1,5,8,0,9,6,7,8,8};
    int jumlah,total,jml;
void listbenda(string benda[],int harga[],int stok[]){
	cout<<"=============   TOKO SEPATU  UD. ADE MADANI   ===========================\n";
    cout<<"=========================================================================\n";
    cout<<"| nomer\t|\t  barang\t|\tharga   \t|\tStok\t|\n";
    cout<<"=========================================================================\n";
   for(int i=1;i<22;i++){
        cout<<"| "<<i<<"\t|\t"<<benda[i]<<"\t|\tRp. "<<harga[i]<<".000\t|\t"<< stok[i] << "\t|\t"<< " "<<endl;
   }
   cout<<"=========================================================================\n";
   cout<<endl;
}

int belian(){
    ulang:
        int nomer;
    	char lagi;
        cout<<"# Masukkan kode barang\t\t\t: ";
        cin>>nomer;
    if(nomer[stok]==0){
    	cout<<"\n# Barang yang Anda pesan sedang kosong\n";
    	cout<<"=========================================================================\n";
    	goto ulang2;
	}else{
        cout<<"# Nama barang 	 \t\t\t: "<<benda[nomer]<<endl;
        cout<<"# Harga barang	 \t\t\t: Rp. "<<harga[nomer]<<".000"<<endl;
        cout<<"# Stok barang	\t\t\t: "<<stok[nomer]<<endl;
        cout<<"# Jumlah barang yg dibeli\t\t: ";cin>>jml;
        if(jml>nomer[stok]){
        	cout<<"\n# Maaf kami tidak dapat memproses pesanan yang Anda lakukan\n";
        	cout<<"=========================================================================\n";
        	goto ulang2;
		}
        total=jml*harga[nomer];
        jumlah=jumlah+total;
        cout<<"\n# Total belanja \t\t\t: Rp. "<<total<<".000"<< endl; 
        cout<<"=========================================================================\n";
		ulang2:
        cout<<"# Belanja lagi? (Y/T) \t\t\t: ";
        cin>>lagi;
        cout<<endl;}
    if(lagi=='Y' || lagi=='y'){
    	
    	goto ulang;
	}else if(lagi=='T' || lagi=='t'){
		cout<<endl;
	}
}
void struk(){
	int i, n,k, k2, j[100], th[100];
      float b,h[100];
    char a[100][30];
    cout<<"=========================================================================\n";
    cout<<"# Masukkan jumlah jenis barang\t\t: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cout<<"# Masukkan nama barang ke- "<<i<<"\t\t: ";
        cin>>a[i];
        cout<<"# Masukkan harga per barang\t\t: Rp. ";
        cin>>h[i];
        cout<<"# Masukkan jumlah barang\t\t: ";
        cin>>j[i];
        cout<<endl;
    }

    for(i=1; i<=n; i++)
    {
        th[i]=j[i]*h[i];
    }
    cout<<"# Total harga keseluruhan\t\t: Rp. "<<jumlah<<".000\n";
    cout<<"# Masukkan jumlah pembayaran\t\t: Rp. ";
	cin>>b;
    k=b-jumlah;
    system("cls");
    cout<<"================================================================\n";
    cout<<"\t\t\tDaftar Belanja Anda\t\n";
    for(i=1; i<=n; i++)
    {
        cout<<"# "<<j[i]<< " buah "<<a[i]<<" \t\t--->\tharga   : Rp."<<th[i]<<".000\n";
    }
    cout<<"================================================================\n";
    if(b>=jumlah)
    {
        cout<<"# Total harga\t\t\t--->\t\t: Rp. "<<jumlah<<".000\n";
        cout<<"# Pembayaran\t\t\t--->\t\t: Rp. "<<b<<".000\n";
        cout<<"# Kembalian\t\t\t--->\t\t: Rp. "<<k<<".000\n";
    }
    else
    {
        k2=-1*k;
        cout<<"# Total harga\t\t\t--->\t\t: Rp. "<<jumlah<<".000\n";
        cout<<"# Pembayaran\t\t\t--->\t\t: Rp. "<<b<<".000\n";
        cout<<"# Kekurangan\t\t\t--->\t\t: Rp. "<<k2<<".000\n";
        cout<<"# MAAF UANG ANDA TIDAK CUKUP UNTUK MELAKUKAN PEMBAYARAN..."<<endl;
    }
    cout<<"============== TERIMAKASIH ATAS KUNJUNGAN ANDA =================\n";
    cout<<"==============   TOKO SEPATU  UD. ADE MADANI   =================\n";
}

int main(){
    listbenda(benda,harga,stok);
    belian();
    struk();
}

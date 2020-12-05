#include <iostream>      //Menggunakan header
#include <string.h>
using namespace std;

int main(){              //Inisiasi fungsi utama
	cout<<"Masukkan operasi yang diinginkan : \n1.Penambahan Polinomial\n2.Pengurangan Polinomial\n3.Perkalian Polinomial\n4.Turunan Polinomial\n";
	int P,a,b,c;
	cin>>P;

	if (P<4){        //Fungsi Percabangan untuk menentukan jenis operasi yang diinginkan
		cout<<"\nMasukkan bilangan pertama\n";
		cin>>a;
		cout<<"Masukkan bilangan kedua\n";
		cin>>b;
		if (P==1){  //Operasi Penjumlahan
			c = a+b;
			cout<<"\nHasil Penjumlahan: "<<c;
		}
	
		else if(P==2){   //Operasi Pengurangan
			c = a-b;
			cout<<"\nHasil Pengurangan: "<<c;
		}
	
		else if (P==3){   //Operasi Perkalian
			c = a*b;
			cout<<"\nHasil Perkalian: "<<c;
		}
	}
	
	else if (P==4){           //Operasi Turunan
		int N;
		cout<<"\nMasukkan pangkat tertinggi persamaan polinomial:";
		cin>>N;
		int koef1[N+1];
		int koef2[N];
		string tur="";
		
		for (int i=0;i<N+1;i++){
			cout<<"\nKoefisien pangkat- "<<i<<" =";
			cin>>koef1[i];
		}
		
		for (int i=0;i<N;i++){
			koef2[i]=koef1[i+1]*(i+1);
		}
		cout<<"\nTurunan persamaan polinomialnya adalah :";
		for (int i=0;i<N;i++){
			cout<<"\nKoefisien pangkat- "<<i<<" = ";
			cout<<koef2[i];
		}
	}
}

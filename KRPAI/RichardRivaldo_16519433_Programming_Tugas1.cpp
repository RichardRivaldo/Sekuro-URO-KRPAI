/* Program Palindrome 
Program untuk menentukan apakah input berupa palindrome atau bukan */

/* Kamus 
A = string
n, i, s, m, f, l= integer
n = banyak testcase
i = counter input
s = indeks huruf pertama
m = indeks tengah kata
f = indeks huruf terakhir
l = banyak huruf */

//Algoritma 

#include <stdio.h> 								//Menggunakan header

int main()
{
	char A[999];								//Deklarasi Array of Char dengan ukuran 1000
	int n; 										//Deklarasi variabel
	scanf("%d", &n);							//Menginput banyak testcase
	getchar();
	
	for(int i = 1; i<=n; i++)					//Melakukan perulangan sesuai banyak testcase yang diminta
	{
		int s, m, f, l=0;						//Deklarasi variabel
		scanf("%s", A);							//Menginput kata yang ingin diuji
		getchar();
		while (A[l] != '\0'){l++;}				//Menghitung banyak huruf ddengan perulangan
		f = l-1;
		m = l/2;
		int x = m;								//Digunakan batas tengah kata karena dicek 2 huruf sekaligus
		
		for (s=0; s<x; s++)						//Membuat perulangan untuk mengecek apakah huruf pertama sama dengan huruf terakhir
		{										
			if (A[s] != A[f])					//Jika tidak sama, maka pasti bukan palindrome
			{
				printf("TIDAK \n");
				x = 0;							//Menghentikan loop (sebagai break)
			}
			f--;								//Digunakan decrement untuk melanjutkan pengecekan selanjutnya
		}
		if(s == m)
		{
			printf("YA \n");
		}
	}	
}

// 056_bubblesort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int arr[20]; // Deklarasi variabel global array a dengan ukuran 20
int n; // Deklarasi variabel global n untuk menyimpan banyaknya elemen array 

void input() {
	while (true) {
		cout << "Masukkan banyaknya elemen pada array : "; // output kelayar
		cin >> n; // input dari pengguna 
		if (n <= 20) // jika n kurang dari atau sama dengan 20 
			break;  // keluar loop
		else {  // jika n lebih dari 20
			cout << "\Array dapat mempunyai maksimal 20 elemen. \n"; // output ke layar

	}
}

	cout << endl;
	cout <<  "======================" << endl;
	cout <<  " Masukkan Elemen Array" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < n; i ++)  { // looping dengan i di mulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ": "; // output ke layar
		cin >> arr[i];                         // ouput dari pengguna

void  bubblesortArray () { // prosedur mengurutkan array dengan metode bubble sort
	int pass = 1; // step 1





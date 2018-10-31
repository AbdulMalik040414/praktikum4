# praktikum4

## latihan1.cpp : cara menghitung total pembayaran barang

1. mendeklarasikan variable (int) n=0, total=0, a, x, banyakbarang dan hargabarang
2. memasukan jumlah bilangan (banyak barang) yang di inginkan
3. membuat perulangan demgan menggunakan for loop "for (n;n<banyakbarang;n++)"
4. memasukan bilangan ke dalam variable input (juumlah barang) dengan nilai tertentu 
5. memasukan bilangan ke dalam variable input (harga satuan) dengan nilai tertentu 
6. mencetak harga barang (jumlah barang "a" dikali harga satuan "x")
7. mencetak total pembayaran (sebelum mendapatkan diskon)
8. membuat potongan harga dengan menggunakan if statment (total>1000000 diskon 10%, total>501000 diskon 5%, selain itu tidak dapat diskon)
9. memcetak total pembayaran (dengan diskon tertentu)

berikut flowchart nya :
![latihan1](https://user-images.githubusercontent.com/44117281/47785368-1a5e5980-dd3b-11e8-9412-9c5db790d00b.jpg)

berikut code lengkapnya :
#include <iostream>

using namespace std;
int main(){
	int n=0;
	int total=0;
	int a,x;
	int banyakbarang, hargabarang;
	cout <<" masukan banyak barang : ";
	cin >>banyakbarang;
	for (n;n<banyakbarang;n++) {
		cout << "masukan jumlah barang " << n+1 << " : " ;
		cin >> a;
		cout << "masukan harga satuan : ";
		cin >> x;
		hargabarang=a*x;
		cout << "harga barang : "<< hargabarang << endl;
		total=total+hargabarang;
		cout << "totalnya adalah : " << total << endl;
	}
		if (total>1000000)
			cout << "dapat potongan 10 %, total harga yang harus dibayar : " << total-(total*10/100);
		else if (total>=501000)
			cout << "dapat potongan 5 %, total harga yang harus dibayar : " << total-(total*5/100);
		else
			cout << "tidak dapat potongan, total harga yang harus dibayar : " << total;
	return 0;
}

berikut hasil screnshotnya :
![latihan1](https://user-images.githubusercontent.com/44117281/47783743-1da31680-dd36-11e8-8bc0-98e4b3e9c67e.png)

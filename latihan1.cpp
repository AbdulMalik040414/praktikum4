#include <iostream>

using namespace std;

int main()
{
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
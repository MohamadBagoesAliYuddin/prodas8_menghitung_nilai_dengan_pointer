/*NAMA  : MOHAMAD BAGOES ALI YUDDIN  */
/*NIM   : 20051397048                */
/*KELAS : MI_2020B                   */

#include <iostream>
#include <sstream>

using namespace std;


int main(int argc, char *argv[])
{
cout <<"======================================================="<< endl;
cout <<"======================================================="<< endl;
cout <<"==                                                   =="<< endl;
cout <<"==   ----------------PROGRAM UNTUK----------------   =="<< endl;
cout <<"==   -------MENENTUKAN KETERANGAN DAN NILAI-------   =="<< endl;
cout <<"==                                                   =="<< endl;
cout <<"======================================================="<< endl;
cout <<"======================================================="<< endl << endl;
	string k = "=======================================================";
	const int ukuran_array = 5;
	int nilai_maksimal = 0;
	string namap;
	string array[ukuran_array][2];
	string kategori;
	
	for(int i = 0; i <= ukuran_array - 1; i++){
		cout << k << endl;
		cout << "Nilai ke-" << i + 1 << endl;
		cout << "Masukan Nama  : "; 
		cin >>  *(*(array+i)+0);
		cout << "Masukan Nilai : "; 
		cin >> *(*(array+i)+1);
		cout<<endl;
	}
	

    cout << endl << endl << k << endl << k << endl << "==------------------KATEGORI NILAI-------------------==" << endl << k << endl << k << endl;
    
	for(int p = 0; p <= ukuran_array-1; p++){
		string nama = *(*(array+p)+0);
		istringstream ss(*(*(array+p)+1));
		int nilai;
		ss >> nilai;
		if(nilai >= 90 && nilai <= 100){
		kategori = "A";
	}
	else if(nilai >= 80 && nilai < 90){
		kategori = "B";
	}
	else if(nilai >= 70 && nilai < 80){
		kategori = "C";
	}
	else if(nilai >= 60 && nilai < 70){
		kategori = "D";
	}
	else if(nilai >= 50 && nilai < 60){
		kategori = "E";
	}
	else if(nilai < 50){
		kategori = "Tidak Lulus";
	}
	
		cout <<endl<<endl<< k << endl<< "Nama             : " << nama << endl << "Nilai            : " << nilai << endl << "Kategori Nilai   : " << kategori<< endl;
		if(nilai > nilai_maksimal){
		nilai_maksimal = nilai;
		namap = nama;
		}
	}
	
	cout << endl << endl << k << endl << k << endl << "Nilai Maksimum : " << nilai_maksimal << endl << "Oleh           : " << namap << endl << k << endl << k << endl;
cout <<endl <<"======================================================="<< endl;
	cout <<   "======================================================="<< endl;
	cout <<   "==                                                   =="<< endl;
	cout <<   "==                                                   =="<< endl;
	cout <<   "==                                                   =="<< endl;
	cout <<   "==             MOHAMAD BAGOES ALI YUDDIN             =="<< endl;
	cout <<   "==                    20051397048                    =="<< endl;
	cout <<   "==                                                   =="<< endl;
	cout <<   "==                                                   =="<< endl;
	cout <<   "==                                         Penk_Zpk  =="<< endl;
	cout <<   "======================================================="<< endl;
	cout <<   "======================================================="<< endl;

return 0;
}

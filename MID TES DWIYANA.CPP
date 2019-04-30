#include <iostream.h>
#include <conio.h>

main()
{
	int D, W, I, Y, A, TONT, TOT, NM, NF, NA;
   char Nama [20],NiM [10],Kriteria;
   cout << "Nama Mahasiswa = "; cin >>Nama;
   cout << "Nim            = "; cin >>NiM;
   cout << "Nilai Tugas 1  = "; cin >>D;
   cout << "Nilai Tugas 2  = "; cin >>W;
   cout << "Nilai Tugas 3  = "; cin >>I;
   cout << "Nilai Mid = "; cin >>Y;
   cout << "Nilai Final = "; cin >>A;
   TONT = (D+W+I)/3;
   TOT =TONT*20/100;
   NM = Y*40/100;
   NF = A*40/100;
   NA = TOT+NM+NF;
   cout << "\n Nama mahasiswa = "<<Nama;
   cout << "\n Nim = "<<NiM;
   cout << "\n Nilai Akhir = "<<NA;
   cout << "\n Dengan Kriteria = "<<Kriteria;
   	if(NA >= 80 ){
      	cout <<"a";
      } else if (NA >= 70 ){
      	cout <<"b";
      } else if (NA >= 60 ){
      	cout <<"c";
      } else if (NA >= 50 ){
      	cout <<"d";
      } else{
      	cout <<"e";
      }
   getch();
}
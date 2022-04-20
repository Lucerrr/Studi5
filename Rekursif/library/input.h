#include <iostream>
#include <fstream>
using namespace std;
class input{
    public:
      void cetak(){
        cout << "Menginputkan SKS beserta Matakuliah Mahasiswa\n";
        cout << "=============================================\n";
        cout << "Maukkan Nama Mahasiswa : ";
        cin >> nama;
        cout << "Masukkan NIM : ";
        cin >> nim;
        cout << "Inputkan Jumlah Matakuliah yang di ambil : ";
        cin >> jl_matkul;
          for(int i=0;i<jl_matkul; i++){
            cout << "Masukkan Matakuliah " << i+1 << "yang akan di ambil : ";
            cin << matkul[i];
            cout << "Jumlah dari SKS Matakuliah" << matkul[i];
            cin << sks[i]
          }
      }
    void toFile(){
      tulis_data.open("apidata.txt");
      tulis_data << nama << endl;
      tulis_data << nim << endl;
      tulis_data << jl_matkul << endl;
      for(int i=0;i<jl_matkul;i++){
        tulis_data << matkul[i] << endl;
        tulis_data << sks[i] << endl; 
      }
    tulis_data.close();
    }
  private:
      ofstream tulis_data;
      int nim, sks[20], jl_matkul;
      string nama, matkul[50];
};

#include <iostream>
#include <fstream>
using namespace std;

class Proses{
  public:
	  void getData(){
		  ambil_data.open("apidata.txt");
		  bool name = true;
		  bool nim = true;
		  bool bnyk = true;
		  while(!ambil_data.eof()){
			  if(name){
				  ambil_data >> nama;
				  name = false;
			  }
			  else if(nim){
				  ambil_data >> nim;
				  nim = false;
			  }
			  else if(bnyk){
				  ambil_data >> jlh_matkul;
				  bnyk = false;
			  }
			  else{
				  for (int i = 0; i < jlh_matkul; ++i)
				  {
					  ambil_data>> n_matkul[i];
					  ambil_data >> sks[i] ;
				  }
			  }

		  }
		  ambil_data.close();

	  }
	  int total(int y){
		  int hasil = 120000;
		  if (y==1){
			  return hasil;
		  }
		  else {
			  return hasil+total(y-1);
		  }
	  }
	  void cetak(){
		  for(int j=0; j<jlh_matkul; j++){
			  jlh_sks += sks[j];
		  }
		  cout << "Nama : " << nama << endl;
      cout << "Jumlah dari SKS = " << jlh_sks << endl;
		  cout << "Total dari biaya SKS = " << total(jlh_sks) << endl;
		  cout << "Jumlah matkul yang diambil : " << jlh_matkul << endl;
		  cout << "Daftar matkul yang diambil : \n";
		  for (int k=0; k<jlh_matkul; k++){
			  cout << n_matkul[k] << endl;
		  }
		

	  }
	  void toFile(){
		  tulis_data.open("apidata.txt");
		  tulis_data << nama << endl;
		  tulis_data << nim << endl;
		  tulis_data << jlh_sks << endl;
		  tulis_data << total(jlh_sks) << endl;
		  tulis_data << jlh_matkul << endl;
		  for (int d=0; d<jlh_matkul; d++){
			  tulis_data << n_matkul[d] << endl;
		  }
		  tulis_data.close();
	  }

  private:
	  ifstream ambil_data;
	  ofstream tulis_data;
	  string nama,n_matkul[30];
	  int nim, sks[30];
	  int jlh_matkul,jlh_sks;
	  int biaya = 120000;
};

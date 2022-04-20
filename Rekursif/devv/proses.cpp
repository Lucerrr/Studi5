#include <iostream>
#include <fstream>
#include "../library/proses.h"
using namespace std;

int main(){
	Proses proses;
	proses.getData();
	proses.cetak();
	proses.toFile();

	return 0;
}

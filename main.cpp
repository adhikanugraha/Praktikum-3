#include<iostream>
#include<fstream>
#include "library/proses.h"
#include "library/output.h"
using namespace std;
int main(){	
	Proses y;
	  y.getData();
	  y.jumlah();
	  y.potongan();
	  y.senddata();
	Output z;
  	  z.getData();
  	  z.cetak();
}

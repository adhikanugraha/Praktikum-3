#include<iostream>
#include<fstream>
#include "library/input.h"
#include "library/proses.h"
#include "library/output.h"
using namespace std;
int main(){	
	Input x;
  	x.cetak();
  	x.kefile();
	Proses y;
	  y.getData();
	  y.jumlah();
	  y.potongan();
	  y.senddata();
	Output z;
  	  z.getData();
  	  z.cetak();
}

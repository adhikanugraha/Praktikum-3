using namespace std;
class Input{
  public:
      void cetak(){          
      cout<<"=============================================\n";
		  cout<<"\tRUMAH MAKAN PAK ORYA\n"; 
      cout<<"=============================================\n";
		  cout<<"  Menu.\n";
		  cout<<" 1.Ayam geprek\tRp.21000\n";
		  cout<<" 2.Ayam goreng\tRp.17000\n";
		  cout<<" 3.Udang goreng\tRp.19000\n";
	  	cout<<" 4.Cumi goreng\tRp.20000\n";
		  cout<<" 5.Ayam bakar\tRp.25000\n";
      cout<<"=============================================\n";
			cout<<"masukkan kuantitas ayam geprek : "; cin>>ayam_ge;
			cout<<"masukkan kuantitas ayam goreng: "; cin>>ayam_gr;
			cout<<"masukkan kuantitas udang goreng: "; cin>>udang;
			cout<<"masukkan kuantitas cumi goreng: "; cin>>cumi;
			cout<<"masukkan kuantitas ayam bakar: "; cin>>ayam_bk;
	    cout<<"nmasukan jarak rumah anda dengan rumah makan kami(dalam km): ";
	    cin>>jarak; 
      }
void kefile(){
      tulis_data.open("api.txt");
      tulis_data << ayam_ge<< endl;
      tulis_data << ayam_gr<<endl;
      tulis_data << udang<<endl;
      tulis_data << cumi<<endl;
      tulis_data << ayam_bk<<endl;
      tulis_data << jarak;
      tulis_data.close();
    }
  private:
  ofstream tulis_data;
  int ayam_ge,ayam_gr,udang,cumi,ayam_bk,jarak;

};
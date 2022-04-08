using namespace std;

class Output{
  public:
      void cetak(){
        cout << "\t====STRUK PEMBELIAN KELOMPOK 07C===="<<endl;
        cout << "Pesanan : \n";
        cout << "Ayam Geprek  : "<<data_file[0] << endl;
        cout << "Ayam Goreng  : "<<data_file[1] << endl;
        cout << "Udang Goreng : "<<data_file[2] << endl;
        cout << "Cumi Goreng  : "<<data_file[3] << endl;
        cout << "Ayam Bakar   : "<<data_file[4] << endl;
        cout << "Harga total  : Rp. "<<data_file[5] << endl;
        cout << "Diskon       : "<<data_file[6] << endl;
        cout << "Ongkir       : Rp. "<<data_file[7] << endl;
        cout << "Total Bayar  : Rp. "<<data_file[8] << endl;
      }
      void getData(){
        ambil_data.open("api.txt");
        while(!ambil_data.eof()){
          ambil_data >> data_file[index];
          index += 1;
        }
        ambil_data.close();
        
      }


  private:
    ifstream ambil_data;
    string data_file[50];
    int index = 0;

};
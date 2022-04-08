using namespace std;
class Proses{
  public:
    void getData(){
          bool ayam_gprk = true;
          bool ayam_gr = true;
          bool udang_gr = true;
          bool cumi_gr = true;
          bool ayam_bk = true;

			ambil_data.open("api.txt");
				while(!ambil_data.eof()){
					if(ayam_gprk){
            ambil_data>>bnyk_ayamgprk;
            ayam_gprk=false;
          }
          else if(ayam_gr){
            ambil_data>>bnyk_ayamgr;
            ayam_gr=false;
          }
          else if (udang_gr){
            ambil_data>>bnyk_udanggr;
            udang_gr=false;
          }
          else if (cumi_gr){
            ambil_data>>bnyk_cumigr;
            cumi_gr=false;
          }
          else if (ayam_bk){
            ambil_data>>bnyk_ayambk;
            ayam_bk=false;
          }
          else{
            ambil_data>>jarak;
          }
				}
      
			ambil_data.close();
		}
    void jumlah(){
      total=((bnyk_ayamgprk*h_aymgprk)+(bnyk_ayamgr*h_ayamgr)+(bnyk_udanggr*h_udggr)+(bnyk_cumigr*h_cumigr)+(bnyk_ayambk*h_ayambk));
    }

    void potongan(){
      if(jarak<=3){
				ongkir = 15000;
				if(total>=25000 && total<50000){
					ongkir-=3000;
				}
				else if(total>=50000 && total<150000){
					ongkir-=5000;
					diskon=0.15;
					
				}
				else if(total>=150000){
					ongkir-=8000;
					diskon=0.35;
				}
			}
			else if(jarak>3){
				ongkir=25000;
				if(total>=25000 && total<50000){
					ongkir-=3000;
				}
				else if(total>=50000 && total<150000){
					ongkir-=5000;
					diskon=0.15;
					
				}
				else if(total>=150000){
					ongkir-=8000;
					diskon=0.35;
				}
			}
    }

    void senddata(){
          kirim_data.open("api.txt");
            kirim_data<<bnyk_ayamgprk<<endl;
            kirim_data<<bnyk_ayamgr<<endl;
            kirim_data<<bnyk_udanggr<<endl;
            kirim_data<<bnyk_cumigr<<endl;
            kirim_data<<bnyk_ayambk<<endl;
            kirim_data<<total<<endl;
            kirim_data<<diskon*100<<"%"<<endl;
            kirim_data<<ongkir<<endl;
            kirim_data<<total-(total*diskon)+ongkir;
            kirim_data.close();
      
    }
    void cetak(){
          cout<<bnyk_ayamgprk<<endl;
          cout<<bnyk_ayamgr<<endl;
          cout<<bnyk_udanggr<<endl;
          cout<<bnyk_cumigr<<endl;
          cout<<bnyk_ayambk<<endl;
          cout<<jarak<<endl;
          cout<<total<<endl;
          cout<<diskon<<endl;
          cout<<ongkir<<endl;
    }

  private:
    ifstream ambil_data;
    ofstream kirim_data;
    int jarak;
    int bnyk_ayamgprk;
    int bnyk_ayamgr;
    int bnyk_udanggr;
    int bnyk_cumigr;
    int bnyk_ayambk;
    float diskon;
    int ongkir;
    int total;
    int bayar;

    int h_aymgprk = 21000;
    int h_ayamgr = 17000;
    int h_udggr = 19000 ;
    int h_cumigr = 20000;
    int h_ayambk = 25000;

   
    
    
};

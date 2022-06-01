using namespace std;

class Output{
    public:
        void getData(){
            ambil_data.open("apiData.txt");
            ambil = 1;
            while(!ambil_data.eof()){
                if(ambil == 1){
                    ambil_data >> jumlahKaryawan;
                }else{
                    for(i=0;i<jumlahKaryawan;i++){
                        ambil_data >> idKaryawan[i];
                        ambil_data >> namaKaryawan[i];
                        ambil_data >> jabatanKaryawan[i];
                        ambil_data >> noTelepon[i];
                    }
                    for(i=0;i<jumlahKaryawan;i++){
                        ambil_data >> idDescending[i];
                    }
                    for(i=0;i<jumlahKaryawan;i++){
                        ambil_data >> idAscending[i];
                    }
                }
                ambil += 1;
            }
            ambil_data.close();
        }

        void cetak(){
            cout << "Urutan id Ascending = ";
            for(i=0;i<jumlahKaryawan;i++){
                cout << idAscending[i] << " ";
            }
            cout << endl;
            cout << "Urutan id Descending = ";
            for(i=0;i<jumlahKaryawan;i++){
                cout << idDescending[i] << " ";
            }
            cout << endl;
            cout << "Data Karyawan" << endl;
            cout << "=============================================" << endl;
            for(i=0;i<jumlahKaryawan;i++){
                cout << idKaryawan[i] << "\t" << namaKaryawan[i] << " " << jabatanKaryawan[i] << " " << noTelepon[i] << endl;
            }
            cout << "=============================================" << endl;
            cout << "Apakah Anda Ingin Melakukan Pencarian?" << endl;
            cout << "1. Ya" << endl;
            cout << "2. Tidak" << endl;
            cout << "Masukkan Pilihan : ";
            cin >> pil;
            if(pil == 1){
                cout << "Masukkan Id Yang Ingin Dicari : ";
                cin >> cari;
            }
        }

    private:
        ifstream ambil_data;
        string namaKaryawan[100], jabatanKaryawan[100], noTelepon[100];
        int pil, jumlahKaryawan, i, ambil, idKaryawan[100], idAscending[100], idDescending[100], cari;
};

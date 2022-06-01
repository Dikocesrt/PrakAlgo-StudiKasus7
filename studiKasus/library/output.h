using namespace std;

class Karyawan;

class Output{
    public:
        void getData(string namaFile){
            ambil_data.open(namaFile);
            ambil = 1;
            while(!ambil_data.eof()){
                if(ambil == 1){
                    ambil_data >> jumlahKaryawan;
                }else{
                    for(i=0;i<jumlahKaryawan;i++){
                        karyawan[i] = Karyawan();
                        ambil_data >> karyawan[i].id;
                        ambil_data >> karyawan[i].nama;
                        ambil_data >> karyawan[i].jabatan;
                        ambil_data >> karyawan[i].noTelepon;
                    }
                }
                ambil += 1;
            }
            ambil_data.close();
        }

        void search(int idCari){
            for(i=0;i<jumlahKaryawan;i++){
                if(idCari == karyawan[i].id){
                    cout << karyawan[i].id << "\t" << karyawan[i].nama << " " << karyawan[i].jabatan << " " << karyawan[i].noTelepon << endl;
                    return;
                }
            }
            cout << "-----------------------------" << endl;
            cout << "id tidak ditemukan..." << endl;
        }

        void cetak(){
            getData("karyawanAscending.txt");
            cout << "Data Karyawan Ascending" << endl;
            cout << "-----------------------------" << endl;
            for(i=0;i<jumlahKaryawan;i++){
                cout << karyawan[i].id << "\t" << karyawan[i].nama << " " << karyawan[i].jabatan << " " << karyawan[i].noTelepon << endl;
            }
            cout << "=============================================" << endl;
            getData("karyawanDescending.txt");
            cout << "Data Karyawan Descending" << endl;
            cout << "-----------------------------" << endl;
            for(i=0;i<jumlahKaryawan;i++){
                cout << karyawan[i].id << "\t" << karyawan[i].nama << " " << karyawan[i].jabatan << " " << karyawan[i].noTelepon << endl;
            }
            cout << "=============================================" << endl;
            cout << "Apakah Anda Ingin Melakukan Pencarian?" << endl;
            cout << "1. Ya" << endl;
            cout << "2. Tidak" << endl;
            cout << "Masukkan Pilihan : ";
            cin >> pil;
            cout << "-----------------------------" << endl;
            if(pil == 1){
                while(true){
                    cout << "Masukkan id Yang Ingin Dicari : ";
                    cin >> cari;
                    search(cari);
                    cout << "Apakah Anda Ingin Melakukan Pencarian Lagi?" << endl;
                    cout << "1. Ya" << endl;
                    cout << "2. Tidak" << endl;
                    cout << "Masukkan Pilihan : ";
                    cin >> pil;
                    cout << "-----------------------------" << endl;
                    if(pil == 2){
                        break;
                    }
                }
            }
        }

    private:
        ifstream ambil_data;
        string namaKaryawan[100], jabatanKaryawan[100], noTelepon[100];
        Karyawan karyawan[100];
        int pil, jumlahKaryawan, i, ambil, idKaryawan[100], idAscending[100], idDescending[100], cari;
};

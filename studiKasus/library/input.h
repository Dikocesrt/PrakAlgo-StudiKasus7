using namespace std;

class Input{
    public:
        Input(){}
        void masukin(){
            cout << "Program Menginput Nilai" << endl;
            cout << "========================================" << endl;
            cout << "Masukkan Jumlah Karyawan : ";
            cin >> jumlahKaryawan;
            for(i=0;i<jumlahKaryawan;i++){
                cout << "Masukkan Id Karyawan : ";
                cin >> idKaryawan[i];
                cout << "----------------------------------------" << endl;
                cout << "Masukkan Nama Karyawan : ";
                cin >> namaKaryawan[i];
                cout << "----------------------------------------" << endl;
                cout << "Masukkan Jabatan Karyawan : ";
                cin >> jabatanKaryawan[i];
                cout << "----------------------------------------" << endl;
                cout << "Masukkan No Telepon Karyawan : ";
                cin >> noTelepon[i];
                cout << "----------------------------------------" << endl;
            }
        }

        void toFile(){
            tulisData.open("apiData.txt");
            tulisData << jumlahKaryawan << endl;
            for(i=0;i<jumlahKaryawan;i++){
                tulisData << idKaryawan[i] << endl;
                tulisData << namaKaryawan[i] << endl;
                tulisData << jabatanKaryawan[i] << endl;
                if(i == jumlahKaryawan-1){
                    tulisData << noTelepon[i];
                }else{
                    tulisData << noTelepon[i] << endl;
                }
            }
            tulisData.close();
        }

    private:
        ofstream tulisData;
        string namaKaryawan[100], jabatanKaryawan[100], noTelepon[100];
        int jumlahKaryawan, i, idKaryawan[100];
};

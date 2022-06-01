using namespace std;

class Karyawan;

class Input{
    public:
        Input(){}
        void masukin(){
            cout << "Program Menginput Nilai" << endl;
            cout << "========================================" << endl;
            cout << "Masukkan Jumlah Karyawan : ";
            cin >> jumlahKaryawan;
            cout << "========================================" << endl;
            for(i=0;i<jumlahKaryawan;i++){
                karyawan[i] = Karyawan();
                cout << "Masukkan Id Karyawan : ";
                cin >> karyawan[i].id;
                cout << "Masukkan Nama Karyawan : ";
                cin >> karyawan[i].nama;
                cout << "Masukkan Jabatan Karyawan : ";
                cin >> karyawan[i].jabatan;
                cout << "Masukkan No Telepon Karyawan : ";
                cin >> karyawan[i].noTelepon;
                cout << "========================================" << endl;
            }
        }

        void toFile(){
            tulisData.open("apiData.txt");
            tulisData << jumlahKaryawan << endl;
            for(i=0;i<jumlahKaryawan;i++){
                tulisData << karyawan[i].id << endl;
                tulisData << karyawan[i].nama << endl;
                tulisData << karyawan[i].jabatan << endl;
                if(i == jumlahKaryawan - 1){
                    tulisData << karyawan[i].noTelepon;
                }else{
                    tulisData << karyawan[i].noTelepon << endl;
                }
            }
            tulisData.close();
        }

    private:
        ofstream tulisData;
        Karyawan karyawan[100];
        int jumlahKaryawan, i;
};

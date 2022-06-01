using namespace std;

class Proses{
    public:
        Proses(){}
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
                }
                ambil += 1;
            }
            ambil_data.close();
        }

        void sortingAscending(){
            for(i=0;i<jumlahKaryawan;i++){
                for(j=0;j<(jumlahKaryawan-i-1);j++){
                    
                }
            }
        }

        void sortingDescending(){
            for(i=0;i<jumlahKaryawan;i++){
                for(j=0;j<(jumlahKaryawan-i-1);j++){
                    
                }
            }
        }

        void toFile(){
            tulis_data.open("apiData.txt");
                tulis_data << jumlahKaryawan << endl;
                for(i=0;i<jumlahKaryawan;i++){
                    tulis_data << idKaryawan[i] << endl;
                    tulis_data << namaKaryawan[i] << endl;
                    tulis_data << jabatanKaryawan[i] << endl;
                    tulis_data << noTelepon[i] << endl;
                }
                for(i=0;i<jumlahKaryawan;i++){
                    tulis_data << idAscending[i] << endl;
                }
                for(i=0;i<jumlahKaryawan;i++){
                    tulis_data << idDescending[i] << endl;
                }
            tulis_data.close();
        }

    private:
        ifstream ambil_data;
        ofstream tulis_data;
        string namaKaryawan[100], jabatanKaryawan[100], noTelepon[100];
        int jumlahKaryawan, i, j, ambil, idKaryawan[100], idAscending[100], idDescending[100];
};
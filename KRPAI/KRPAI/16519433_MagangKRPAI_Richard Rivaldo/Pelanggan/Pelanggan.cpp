#include <sstream>
#include "Pelanggan.h"

/* Outside Class Method Declaration */
// Constructor
Pelanggan::Pelanggan(){
    setID(0);
    setNama("a");
    setPaket("a");
    setJalan("a");
    setKota("a");
    setProvinsi("a");
    setKodePos(0);
}

// Copy Constructor
Pelanggan::Pelanggan(int id, string nama, string paket, string jalan, string kota, string provinsi, int kodePos){
    setID(id);
    setNama(nama);
    setPaket(paket);
    setJalan(jalan);
    setKota(kota);
    setProvinsi(provinsi);
    setKodePos(kodePos);
}

/* Main Program */
int main(){
    // Variables
    int i = 0, count = 0;
    string input;

    // Class Attributes
    /* Asumsi maksimal pelanggan 100, tidak menggunakan array dinamis*/
    Pelanggan arrP[100];
    int id, kodePos;
    string nama, paket, jalan, kota, provinsi;

    // Init loop for inputs
    while(i < 100){
        getline(cin, input);
        if(input != "X"){
            stringstream ToIntId(input);
            ToIntId >> id;
        }
        else{
            break;
        }
        
        getline(cin, nama);
        getline(cin, paket);
        getline(cin, jalan);
        getline(cin, kota);
        getline(cin, provinsi);
        getline(cin, input);
        stringstream ToIntCode(input);
        ToIntCode >> kodePos;

        Pelanggan temp(id, nama, paket, jalan, kota, provinsi, kodePos);
        arrP[i] = temp;

        i += 1;
        count += 1;
    }

    // Print Results
    if(i == 0){
        cout << "Tidak ada pelanggan!" << endl;
    }
    else{
        cout << "Total Pelanggan: " << count << endl;

        for(int j = 0; j < count; j++){
            cout << arrP[j].getID() << ", " << arrP[j].getNama() << ", " << arrP[j].getPaket() << endl;
            cout << "\t" << arrP[j].getJalan() << ", " << arrP[j].getKota() << ", " << arrP[j].getProvinsi() << ", " << arrP[j].getKode() << endl;
        }
    }

    return 0;
}


/* 
getline -> receive input with type string
stringstream -> change type string to int
*/
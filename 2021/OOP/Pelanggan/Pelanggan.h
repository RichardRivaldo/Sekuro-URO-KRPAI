#ifndef PELANGGAN_H
#define PELANGGAN_H

#include <iostream>

using namespace std;

class Pelanggan{
    private:
        int id;
        int kodePos;
        string nama;
        string paket;
        string jalan;
        string kota;
        string provinsi;
        
    public:
        // Constructor
        Pelanggan();

        // Copy Constructor
        Pelanggan(int id, string nama, string paket, string jalan, string kota, string provinsi, int kodePos);

        // Destructor ~Pelanggan();

        // Setter
        void setID(int ID){
            id = ID;
        }
        void setNama(string Nama){
            nama = Nama;
        }
        void setPaket(string Paket){
            paket = Paket;
        }
        void setJalan(string Jalan){
            jalan = Jalan;
        }
        void setKota(string Kota){
            kota = Kota;
        }
        void setProvinsi(string Provinsi){
            provinsi = Provinsi;
        }
        void setKodePos(int KodePos){
            kodePos = KodePos;
        }

        // Getter

        int getID(){
            return id;
        }
        string getNama(){
            return nama;
        }
        string getPaket(){
            return paket;
        }
        string getJalan(){
            return jalan;
        }
        string getKota(){
            return kota;
        }
        string getProvinsi(){
            return provinsi;
        }
        int getKode(){
            return kodePos;
        }
};

#endif
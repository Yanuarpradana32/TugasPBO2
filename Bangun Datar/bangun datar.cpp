#include <iostream>
#include <cmath>
using namespace std;

// Membuat class induk Bangun Datar
class BangunDatar {
private:
    double luas, keliling;

public:
    double getLuas() {
        return this->luas;
    }
    void setLuas(double luas) {
        this->luas = luas;
    }
    double getKeliling() {
        return this->keliling;
    }
    void setKeliling(double keliling) {
        this->keliling = keliling;
    }
};

// Membuat class Persegi yang merupakan turunan dari class Bangun Datar
class Persegi : public BangunDatar {
private:
    double sisi; 

public:
    void getdata() {
        cout << "==== Persegi ====" << endl;
        cout << "Masukkan Panjang Sisi: ";
        cin >> this->sisi;
        setLuas(sisi * sisi);
        setKeliling(4 * sisi);
    }
};

// Membuat class Persegi Panjang yang merupakan turunan dari class Bangun Datar
class PersegiPanjang : public BangunDatar {
private:
    double panjang, lebar;

public:
    void getdata() {
        cout << "==== Persegi Panjang ====" << endl;
        cout << "Masukkan Panjang: ";
        cin >> this->panjang;
        cout << "Masukkan Lebar: ";
        cin >> this->lebar;
        setLuas(lebar * panjang);
        setKeliling(2 * panjang + 2 * lebar);
    }
};

// Membuat class Segitiga yang merupakan turunan dari class Bangun Datar
class Segitiga : public BangunDatar {
private:
    double alas, tinggi, sisi_miring;

public:
    void getdata() {
        cout << "==== Segitiga ====" << endl;
        cout << "Masukkan Alas: ";
        cin >> this->alas;
        cout << "Masukkan Tinggi: ";
        cin >> this->tinggi;
        sisi_miring = sqrt((alas * alas) + (tinggi * tinggi));
        setLuas(alas * tinggi / 2);
        setKeliling(alas + tinggi + sisi_miring);
    }
};

// Membuat class Lingkaran yang merupakan turunan dari class Bangun Datar
class Lingkaran : public BangunDatar {
private:
    double jari;

public:
    void getdata() {
        cout << "==== Lingkaran ====" << endl;
        cout << "Masukkan Jari-jari: ";
        cin >> this->jari;
        setLuas(jari * jari * M_PI);
        setKeliling(2 * M_PI * jari);
    }
};

int main() {
    int pilihan;
    cout << "Pilih Bangun Datar yang akan dihitung:" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "4. Lingkaran" << endl;
    cout << "Masukkan nomor pilihan Anda: ";
    cin >> pilihan;

    switch (pilihan) {
    case 1: {
        Persegi persegi;
        persegi.getdata();
        cout << "Luas persegi: " << persegi.getLuas() << endl;
        cout << "Keliling persegi: " << persegi.getKeliling() << endl;
        break;
    }
    case 2: {
        PersegiPanjang persegi_panjang;
        persegi_panjang.getdata();
        cout << "Luas persegi panjang: " << persegi_panjang.getLuas() << endl;
        cout << "Keliling persegi panjang: " << persegi_panjang.getKeliling() << endl;
        break;
    }
    case 3: {
        Segitiga segitiga;
        segitiga.getdata();
        cout << "Luas segitiga: " << segitiga.getLuas() << endl;
        cout << "Keliling segitiga: " << segitiga.getKeliling() << endl;
        break;
    }
    case 4: {
        Lingkaran lingkaran;
        lingkaran.getdata();
        cout << "Luas lingkaran: " << lingkaran.getLuas() << endl;
        cout << "Keliling lingkaran: " << lingkaran.getKeliling() << endl;
        break;
    }
    default:
        cout << "Pilihan tidak valid." << endl;
        break;
    }

    return 0;
}
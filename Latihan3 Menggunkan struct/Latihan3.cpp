#include <iostream>
#include <stdlib.h>

using namespace::std;

struct DataProgram{
    int N_uts, N_uas, Tgs, Absen;
    float T_uts, T_uas, T_tgs, T_absen, Total;
};
DataProgram dt;

double input(string text){
    double nilai;
    cout<<"Input nilai "<<text<<" : ";cin>>nilai;
    return nilai;
}

void garis(){
    cout<<"-------------------------------\n";
}

void Hitung(){
        //Menghitung UTS
        dt.T_uts=input("UTS")*0.2;

        //Menghitung UAS
        dt.T_uas=input("UAS")*0.3;

        //Menghitung Tugas
        dt.T_tgs=input("Tugas")*0.35;

        //Menghitung Absen
        dt.T_absen=input("Absen")*0.15;

        //Total keseluruhan
        dt.Total=dt.T_uts+dt.T_uas+dt.T_tgs+dt.T_absen;

}

void grade(){
    if(dt.Total>=81){
            cout<<"| Peringkat Huruf A           |\n";
            garis();
        }else if(dt.Total>=61){
            cout<<"| Peringkat Huruf B           |\n";
            garis();
        }else if(dt.Total>=41){
            cout<<"| Peringkat Huruf C           |\n";
            garis();
        }else if(dt.Total>=21){
            cout<<"| Peringkat Huruf D           |\n";
            garis();
        }else if(dt.Total>=0){
            cout<<"Peringkat Huruf E             |\n";
            garis();
        }
}

main(){

        cout<<"================================\n";
        cout<<"+                              +\n";
        cout<<"+     Menghitung Nilai Akhir   +\n";
        cout<<"+                              +\n";
        cout<<"================================\n";
        Hitung();
        system("cls");
        garis();
        cout<<"+ Total nilai UTS   : "<<dt.T_uts<<endl;
        cout<<"+ Total nilai UAS   : "<<dt.T_uas<<endl;
        cout<<"+ Total nilai Tugas : "<<dt.T_tgs<<endl;
        cout<<"+ Total nilai Absen : "<<dt.T_absen<<endl;
        garis();
        cout<<"| Total Keseluruhan : "<<dt.Total<<endl;
        garis();
        grade();

 system("pause");
}


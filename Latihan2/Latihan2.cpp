#include <iostream>
#include <stdlib.h>

using namespace::std;

double input(string text){
    double nilai;
    cout<<"Input nilai "<<text<<" : ";cin>>nilai;
    return nilai;
}

void garis(){
    cout<<"-------------------------------\n";
}

void grade(double Total){
    if(Total>=81){
            cout<<"| Peringkat Huruf A           |\n";
            garis();
        }else if(Total>=61){
            cout<<"| Peringkat Huruf B           |\n";
            garis();
        }else if(Total>=41){
            cout<<"| Peringkat Huruf C           |\n";
            garis();
        }else if(Total>=21){
            cout<<"| Peringkat Huruf D           |\n";
            garis();
        }else if(Total>=0){
            cout<<"Peringkat Huruf E             |\n";
            garis();
        }
}

main(){

    int nilai, N_uts, N_uas, Tgs, Absen;
    float T_uts, T_uas, T_tgs, T_absen, Total;

        cout<<"================================\n";
        cout<<"+                              +\n";
        cout<<"+     Menghitung Nilai Akhir   +\n";
        cout<<"+                              +\n";
        cout<<"================================\n";

        //Menghitung UTS
        T_uts=input("UTS")*0.2;

        //Menghitung UAS
        T_uas=input("UAS")*0.3;

        //Menghitung Tugas
        T_tgs=input("Tugas")*0.35;

        //Menghitung Absen
        T_absen=input("Absen")*0.15;

        //Total keseluruhan
        Total=T_uts+T_uas+T_tgs+T_absen;

        system("cls");
        garis();
        cout<<"+ Total nilai UTS   : "<<T_uts<<endl;
        cout<<"+ Total nilai UAS   : "<<T_uas<<endl;
        cout<<"+ Total nilai Tugas : "<<T_tgs<<endl;
        cout<<"+ Total nilai Absen : "<<T_absen<<endl;
        garis();
        cout<<"| Total Keseluruhan : "<<Total<<endl;
        garis();
        grade(Total);

 system("pause");
}


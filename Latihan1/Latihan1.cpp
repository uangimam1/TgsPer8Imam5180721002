#include <iostream>
#include <stdlib.h>

using namespace::std;

main(){
    string Nama, NIM;
    int N_uts, N_uas, Tgs, Absen;
    float T_uts, T_uas, T_tgs, T_absen, Total;
        cout<<"================================\n";
        cout<<"+                              +\n";
        cout<<"+     Menghitung Nilai Akhir   +\n";
        cout<<"+                              +\n";
        cout<<"================================\n";
        cout<<" Nama : ";cin>>Nama;
        cout<<" NIM  : ";cin>>NIM;
        cout<<" Nilai UTS   : ";cin>>N_uts;
        cout<<" Nilai UAS   : ";cin>>N_uas;
        cout<<" Nilai Tugas : ";cin>>Tgs;
        cout<<" Kehadiran   : ";cin>>Absen;

        //Menghitung UTS
        T_uts=N_uts*0.2;

        //Menghitung UAS
        T_uas=N_uas*0.3;

        //Menghitung Tugas
        T_tgs=Tgs*0.35;

        //Menghitung Absen
        T_absen=Absen*0.15;

        //Total keseluruhan
        Total=T_uts+T_uas+T_tgs+T_absen;

        system("cls");
        cout<<"-------------------------------\n";
        cout<<" Nama : "<<Nama<<endl;
        cout<<" NIM  : "<<NIM<<endl;
        cout<<"-------------------------------\n";
        cout<<"+ Total nilai UTS   : "<<T_uts<<endl;
        cout<<"+ Total nilai UAS   : "<<T_uas<<endl;
        cout<<"+ Total nilai Tugas : "<<T_tgs<<endl;
        cout<<"+ Total nilai Absen : "<<T_absen<<endl;
        cout<<"-------------------------------\n";
        cout<<"| Total Keseluruhan : "<<Total<<endl;
        cout<<"-------------------------------\n";

        if(Total>=81){
            cout<<"| Peringkat Huruf A           |\n";
            cout<<"-------------------------------\n";
        }else if(Total>=61){
            cout<<"| Peringkat Huruf B           |\n";
            cout<<"-------------------------------\n";
        }else if(Total>=41){
            cout<<"| Peringkat Huruf C           |\n";
            cout<<"-------------------------------\n";
        }else if(Total>=21){
            cout<<"| Peringkat Huruf D           |\n";
            cout<<"-------------------------------\n";
        }else if(Total>=0){
            cout<<"Peringkat Huruf E             |\n";
            cout<<"-------------------------------\n";
        }
 system("pause");
}

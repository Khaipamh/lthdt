#include<iostream>
#include<string>
using namespace std;
class Sinhvien{
    private:
    string msv;
    bool Active;
    string tensv;
    int maxtien=0;
    int soDu=0;
    public:
    void setmsv(string ma){
        msv= ma;
    }
    string getmsv(){
        return msv;
    }
    void setten(string ten){
        tensv = ten;
    }
    string  getten(){
        return tensv;
    }
    void setsodu(int sd){
        soDu= sd;
    }
    bool isActive(){
        return Active;
    }
    int getsodu(){return soDu;}
    void ruttien(int sotien){
        int dem=0;
        if(sotien > soDu ){
            dem+=1;
            cout<<"so tien khong hop le"<<endl;
            if(dem >=5 ){
                Active = false;
                cout<<" tai khoan tam thoi bi khoa"<<endl;
            }
        }
        if(Active == true){
            cout<<"rut tien thanh cong"<<endl;
            soDu = soDu - sotien;
        }
    }
};
int main(){
    string msv;
    Sinhvien sv;
    string tensv;
    int Sodu;
    int ruttien;
    bool active=true;
    int x;
    cout<<"nhap ma sinh vien:";
    getline(cin,msv);
    sv.setmsv(msv);
    cout<<"nhap ten sinh vien :";getline(cin,tensv);
    sv.setten(tensv);
    cout<<"nhap so du hien co";
    cin>> Sodu;
    sv.setsodu(Sodu);
    //Sinhvien( msv,tensv,Sodu,active);
    cout<<"chon phuong thuc:";
    cout<<"\n1.Rut tien";
    cout<<"\n2.kiem tra tai khoan.";
    cout<<"\n3.Ket thuc";
    while(x<3){
        if(x==1){
            cout<<"nhap so tien can rut:";
            cin>>ruttien;
            Sodu= Sodu-ruttien;
            sv.setsodu(Sodu);
            cout<<"so du hien tai la:"<<sv.getsodu()<<endl;
        }
    }

    return 0;
}

#include <iostream>
using namespace std;
class SinhVien{
    string maSV, tenSV;
    public:
    void setMaSV(string x){maSV = x;}
    string getMaSV(){return maSV;}
    void setTenSV(string y){tenSV = y;}
    string getTenSV(){return tenSV;}  
};
class Sach{
    string maSach, tenSach;
    public:
    void setMaSach(string x){maSach = x;}
    string getMaSach(){return maSach;}
    void setTenSach(string y){tenSach = y;}
    string getTenSach(){return tenSach;}
};
class MuonSach: public SinhVien, public Sach{
    string ngayMuon;
    string maSV, maSach;
    public:
    void setNgayMuon(string x){ngayMuon = x;}
    string getNgayMuon(){return ngayMuon;}

};
void muonsach(){
    MuonSach ms;
    string msv, ten;
    string masach[5] = {"Ma101","Cs110","Ge111","cs112","Ma201"};
    cout<<"Ban hay nhap MSV: ";
    //ms.setMaSV();
    cin >> msv;
    cout<<"Ban hay nhap ten SV: ";
    //ms.getTenSV();
    getline(cin, ten);
    cout <<"Ban muon muon sach gi? \n";
    for (int i =0;i<5;i++){
        cout<<(i+1)<<". "<<masach[i]
    }
    }
void trasach(){

}
void menu(){
    cout<<"1.Muon sach \n";
    cout<<"2.Tra sach \n";
    cout<<"0.Thoat \n";
}
int main(){
    MuonSach ms;
    string masv;
     msv[3]= {"A47001","A47101","A47201"};
    string masach[5] = {"Ma101","Cs110","Ge111","cs112","Ma201"};
    ms.setMaSV(msv[3]);
    ms.setMaSach(masach[5]);
    menu();
    int chon;
    cout <<"Ban hay chon chuc nang: ";
    cin>>chon;
    while(chon!=0){
        if (chon == 1){
            muonsach();
        }
        menu();
        cout <<"Ban hay chon chuc nang: ";
        cin>>chon;

    }
   



}
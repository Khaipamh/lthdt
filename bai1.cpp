#include <iostream>
using namespace std;

class Sinhvien{
    private:
    string MSV;
    int diemToan;

    public:
    void setMSV(string x){
        MSV = x;
    }
    string getMsv(){
        return MSV;
    }
    void setDiemToann(int x){
        diemToan = x;
    }
    int getDiemToan(){
    return diemToan;
    }
};
int main(){
    string msv;
    int diem;
    Sinhvien sv;
    cout << "Nhap Ho va Ten: ";
    cin >> msv;
    cout << "Nhap diem: ";
    cin >> diem;
    sv.setMSV("Nguyen Van A");
    sv.setDiemToann(9);
    cout << "Diem toan sinh vien "<< sv.setMSV() <<"la: " << sv.setDiemToann();
    return 0;
}

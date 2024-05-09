#include <iostream>
using namespace std;
class Hinh{
    public:
    virtual float dt(){
        return 0;
    }
};
class HinhChuNhat: public Hinh{
    float chieuDai, chieuRong;
    public:
    HinhChuNhat(float x, float y){
        chieuDai = x;
        chieuRong = y;
    }
    float dt(){
        return chieuDai*chieuRong;
    }
};
class HinhTron: public Hinh{
    float banKinh;
    const float pi = 3.14159;
    public:
    HinhTron(float x){
        banKinh = x;
    }
    float dt(){
        return pi*banKinh*banKinh;
    }
};
class TamGiacVuong: public Hinh{
    float canh1, canh2;
    public:
    TamGiacVuong(float x,float y){
        canh1 = x;
        canh2 = y;
    }
    float dt(){
        return canh1*canh2*1/2;
    }
};
int main(){
    Hinh* hinh;
    HinhChuNhat hinhChuNhat(13,6);
    HinhTron hinhTron(9);
    TamGiacVuong tamGiacVuong(3,1);
    hinh = &hinhChuNhat;
    cout << "Dien tich hinh Chu Nhat la: "<<hinh ->dt()<<endl;
    hinh = &hinhTron;
    cout << "Dien tich hinh Tron la: "<<hinh ->dt()<<endl;
    hinh = &tamGiacVuong;
    cout << "Dien tich hinh Tam Giac Vuong la: "<<hinh ->dt()<<endl;
    return 0;
}
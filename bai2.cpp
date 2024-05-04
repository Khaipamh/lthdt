#include <iostream>
using namespace std;
class TongSo{
    int tong;
    public:
    void setTong(int a, int b, int c){
        tong = a + b + c;
        
    } 
    int getTong(){
        return tong;

    }

};
int main(){
    int a,b,c,tong ;
    TongSo ts;
    cout << "Nhap so thu nhat: ";
    cin >> a;
    cout << "Nhap so thu hai: ";
    cin >> b;
    cout << "Nhap so thu ba: ";
    cin >> c;
    ts.setTong (a,b,c);
    cout << "Tong ba so "<< a <<" + "<< b <<" + " <<c <<" = " <<ts.getTong();
    return 0;
}
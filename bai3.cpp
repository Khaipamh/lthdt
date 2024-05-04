#include <iostream>
using namespace std;
class TruSo{
    int hieu;
    public:
    void setHieu(int a, int b, int c){
        hieu = a - b - c;
        
    } 
    int getHieu(){
        return hieu ;

    }

};
int main(){
    int a,b,c,tong ;
    TruSo ts;
    cout << "Nhap so thu nhat: ";
    cin >> a;
    cout << "Nhap so thu hai: ";
    cin >> b;
    cout << "Nhap so thu ba: ";
      cin >> c;
    ts.setHieu (a,b,c);
    cout << "Hieu ba so: "<< a <<" - "<< b <<" - " <<c <<" = " <<ts.getHieu();
    return 0;
}
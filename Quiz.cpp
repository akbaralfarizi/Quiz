#include <iostream>
#include <string>
using namespace std;

class kipas {
	public:
	void berputar(string berhembus);
	int speed;
	string warna;
};

int main(){
	kipas KipasAngin,KipasAnginAir,KipasTangan,AC;
	
	KipasAngin.warna = "SILVER";
	KipasAnginAir.warna = "HITAM";
	KipasTangan.warna = "PINK";
	AC.warna = "PUTIH";
	
	cout<<"Warna kipas angin nya "<<(KipasAngin.warna)<<endl;
	KipasAngin.berputar("bzzzzz");
	
}

void kipas::berputar(string berhembus) {
	cout<<"Bunyi hembusannya kaya ini nah..."<<berhembus<<endl;
}

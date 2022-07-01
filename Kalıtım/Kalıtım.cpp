

#include <iostream>
using namespace std;
class Oyuncu {
public :
	int level;
	string isim;
	Oyuncu(string isim): isim(isim),level(1){}
	
	void sutcek() {
		cout << isim << " oyuncu" << level *10 << " hizinda bir sut cekiyor" << endl;

	}
	void antreman() {
		cout << "antreman yapiyor.." << endl;
		level++;

	}

};
class Tsubasa :public Oyuncu {
public:
	Tsubasa() :Oyuncu("Tsubasa") {
	
		}
	void kartalsutu() {
		cout << isim << " oyuncu" << level* 20 << " hizinda bir sut cekiyor" << endl;
	}
};
int main()
{
	Oyuncu o1("takeshi ");
	Oyuncu o2("taro ");
	o1.sutcek();
	o1.antreman();
	o2.sutcek();
	cout << endl;

	Tsubasa t;
	t.sutcek();
	t.kartalsutu();
	t.antreman();
	t.sutcek();
	t.kartalsutu();

	return 0;
}

#include <iostream>
using namespace std;

class seseorang {
public:
	virtual void pesan() = 0;
	//virtual void pesan(){
		//cout << "Pesan dari seseorang" << endl;
	//}
};

class Joko : public seseorang {
public :
	void pesan() {
		cout << "Pesan dari joko" << endl;
	}
};

class Lia : public seseorang {
public :
	void pesan() {
		cout << "Pesan dari " << endl;
	}
};

int main() {
	seseorang* obyek;
	Joko a;
	Lia b;

	obyek = &a;
	obyek->pesan();
	obyek = &b;
	obyek->pesan();
	//a.seseorang::pesan();
	//b.seseorang::pesan();

	return 0;
}
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class shape {
public:
	virtual void perimeter() {};
};

class circle :public shape {
private:
	int r;
	double PI = 3.14;
public:
	
	void perimeter() {
		double p = 2 * PI * r;
	}
	circle(int r)
	{
		this->r = r;
	}
};

class square :public shape {
private:
	int a;
public:
	void perimeter(){
		double p = 4 * a;
	}
	square(int a)
	{
		this->a = a;
	}
};

int main(int argc, char* argv[])
{
	vector<shape*>v;
	v.push_back(new circle(5));
	v.push_back(new square(5));
	v.push_back(new circle(5));
	v[0]->perimeter();
	for (int i = 0; i < 2 ; i++) {
		cout<< v[i] << " ";
	}

	for (int i = 0; i < 2; i++) {
		delete v[i]; v[i] = 0;
	}
	return 0;
}


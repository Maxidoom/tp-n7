#include<iostream>
#include<string>
using namespace std;
class estudiante{
private:
	string nombre;
	int edad;
	float cali;
public:
	void setnombre(string n);
	void setedad(int e);
	void setcali(float c);
	string getnombre();
	int getedad();
	float getcali();
};
	void estudiante::setnombre(string n){
		nombre = n;
	}
	void estudiante::setedad(int e){
		edad = e;
	}
	void estudiante::setcali(float c){
		cali = c;
	}
	string estudiante::getnombre(){
		return nombre;
	}
	int estudiante::getedad(){
		return edad;
	}
	float estudiante::getcali(){
		return cali;
	}
int main(){
estudiante est;
est.setnombre("maxi");
cout<<est.getnombre()<<endl;
est.setedad(16);
cout<<est.getedad()<<endl;
est.setcali(10);
cout<<est.getcali();
return 0;
}

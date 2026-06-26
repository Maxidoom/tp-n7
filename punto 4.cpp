#include<iostream>
using namespace std;
class sumatoria {
private:
    int numeros;
public:
    sumatoria();
    ~sumatoria();
};
	sumatoria::sumatoria(){
    	int suma;
    	numeros=0;
    	cout<<"ingresa numeros (0 para terminar):" << endl;
    	cout<<"ingresa un numero: ";
    	cin>>suma;
    	while (suma != 0) {
        	numeros += suma;
        	cout << "ingresa otro numero: ";
        	cin >> suma;
    	}
	}
	sumatoria::~sumatoria() {
		cout<<"suma total: "<<numeros<<endl;
	}
int main(){
    sumatoria sum;
    return 0;
}


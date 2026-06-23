#include <iostream>
#include <string>
using namespace std; 
class alumno{
private:
    string nombre;
    int edad;
public:
    void cargar(){
        cout<<"nombre: ";
        getline(cin, nombre);
        cout<<"edad: ";
        cin>>edad;
    }
      void imp(){
        cout<<"nombre: "<<nombre<<endl;
        cout<<"edad: "<<edad<<endl;
    }
    void mayor18(){
        if(edad>18){
            cout<<nombre<<" es mayor de edad"<<endl;
        } 
		else{
            cout<<nombre<< "es menor de edad"<<endl;
        }
    }
};
int main(){
    alumno a;
	cout<<"ingresa tu nombre y edad"<<endl;
    a.cargar();
    a.imp();
    a.mayor18();
    return 0;
}

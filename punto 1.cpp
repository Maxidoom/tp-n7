#include <iostream>
#include <string>
using namespace std; 
class alumno{
private:
    string nombre;
    int edad;
public:
	alumno();
    void imp();
    void mayor18();
};
	alumno::alumno(){
    	cout<<"ingresa tu nombre y edad"<<endl;
        cout<<"nombre: ";
        getline(cin, nombre);
        cout<<"edad: ";
        cin>>edad;
    }
    void alumno::imp(){
        cout<<"nombre: "<<nombre<<endl;
        cout<<"edad: "<<edad<<endl;
    }
    void alumno::mayor18(){
        if(edad>18){
            cout<<nombre<<" es mayor de edad"<<endl;
        } 
		else{
            cout<<nombre<< "es menor de edad"<<endl;
        }
    }
int main(){
    alumno a;
    a.imp();
    a.mayor18();
    return 0;
}

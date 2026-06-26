#include <iostream>
#include <string>
using namespace std; 
class empleado{
private:
    string nombre;
    float sueldo;
public:
    empleado();
    void imp();
    void verimp();
};
	empleado::empleado(){
		cout<<"ingrese su informacion"<<endl;
        cout<<"nombre: ";
        getline(cin, nombre);
        cout<<"sueldo: ";
        cin>>sueldo;
    }
    void empleado::imp(){
        cout<<"nombre: "<<nombre<<endl;
        cout<<"sueldo: $"<<sueldo<<endl;
    }
    void empleado::verimp(){
        if(sueldo>3000){
            cout<<nombre<<" tiene que pagar impuestos"<<endl;
        } 
		else{
            cout<<nombre<<" no tiene que pagar impuestos."<<endl;
        }
    }
int main(){
    empleado e;
    e.imp();
    e.verimp();
    return 0;
}

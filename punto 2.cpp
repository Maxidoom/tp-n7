#include <iostream>
#include <string>
using namespace std; 
class empleado{
private:
    string nombre;
    float sueldo;
public:
    void cargar(){
        cout<<"nombre: ";
        getline(cin, nombre);
        cout<<"sueldo: ";
        cin>>sueldo;
    }
      void imp(){
        cout<<"nombre: "<<nombre<<endl;
        cout<<"sueldo: $"<<sueldo<<endl;
    }
    void verimp(){
        if(sueldo>3000){
            cout<<nombre<<" tiene que pagar impuestos"<<endl;
        } 
		else{
            cout<<nombre<<" no tiene que pagar impuestos."<<endl;
        }
    }
};
int main(){
    empleado e;
	cout<<"ingrese su informacion"<<endl;
    e.cargar();
    e.imp();
    e.verimp();
    return 0;
}

#include <iostream>
using namespace std;
class operaciones{
private:
    float num1;
    float num2;
public:
    void cargar(){
        cout<<"ingresa el primer numero: ";
        cin>>num1;
        cout<<"ingresa el segundo numero: ";
        cin >> num2;
    }
    void sum(){
        cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
    }
    void res(){
        cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
    }
    void mult(){
        cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
    }
    void div(){
        if(num2==0){
            cout<<"no se puede dividir por cero"<<endl;
        }
		else{
            cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
        }
    }
};
int main(){
    operaciones op;
    op.cargar();
    op.sum();
    op.res();
    op.mult();
    op.div();
    return 0;
}

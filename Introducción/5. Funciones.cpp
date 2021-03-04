//GARCIA ANAGUIANO SAUL 2AV4
#include <iostream>

using namespace std;
int factorial(int a);

int main(){
int N1;
cout<<"Introduzca el valor del numero: ";
cin>>N1;
int fact=factorial(N1);
cout<<"El resultado de el numero es: "<<fact<<endl;

return 0;
}

int factorial(int a){
    int i;
    int resultado=1;
    for(i=1;i<=a;i++){
        resultado*=i;
    }
    return resultado;
}

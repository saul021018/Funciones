//GARCIA ANAGUIANO SAUL 2AV4
#include <iostream>

using namespace std;
void suma(int a, int b);

int main(){
int a,b;
cout<<"Escriba el primer numero que se va a sumar: ";
cin>>a;
cout<<"Escriba el segundo numero que se va a sumar:";
cin>>b;
suma(a,b);
return 0;
}

void suma (int a,int b){
int c=a+b;
cout<<"El resultado de la operacion (suma) es:"<<c<<endl;
}

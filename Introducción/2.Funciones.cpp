//GARCIA ANAGUIANO SAUL 2AV4
#include <iostream>

using namespace std;
void mayor_menor(int A, int B);

int main(){
int A,B;
cout<<"Escriba el primer valor 'A':  ";
cin>> A;
cout<<"Escriba el segundo valor 'B': ";
cin>>B;
mayor_menor(A, B);
return 0;
}

void mayor_menor (int A, int B){
    if (A>B){cout<<"A es mayor"<<endl;}
    else if (A<B){cout<<"B es mayor"<<endl;}
    else
        cout<<"Son iguales"<<endl;
    }

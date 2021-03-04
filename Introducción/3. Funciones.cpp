//GARCIA ANAGUIANO SAUL 2AV4
#include <iostream>

using namespace std;
int max(int A, int B);

int main(){
int A,B,C;
cout<<"Escriba el primer valor 'A':  ";
cin>> A;
cout<<"Escriba el segundo valor 'B': ";
cin>>B;
cout<<"Escriba el tercer valor 'C':  ";
cin>>C;
int max1 = max(A,B);
int max2 = max(max1,C);
cout<<"El numero mayor es:  "<<max2<<endl;

max(A,B);

return 0;
}

int max (int A, int B){
    int D;
    if(A>B){D=A;}
    if (A>B){D=A;}
    else {D=B; }
    return D;
    }

#include <iostream>
using namespace std;

int main(){

    int n, result = 1;
    
    cout<<"Introduzca numero para el factorial"<<endl;
    cin>> n;
    for(int i = 1; i <= n; i++){
        result *= i;
    }

    cout<< "Resultado: " << result <<endl;

    return 0;
}
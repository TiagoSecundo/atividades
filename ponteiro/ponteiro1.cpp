#include <iostream>

using namespace std;

int main ()
{
    string veiculo = "carro";
    string *pv;
    pv =& veiculo;//ponteiro pv recebe o endereço da variavel veiculo
    cout << pv << endl << &veiculo<< endl;
    *pv="moto";//ponteiro pv recebe o valor da variavel veiculo "moto";
    cout << *pv << endl << veiculo;
    return 0;
}
#include <iostream>

using namespace std;
class prpopaganda {
    private:

    public:
    void funcao (){
        cout<<"teste da funcao em classe ";
    }
    int mult (int a, int b){
        return a*b;
    }
};
 
int main(){
 prpopaganda teste;
 float resultado = 0.0;
 resultado = teste.mult(7,7);
 cout<< resultado;
 
    return 0;
}
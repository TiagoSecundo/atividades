/*3 Escreva uma fun¸c˜ao que calcule e retorne a distˆancia entre
dois pontos (x1, y1) e (x2, y2). Todos os n´umeros e valores de
retorno devem ser do tipo float. Considere:
D = q
(x2 − x1)
2 + (y2 − y1)
2
*/
#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
float distancia(float, float, float, float);// declarando a funçao 
int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float x1 = 10.0, x2 = 20.0, y1 = 15.0, y2 = 25.0;// chamando a funçao dentro da main
    cout << distancia(x1, x2, y1, y2);// escrevendo a funçao

    cout << endl;
    return 0;
}
float distancia(float x1, float x2, float y1, float y2)// criando a funçao
{
    float d;
    d = sqrt(pow((x1 - x2), 2.0) + pow((y1 - y2), 2.0));// usando sqrt para extrair raiz //usando pow para elevear ao quadrado
    return d;
}
#include <iostream>
#include <stack>

using namespace std;

int main (){
    stack <char> item1, item2;
    char aux;
    
    item1.push('a');
    item1.push('b');
    item1.push('c');
    item1.push('d');
    while (item1.size() > 0){
        // aux = item1.pop();
        item1.pop();
        item2.push(aux);
    }

    return 0;
}
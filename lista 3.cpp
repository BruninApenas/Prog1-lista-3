#include <iostream> //questão 1
using namespace std;

int main () {
    int n1, n2;
    cout<<"digite dois valores";
    cin>>n1>>n2;

    //bloco condicional
    if (n1>n2) {
        cout<<"maior é "<<n1<<endl;
        cout<<"ok";     
        }
    else {
        cout<<"maior é"<<n2<<endl;
        cout<<"okokok";
    }
return 0;
}


#include <iostream> //Questão 2
using namespace std;

int main () {
    float salário, prestação, limite;
    cout<<"Digitie o valor do salário e da prestação ";
    cin>>salário>>prestação;
    limite = salário*0.2;

    if (salário > limite)
        cout<<"Emprestimo concedido";
    else
        cout<<"Emprestimo não concedido";
return 0;
} 


#include <iostream> //Questão 3
using namespace std;

int main () {
    int dividendo, divisor,resultado,resto;
    cout<<"Digite o dividendo e o divisor";
    cin>>dividendo>>divisor;

    if (divisor != 0)
    {
        resultado = dividendo / divisor;
        resto = dividendo % divisor;
        cout<<resultado<<endl;
        cout<<resto;
    }
    else
    {
     cout<<"erro";
    }
return 0;
} 


#include <iostream> //questão 5
#include <cmath>  //biblioteca para operações matemáticas 
using namespace std;

int main () {
    int n1, n2, opção,potencia;
    cout<<"Digite 2 valores ";
    cin>>n1>>n2;
    string menu= "1.Potência\n2. Raiz quadrada\n3. Raiz cúbica";
    cout<<menu<<endl;
    cin>>opção;

    /*if (opção == 1)
    {
        cout<<pow(n1, n2);
    }

    else if (opção == 2)
    {
        cout<<sqrt(n1)<<"  "<< pow(n2, 0.5)<<endl; //sqrt retorna a raiz quadrada na biblioteca cmath
    }

    else if (opção == 3)
    {
        cout<<pow(n1, 1/3.0)<<"  "<<pow(n2, 1/3.0)<<endl;
    }
    else
    {
        cout<<"Opção inválida";
    } */
    switch (opção) //usado para menus igual esta questão, sendo outra opção ao invés de if elseif else
    {
    case 1:
        cout<<pow(n1, n2);
        break;
    case 2:
        cout<<sqrt(n1)<<"  "<< pow(n2, 0.5)<<endl; //sqrt retorna a raiz quadrada na biblioteca cmath
        break;
    case 3:
        cout<<pow(n1, 1/3.0)<<"  "<<pow(n2, 1/3.0)<<endl
        break;
    
    default:
        break;
    }
    

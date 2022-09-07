// BANCO DE DADOS - TESTE.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;
int main()
{
    const int tamanho = 5;
    int codigo[tamanho];
    string nome[tamanho];
    string telefone[tamanho];

    //ATRIBUIÇÕES:
    codigo[0] = 01;
    nome[0] = "Astrogildo";
    telefone[0] = "085 90101-0101";

    codigo[1] = 02;
    nome[1] = "Bertolino";
    telefone[1] = "081 90202-0202";

    codigo[2] = 03;
    nome[2] = "Cartolivo";
    telefone[2] = "083 90303-0303";

    codigo[3] = 04;
    nome[3] = "Dolinalvo";
    telefone[3] = "081 90404-0404";

    codigo[4] = 05;
    nome[4] = "Egbaldo";
    telefone[4] = "081 90505-0505";
    

    //DEFINIÇÕES PARA IMPRESSÃO
    int cod;
    cout << "PESQUISA POR CODIGO DE USUARIO\n";
    cout << "Digite o codigo de usuario: ";
    cin >> cod;
    cout << "\n";

    for (int i = 0; i < tamanho; i++)
    {
        if (codigo[i] == cod) //USUARIO ENCONTRADO
        {
            cout << "codigo: " << codigo[i] << "\n";
            cout << "nome: " << nome[i] << "\n";
            cout << "telefone: " << telefone[i] << "\n\n";
        }
    }
}






        
       



        




    
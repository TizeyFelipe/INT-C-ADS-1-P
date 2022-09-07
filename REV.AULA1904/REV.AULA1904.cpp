// REV.AULA1904.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;



// SEGUNDO EXEMPLO
// FAÇA UM PROGRAMA QUE RECEBA TRES INTEIROS E DIGA QUAIS SAO OS MAIORES,
// OS MENORES E SE EXISTEM IGUAIS

int main()
{
	int x;
	int y;
	int z;

	// COLETA DE DADOS
	cout << "insira o primeiro inteiro (x): \n";
	cin >> x;

	cout << "insira o segundo inteiro (y): \n";
	cin >> y;

	cout << "insira o terceiro inteiro (z): \n";
	cin >> z;

	// TRATANDO IGUALDADES

	if ((x == y) || (y == z) || (z == x))
		cout << "existem igualdades \n";

	if ((x > y) && (x > z))
		cout << "o maior numero e: \n" << x;

	else if ((y > x) && (y > z))
		cout << "o maior numero e: \n" << y;

	else
		cout << "o maior numero e \n" << z;


}










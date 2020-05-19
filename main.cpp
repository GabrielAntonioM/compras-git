#include <bits/stdc++.h>

using namespace std;

int main() {
	cout << "SISTEMA DE PERFIL DE CLIENTE" << endl;
	cout << "--------------------------------" << endl;
	cout << "INFORME OS DADOS DO ULTIMO ANO" << endl;
	//ler volume
	int compras;
	double vmedio;
	cout << endl << "Quantas compras o cliente fez no ultimo ano? ";
	cin >> compras;
	cout << "Qual o ticket medio? ";
	cin >> vmedio;
	cout << endl;
	//ler outros
	int atraso;
	string pagamento;
	cout << "Quantas vezes o cliente atrasou o pagamento? ";
	cin >> atraso;
	cout << "A maioria das compras foi em dinheiro, cartão, ou boleto (D/C/B)? ";
	cin >> pagamento;
	
	return 0;
}

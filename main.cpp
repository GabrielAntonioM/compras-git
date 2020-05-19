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
	//score compras
	int scorev;
	if((compras*vmedio) <= 0.0){
		scorev = 0;
	}else if((compras*vmedio) <= 3000.0 && compras <= 2){
		scorev = 20;
	}else if((compras*vmedio) <=3000.0 && compras > 2){
		scorev = 40;
	}else {
		scorev = 60;
	}
	
	cout << endl << "Score de volume de compras = " << scorev << " pontos" << endl;
	cout << endl;
	//scores inadimplencia e pagamento
	int scorei, scorep;
	if(atraso > 1 || compras <= 0){
		scorei = 0;
	}else if(atraso == 1 && compras > 0){
		scorei = 15;
	}else {
		scorei = 30;
	}
	cout << "Score de inadimplencia = " << scorei << " pontos" << endl;
	
	if(pagamento == "D"){
		scorep = 5;
	}else{
		scorep = 10;
	}
	cout << "Score de forma de pagamento = " << scorep << " pontos" << endl;
	
	return 0;
}

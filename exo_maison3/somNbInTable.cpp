#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	string cont = "O";
	while(cont == "O"){
	cout <<"\n"<<endl;
	cout <<"\t \t \t PROGRAMME PERMETTANT DE CALCULER LA SOMME DES ELEMENTS PRECEDENTE DANS UN TABLEAU"<<endl;
	cout <<"\n"<<endl;

	cout <<"\t \t \t Entrer la taille du tableau : ";
	int taille;
	cin >> taille;
	cout << "\n" << endl;

	vector<double> sommeTableau;
	for(int i = 0; i<taille; i++){
		cout << "\t \t \t entrer la "<<i<<" ième valeur de l'indice numero:"<<i<<" : ";
		int nbre;
		cin >> nbre;
		sommeTableau.push_back(nbre);
		cout << "\n"<< endl;
	}

	for(int i=0; i<taille; i++){
		sommeTableau[i+1] = sommeTableau[i] + sommeTableau[i+1];
		cout << "\n" << endl;
	}

	for(int i = 0; i<taille; i++){
		cout << "\t \t \t la nouvelle valeur de la case numero " <<i<<" est : ";
		cout << sommeTableau[i] << endl;
		cout << "\n"<< endl;
		cin.ignore();
	}
	cout << "\t \t \t VOULEZ CONTINUEZ ? TAPEZ O pour <<oui>> OU N pour <<non>> : ";
	getline(cin,cont);
	cout << "\n" << endl;
	}
return 0;
}

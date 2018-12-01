#include <iostream>
#include <vector>
#include <string>
using namespace std;
/*int fonctionImpair(int i1){
	if(i1 % 2 != 0){
		return i1;
	}
}*/


int main(){
	string cont;
	cont ="O";
	while(cont == "O"){
	cout << "\n" << endl;
	cout << "\t \t \t PROGRAMME QUI PERMET D'IMPRIMER LES ELEMENT DE RANG IMPAIR"<<endl;
	cout << "\n" << endl;

	cout << "\t \t \t Entrer la taille du tableau : ";	
	int taille; 
	cin >> taille;
	cout << "\n" << endl;

	if(taille <=2 ){
		cout << "\t \t \t Désolé vous avez entrez une taille inférieur à 2 "<<endl;
		cout << "\n" <<endl;
	}
	
	int i;
	vector<double> tableauDouble;
	for(int i=0; i<taille; i++){
		cout << "\t \t \t Entrer la valeur de l'indice numero: "<<i<< " : ";
		int nbre;
		cin >> nbre;
		tableauDouble.push_back(nbre);	
		cout << "\n" << endl;
	}

	for(int i = 0; i<taille; i++){
		if(i % 2 != 0){
			cout << "\t \t \t L'indice numero "<<i<<" du tableau est impair et sa valeur est : ";
			cout << tableauDouble[i];
			cout << "\n" << endl;
		}
	}
	cout <<"\t \t \t \t VOULEZ VOUS CONTINUEZ ? TAPEZ O POUR oui ou N POUR non : ";
	cin >> cont;
	cout << "\n" << endl;
	}
return 0;
}

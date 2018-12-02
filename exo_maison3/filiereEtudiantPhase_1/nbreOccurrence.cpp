#include <iostream>
#include <vector>
using namespace std;

int main(){
	cout <<"\n"<<endl;
	cout <<"\t \t \t PROGRAMME PERMETTANT DE CALCULER LE NOMBRE D'OCCURRENCE DANS UN TABLEAU"<<endl;
	cout <<"\n" <<endl;

	cout << "\t \t \t Entrer la taille du tableau : ";
	int  taille;
	cin >> taille;
	cout <<"\n"<<endl;

		
	while(taille<=2){
		cout << "\t \t \t Entrer la taille du tableau : ";
		int  taille;
		cin >> taille;
		cout <<"\n"<<endl;
	}

	int nb;
	vector<double> tableauDouble;
	for(int i=0; i<taille; i++){
		cout << "\t \t \t Entrer la valeur de l'indice : "<<i<<" du tableau : ";
		cin >> nb;
		tableauDouble.push_back(nb);
		cout <<"\n"<<endl;
	}

	int nb1;
	int compt;
	compt = 0;
	for(int i=0; i<taille; i++){
		nb1 = tableauDouble[0];
		if(tableauDouble[i]==nb1){
			compt = compt + 1;
		}
	}
	
	cout << "\t \t \t le nombre d'occurrence du nombre " <<nb1<< " est : " << compt << endl;
	cout << "\n"<<endl;
return 0;
}

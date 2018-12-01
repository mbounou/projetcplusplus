#include <iostream>
#include <string>

using namespace std;

int main(){
	string cont = "O";
	while(cont == "O"){
	cout << "\n" << endl;
	cout << "\t \t \t PROGRAMME PERMETTANT DE CALCULER LE NBRE D'OCCURENCE D'UNE LETTRE DANS UNE PHRASE"<<endl;
	cout << "\n" << endl;

	cout << "\t \t \t Entrer une chaine de caractère : ";
	string chaine("sans string");
	getline(cin, chaine);
	cout  << "\n" << endl;
	cout << chaine << endl;
	
	cout << "\t \t \t Entrer une lettre : ";
	char chaine1;
	cin >> chaine1;
	cout  << "\n" << endl;	
	cout << "\n" << endl;
		
      	double compt = 0;
	int i;
	for(int i=0; i<chaine.size(); i++){
		if(chaine[i] == chaine1){	
			compt = compt + 1;
		}

	}

	cout << "\t \t \t nous avons au total : "<<chaine.size()<<" caractères dans notre phrase"<<endl;
	cout << "\n" << endl;
		
	double frequence = compt/chaine.size();
	cout << "\t \t \t le nombre d'occurence de la lettre : " << chaine1 << " est : " << compt << endl;
	cout << "\n" << endl;
	cout << "\t \t \t et la fréquence d'apparution de la lettre "<<chaine1 <<" est : " <<frequence<<endl;
	cout << "\n"<<endl;

	cout << " \t \t \t VOULEZ VOUS CONTINUEZ? O POUR OUI OU N POUR NON : ";
	cin >> cont;
	cin.ignore();
	cout << "\n"<<endl;
	}
	cout << "\t \t \t MERCI POUR VOTRE VISITE "<<endl;
	cout << "\n" << endl;

return 0;
}

#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <vector>
#include <cctype>
#include <sstream>

using namespace std;

typedef enum{
	masculin,
	feminin
}typeSexe;

typedef enum{
	GBIO,
	MIP,
	GIE,
	GIM
}typeFiliere;

struct  etudiant{
	string nom; 
	string prenom;
	typeSexe  sexe;
	string matricule;
	string dateDeNaissance;
	string lieuDeNaissance;
	typeFiliere option; 
};
struct etudiant etudiant1;



int main(){

	cout << "\n" << endl;
	cout << "\t \t \t \t \t \t MON MENU " << endl;
	cout << "\n" << endl;
	cout << "\t \t \t 1. Programme gérant les Etudiants" << endl;
	cout << "\t \t \t 2. Calcul nombre d'occurence d'une lettre dans une phrase" << endl;
	cout << "\t \t \t 3. Somme des éléments précédents dans un tableau" << endl;
	cout << "\t \t \t 4. Imprime les éléments de rang Impair dans un tableau" << endl;
	cout << "\t \t \t 5. Calcul le nombre d'occurence dans un tableau d'entier" << endl;
	cout << "\n" << endl;

	string cont = "O";
	cout << "\n" << endl;
	while(cont == "O"){

	// faites votre choix
	cout << "\t \t \t Entrer votre choix parmis les choix proposés (1, 2 ,3, 4 ou 5) : ";
	int choix;
	cin >> choix;

if(choix == 1){
	
	cout << "\n" << endl;
	cout << "\t \t \t PROGRAMME PERMETTANT DE GERER LES ETUDIANTS DANS UNE CLASSE : " << endl;
	cout << "\t" << endl;

	ifstream monFichier("etudiant.txt");

	if(monFichier){

		string ligne;

		while(getline(monFichier, ligne)){

			cout << ligne << endl;
		}
	}
	else{
	
		cout <<"Impossible de lire le fichier" << endl;

		cout << "\n" << endl;	
	}
	
	cout << "\n" << endl;
	cout << "\t \t \t Entrer le nombres d'étudiant que vous voulez enregistrez : ";
	int nb;
	cin >> nb;
	cout << "\n" << endl;
	cin.ignore();
	
	int i(0);

	vector<etudiant> tableauEtudiant;
	

	while(i < nb){	

		cout << "\t \t \t entrer le nom : ";
		getline(cin, etudiant1.nom);
		
		cout << "\t \t \t entrer le prenom : ";
		getline(cin, etudiant1.prenom);
				
		cout << "\t \t \t entrer le sexe de l'étudiant (\"M\": pour masculin ou \"F\": pour féminin): ";
		char choix;
		cin >> choix;
		cin.ignore();
	
		switch(choix){

			case 'M':
				etudiant1.sexe = masculin;
				break;	
			case 'F':
				etudiant1.sexe = feminin;
				break;
			default:
				cout << "\t \t \t vous n'avez pas entré un sexe valide " << endl;
		}		
		
		
		cout << "\t \t \t entrer le matricule : ";
		getline(cin, etudiant1.matricule);

		cout << "\t \t \t entrer la filière de l'étudiant(\"GBIO\", \"MIP\", \"GIE\",\"GIM\") : ";
		string choix1;
		cin >> choix1;
		cin.ignore();

	
		if(choix1 == "GBIO"){

			etudiant1.option == GBIO;
		}
		else if(choix1=="MIP"){

			etudiant1.option == MIP; 
		}
		else if(choix1=="GIE"){

			etudiant1.option == GIE;
		}	
		else if(choix1 == "GIM"){

			etudiant1.option == GIM;
		}
	
		
		cout << "\t \t \t entrer la date de naissance : ";
		getline(cin, etudiant1.dateDeNaissance);

		
		cout << "\t \t \t entrer le lieu de naissance : ";
		getline(cin, etudiant1.lieuDeNaissance);


		tableauEtudiant.push_back(etudiant1);
		
		i = i + 1;
	}

		

	//string const monFichier("etudiant.txt", ofstream::app);
	//ofstream monFlux(monFichier.c_str());
	ofstream monFlux; //permet de créer le flux de fichier en mode écriture 

	monFlux.open("etudiant.txt", ofstream::app);

	if(monFlux.is_open()){

		for(int i=0; i<nb; i++){

			if(tableauEtudiant[i].sexe == 0){

				switch(tableauEtudiant[i].option){

					case 0:
			monFlux << tableauEtudiant[i].nom << "   " << 
				tableauEtudiant[i].prenom << "   " << 
			     	"masculin" << "   " << 
				tableauEtudiant[i].matricule << "   " << 
				tableauEtudiant[i].dateDeNaissance << "   "<<  
				tableauEtudiant[i].lieuDeNaissance << "   " <<
				"GBIO" << endl;
						break;

					case 1:			
			monFlux << tableauEtudiant[i].nom << "   " << 
				tableauEtudiant[i].prenom << "   " << 
			     	"masculin" << "   " << 
				tableauEtudiant[i].matricule << "   " << 
				tableauEtudiant[i].dateDeNaissance << "   "<<  
				tableauEtudiant[i].lieuDeNaissance << "   " <<
				"MIP" << endl;
						break;
				
					case 2:
			monFlux << tableauEtudiant[i].nom << "   " << 
				tableauEtudiant[i].prenom << "   " << 
			     	"masculin" << "   " << 
				tableauEtudiant[i].matricule << "   " << 
				tableauEtudiant[i].dateDeNaissance << "   "<<  
				tableauEtudiant[i].lieuDeNaissance << "   " <<
				"GIE" << endl;
						break;
				
					case 3:	
			monFlux << tableauEtudiant[i].nom << "   " << 
				tableauEtudiant[i].prenom << "   " << 
			     	"masculin" << "   " << 
				tableauEtudiant[i].matricule << "   " << 
				tableauEtudiant[i].dateDeNaissance << "   "<<  
				tableauEtudiant[i].lieuDeNaissance << "   " <<
				"GIM" << endl;
						break;
					default:
						cout << "\t \t \t sorry" << endl;
				}
			}	
			else if(tableauEtudiant[i].sexe == 1){

				switch(tableauEtudiant[i].option){

					case 0:	
			monFlux << tableauEtudiant[i].nom << "   " << 
				tableauEtudiant[i].prenom << "   " << 
			     	"feminin" << "   " << 
				tableauEtudiant[i].matricule << "   " << 
				tableauEtudiant[i].dateDeNaissance << "   "<<  
				tableauEtudiant[i].lieuDeNaissance << "   " <<
				"GBIO" << endl;
						break;

					case 1:
			monFlux << tableauEtudiant[i].nom << "   " << 
				tableauEtudiant[i].prenom << "   " << 
			     	"feminin" << "   " << 
				tableauEtudiant[i].matricule << "   " << 
				tableauEtudiant[i].dateDeNaissance << "   "<<  
				tableauEtudiant[i].lieuDeNaissance << "   " << 
				"MIP" << endl;
						break;

					case 2:	
			monFlux << tableauEtudiant[i].nom << "   " << 
				tableauEtudiant[i].prenom << "   " << 
			     	"feminin" << "   " << 
				tableauEtudiant[i].matricule << "   " << 
				tableauEtudiant[i].dateDeNaissance << "   "<<  
				tableauEtudiant[i].lieuDeNaissance << "   " <<
				"GIE" << endl;
						break;

					case 3:
			monFlux << tableauEtudiant[i].nom << "   " << 
				tableauEtudiant[i].prenom << "   " << 
			     	"feminin" << "   " << 
				tableauEtudiant[i].matricule << "   " << 
				tableauEtudiant[i].dateDeNaissance << "   "<<  
				tableauEtudiant[i].lieuDeNaissance << "   " <<
				"GIM" << endl;
						break;

					default:
						cout << "\t \t \t sorry" << endl;
				}
			}	
		}
			
		

	}
	else{

		cout << "Impossible d'ouvrir le fichier en mode écriture"<< endl;

		cout << "\n" << endl;
	}
		
	monFlux.close();
	

	string line,mot;

	ifstream fichier1("etudiant.txt");

	if(fichier1){

		int compG(0), compt=0;
	
		while(getline(fichier1,line)){

			istringstream fichier2(line);

			do{
				fichier2 >> mot;
				

					if(mot == "feminin"){

						compt = compt + 1; //cout << line << endl;

						break;
				
					}
				
					else if(mot == "masculin"){

						compG = compG + 1;

						break;
					}
			
	
			}while(fichier2.good());
		}
			
		cout << "\t \t \t le nombre de fille dans la classe est : ";
		cout << compt << endl;
		cout << "\n" << endl;	
				

		cout << "\t \t \t le nombre de garçon dans la classe est : ";
		cout << compG << endl;
		cout << "\n" << endl;
	

	}
	else{

		cout << "\t \t \t le fichier n'existe pas "<< endl;

		cout << "\n" << endl;
	}
	fichier1.close();

}
else if(choix == 2){
	
	cout << "\n" << endl;
	cout << "\t \t \t PROGRAMME PERMETTANT DE CALCULER LE NBRE D'OCCURENCE D'UNE LETTRE DANS UNE PHRASE"<<endl;
	cout << "\n" << endl;
	cin.ignore();

	cout << "\t \t \t Entrer une chaine de caractère : ";
	string chaine;
	getline(cin, chaine);
	cout  << "\n" << endl;
	
	cout << "\t \t \t Entrer une lettre : ";
	char chaine1;
	cin >> chaine1;
	cout << "\n" << endl;
	cin.ignore();
		
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
}
else if(choix == 3){	

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
}
else if(choix == 4){
	
	cout << "\n" << endl;
	cout << "\t \t \t PROGRAMME QUI PERMET D'IMPRIMER LES ELEMENT DE RANG IMPAIR"<<endl;
	cout << "\n" << endl;

	cout << "\t \t \t Entrer la taille du tableau : ";	
	int taille; 
	cin >> taille;
	cout << "\n" << endl;

	while(taille <=2 ){

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

			cout << tableauDouble[i] << endl;

			cout << "\n" << endl;
		}
	}
}
else if(choix == 5){	

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

	cout << "\n" << endl;

}
else{

	cout << "\t \t \t \t Désolé vous avez entré le mauvais choix";

	cout << "\n \n" << endl;
}

	cout << "\t \t \t Voulez vous continuez? appuyez O pour OUi ou N pour non : ";

	cin >> cont;

	cout << "\n" << endl;

	}

	cout << "\t \t \t \t \t Merci d'avoir testé mon programme ............." << endl;

	cout << "\n" << endl;

return 0;
}

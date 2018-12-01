#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <vector>
#include <cctype>

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

	/*cout << "\n" << endl;
	cout << "\t \t \t Entrer le nombres d'étudiant que vous voulez enregistrez : ";
	int nb;
	cin >> nb;
	cout << "\n" << endl;
	int i(0);
	vector<string> tableauEtudiant;
	
	while(i < nb){	
		cout << "\t \t \t le"<<i<<" ième entré est : ";
		string EtuNum;
		cin >> EtuNum;
		cout << "\n" << endl;
		tableauEtudiant.push_back(EtuNum);
		i = i + 1;
	}	

	//string const monFichier("etudiant.txt", ofstream::app);
	//ofstream monFlux(monFichier.c_str());
	ofstream monFlux; //permet de créer le flux de fichier en mode écriture 
	monFlux.open("etudiant.txt", ofstream::app);
	if(monFlux){
		for(int i=0; i<nb; i++){
			monFlux << tableauEtudiant[i] << endl;
		}
	}
	else{
		cout << "Impossible d'ouvrir le fichier en mode écriture"<< endl;
		cout << "\n" << endl;
	}
		
	monFlux.close();
*/
	
	cout << "\n" << endl;
	cout << "\t \t \t Entrer le nombres d'étudiant que vous voulez enregistrez : ";
	int nb;
	cin >> nb;
	cout << "\n" << endl;
	cin.ignore();
	
	int i(0);
	vector<etudiant> tableauEtudiant;
	

	while(i < nb){	

//		etudiant etudiant1;

		cout << "\t \t \t entrer le nom : ";
		getline(cin, etudiant1.nom);
		
		cout << "\t \t \t entrer le prenom : ";
		getline(cin, etudiant1.prenom);
				
		cout << "\t \t \t entrer le sexe de l'étudiant : ";
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

	//	getline(cin, etudiant1.sexe);

		/*while(etudiant1.sexe != "M" && etudiant1.sexe != "F"){
			cout << "\t \t \t entrer le sexe M pour masculin et F pour féminin : ";
			getline(cin, etudiant1.sexe);
		}*/
		
		
		
		cout << "\t \t \t entrer le matricule : ";
		getline(cin, etudiant1.matricule);

		cout << "\t \t \t entrer la filière de l'étudiant : ";
		string choix1;
		cin >> choix1;
		cin.ignore();
		while(choix1 != "GBIO" && choix1 != "MIP" && choix1 != "GIE" && choix1 !="GIM"){
			cout << "\t \t \t entrer la filière de l'étudiant : ";
			string choix1;
			cin >> choix1;
				
		}
		
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
	if(monFlux){
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
			     	"masculin" << "   " << 
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
		}
	}
	else{
		cout << "Impossible d'ouvrir le fichier en mode écriture"<< endl;
		cout << "\n" << endl;
	}
		
	monFlux.close();

return 0;
}

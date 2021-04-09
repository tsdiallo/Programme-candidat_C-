#include"candidat.h"
Candidat::Candidat(){
    mat="";
    nom="";
    prenom="";
    sexe="";
    parti_politique="";
    fonction="";
    age=0;
}
Candidat::Candidat(string mat, string nom, string prenom, string sexe, string parti_politique, string fonction, int age )
{this-> mat = mat;
this-> nom =nom;
this-> prenom =prenom;
this-> sexe =sexe;
this-> parti_politique = parti_politique;
this-> fonction =fonction;
this-> age =age;
}
Candidat::~Candidat(){
    if(!mat.empty())
        mat.erase();

    if(!nom.empty())
        nom.erase();

    if(!prenom.empty())
        prenom.erase();

    if(!sexe.empty())
        sexe.erase();

    if(!parti_politique.empty())
        parti_politique.erase();

    if(!fonction.empty())
        fonction.erase();

    if(age!=0)
        age=0;
}
void Candidat::setMat(string mat){
    this-> mat=mat;
}

void Candidat::setNom(string nom){
    this-> nom=nom;
}

void Candidat::setPrenom(string prenom){
    this-> prenom=prenom;
}

void Candidat::setSexe(string sexe){
    this-> sexe=sexe;
}

void Candidat::setParti_politique(string parti_politique){
    this-> parti_politique=parti_politique;
}

void Candidat::setFonction(string fonction){
    this-> fonction=fonction;
}
void Candidat::setAge(int age){
    this-> age=age;
}
string Candidat::getMat(){
    return mat;
}

string Candidat::getNom(){
    return nom;
}

string Candidat::getPrenom(){
    return prenom;
}

string Candidat::getSexe(){
    return sexe;
}

string Candidat::getParti_politique(){
    return parti_politique;
}

string Candidat::getFonction(){
    return fonction;
}

int Candidat::getAge(){
    return age;
}

void Candidat::saisie(){
    cout<<"Entrer le matricule  du candidat\t";
    cin>> mat;
    cout<<"Entrer le nom  du candidat\t";
    cin >>nom;
    cout<<"Entrer le prenom du candidat\t";
    cin >>prenom;
    cout<<"Entrer le sexe du candidat\t";
    cin >>sexe;
    cout<<"Entrer la parti politique  du candidat\t";
    cin >>parti_politique;
    cout<<"Entrer la fonction   du candidat\t";
    cin >>fonction;
    cout<<"Entrer l age  du candidat\t";
    cin >>age;
}

void Candidat:: affiche(){
cout<<"le matricule du candidat est " <<mat<<endl;
cout<<"le nom du candidat est " <<nom<<endl;
cout<<"le prenom du candidat est " <<prenom<<endl;
cout<<"le sexe du candidat est " <<sexe<<endl;
cout<<"le parti politique du candidat est " <<parti_politique<<endl;
cout<<"la fonction du candidat est " <<fonction<<endl;
cout<<"l age du candidat est " <<age<<endl;
}

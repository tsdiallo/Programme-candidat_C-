#include<iostream>

using namespace std;

class Candidat{
private:
    string mat, nom, prenom, sexe, parti_politique, fonction;
    int age;
public:
    Candidat();
    Candidat(string, string, string, string, string, string, int);
    ~Candidat();
    void setMat(string);
    void setNom(string);
    void setPrenom(string);
    void setSexe(string);
    void setParti_politique(string);
    void setFonction(string);
    void setAge(int);

    string getMat();
    string getNom();
    string getPrenom();
    string getSexe();
    string getParti_politique();
    string getFonction();

    int getAge();

    void saisie();
    void affiche();
};

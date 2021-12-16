#include<iostream>
#include<list>

using namespace std;

class Repas ;
class Entraineur;
class Compitition ;
class Elments;

// -----Animal-----------
class Animal{

protected:
string nom;
int age;
string genre;

void setAtta(string nom1 , int age1 ,string genre1 ){
nom=nom1; age=age1; genre=genre1;
}

};
//--------chat----------
class Chat : public Animal{

private:
string type ;
public:

void sauter();

};
//--------------Race-------
class Race {
    protected:
    string specificite ;
    protected:
   void israceHybride();
};
//----------chien------------
class Chien : public Animal , public Race{
private:
list<Entraineur> A ;

string taille;
public:
void setlist_Entraineur(list<Entraineur> A){
    this->A = A ;
}
void ischass3();


};
//----------Entraineur--------
class Entraineur {
    private:
    list<Chien> B ;
    string nom ;
    string description ;
    void setlist_Chien( list<Chien> B){
    this->B = B ;
}

};
//---------Compitition----------
class Compitition {
    Entraineur E;
    Chien C;

    private:

    string date ;
    string nom ;
    public:
    int ordre ;
    void setAtta(string date, string nom,int ordre){
        this->date = date;
        this->nom = nom;
        this->ordre = ordre;
    }
};

class Repas{
    Chat A;
   
    private:
    string nom ;
   string heure;
   string description ;
   Repas(){
       list<Elments> E;
   }
   Repas(string nom, string heure,string description) : nom(nom), heure(heure), description(description){}
    //// récupère l'instance dans l'instance Repas car c'est une relation de composition
    ~Repas(){
    
    }

   public:
   void setAtta(string nom , string heure , string description){
       this->nom = nom;
       this->heure = heure;
       this->description = description;
   }
};


class Elments{
    private:
string nom ;
string type ;
  public:
 void setAtta(string nom , string type){
     this->nom = nom;
     this->type = type;
 }

};

int main(){

Chien misho ;
list<Entraineur>  mohammed ;
misho.setlist_Entraineur(mohammed);


    return 0;
}


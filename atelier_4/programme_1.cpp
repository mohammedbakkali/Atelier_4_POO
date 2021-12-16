#include<iostream>
#include<math.h>

using namespace std;

class complexe{
    public:
  float rel;
  float img;
   public:
   complexe(){}
   complexe(float a, float b);
  float get_img() ;
  float get_rel() ;
  void display();
  complexe operator +(complexe &z);
  complexe operator -(complexe &z);
  complexe operator *(complexe &z);
  complexe operator /(complexe &z);

};

void complexe::display(){ cout<<rel<<"+i"<<img<<endl; }

complexe::complexe(float a, float b):rel(a),img(b){}

float complexe::get_img(){
    return img ;
}

float complexe::get_rel(){
    return rel ;
}
// ------- les operateurs -----------------
                 // + add
complexe complexe::operator +(complexe &z){
    complexe s;
    s.img=img+z.img;
    s.rel=rel+z.rel;
    return s;
}
                 // -soustraction
complexe complexe::operator -(complexe &z){
    complexe s;
    s.img=img-z.img;
    s.rel=rel-z.rel;
    return s;
}


                // * produit
complexe complexe ::operator *(complexe &z){
 complexe p ;
 p.rel=rel*z.rel-img*z.img;
 p.img=rel*z.img+z.rel*img ;
 return p;
}                

             // * division
complexe  complexe::operator /(complexe &z){
    complexe d;
    d.rel=(rel*z.rel + img*z.img)/(pow(z.rel,2)+pow(z.img,2));
    d.img=(img*z.rel-rel*z.img)/(pow(z.rel,2)+pow(z.img,2));
}

int main(){
complexe z1(1,2);
complexe z2(4,2);
complexe z=z1*z2;

z.display();

    return 0;
}
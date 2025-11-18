#include "up_down_to_verti.h"
//ctor
up_down_to_verti::up_down_to_verti(){}//dtor
up_down_to_verti::~up_down_to_verti(){}//copy ctor
up_down_to_verti::up_down_to_verti(const up_down_to_verti& other){}
// handle self assignment//assignment operator
up_down_to_verti& up_down_to_verti::operator=(const up_down_to_verti& rhs){if (this == &rhs) return *this; return *this;}


string up_down_to_verti::vert_nmb(string hor,int rowsx,int ssnumbers){

    //110000
    //we want
    //1
    //1
    //...
    cout<<"i receive a string of " << hor <<"\n";

    //int x=0;
   char ck;
    string sk;

    for(int i=0;i<=rowsx;i++){
       sk+=hor.at(i);
    }

    cout<<"outputting " << sk <<"\n";
return sk;



}

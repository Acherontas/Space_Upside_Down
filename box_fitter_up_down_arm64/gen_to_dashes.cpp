#include "gen_to_dashes.h"
//ctor
gen_to_dashes::gen_to_dashes(){}
 //dtor
gen_to_dashes::~gen_to_dashes(){}
//copy ctor
gen_to_dashes::gen_to_dashes(const gen_to_dashes& other){}
// handle self assignment//assignment operator
gen_to_dashes& gen_to_dashes::operator=(const gen_to_dashes& rhs){if (this == &rhs) return *this; return *this;}


int gen_to_dashes::num_to_dash(string mlk,int rowsx){
    char ck;
    int lk;
    int per_line_isia=0;
    int per_line_plagia=0;
    int count_isia=0;
    int count_plagia=0;
    int mk=0;
    for(int i=0;i<=rowsx-1;i++){
        ck=mlk.at(i);
        lk=stoi(&ck);
        mk=0;
        //cout<<"will use number " << lk <<"\n";
        if(lk>0){
                        cout<<" ";
                        while(mk<=lk-1){cout<<"|"; mk+=1; per_line_isia+=1;count_isia+=1;}
                        cout<<" ";
                }
        if(lk==0){cout<<" /"; per_line_plagia+=1;count_plagia+=1;}
        cout<<" ";
        A:;
    }
    isia+=count_isia;
    plagia+=count_plagia;
    cout<<"per line isia " << per_line_isia <<" ";
    cout<<"per line plagia " << per_line_plagia <<"\n";
    ntd_isia+=to_string(per_line_isia);
    ntd_plagia+=to_string(per_line_plagia);

return 0;
}

int gen_to_dashes::num_to_dash_zwei(string mlk,int rowsx){
    char ck;
    int lk;
    int per_line_isia=0;
    int per_line_plagia=0;
    int count_isia=0;
    int count_plagia=0;
    int mk=0;
    cout<<"i send u " << mlk <<"\n";
    for(int i=0;i<=mlk.size()-1;i++){
        ck=mlk.at(i);
        lk=stoi(&ck);
        mk=0;
        //cout<<"will use number " << lk <<"\n";
        if(lk>0){
                        cout<<" ";
                        while(mk<=lk-1){cout<<"|"; mk+=1; per_line_isia+=1;count_isia+=1; }
                        cout<<" ";
                }

        if(lk==0){cout<<" /"; per_line_plagia+=1; count_plagia+=1; }
        cout<<" ";
    }
    isia+=count_isia;
    plagia+=count_plagia;
    cout<<"per line isia " << per_line_isia <<" ";
    cout<<"per line plagia " << per_line_plagia <<"\n";
    ntdz_isia+=to_string(per_line_isia);
    ntdz_plagia+=to_string(per_line_plagia);

return 0;
}

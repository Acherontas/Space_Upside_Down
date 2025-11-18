#include "up_down.h"
//ctor
up_down::up_down(){}
//dtor
up_down::~up_down(){}
//copy ctor
up_down::up_down(const up_down& other){}
// handle self assignment//assignment operator
up_down& up_down::operator=(const up_down& rhs){if (this == &rhs) return *this; return *this;}


string up_down::generate_up_down(int specific_number,int rowsx,int log,int max_lmi){
    mlk.clear();
    int arithmos=specific_number;
    int x=1;
    float dr;
    dr=arithmos/rowsx;
    if(log==1){cout<<arithmos << " / " << rowsx <<" ::== " << dr <<"\n";}
    double fractpart,intpart;
    fractpart=modf(dr,&intpart);
    if(intpart==0){intpart+=1;}
    if(log==1){cout<<"intpart " << intpart <<"\n";}
    int arx[rowsx];  //4 arithmoi 9 grammes ara 9 fills
    int xr=0;
    int ph=0;
    //filling the table with the stable of dr the intpart
    if(log==1){cout<<"-----------------------------\n";}
    for(int i=0;i<=rowsx-1;i++){
        arx[i]=intpart;
        xr+=intpart;
        if(log==1){cout<<"@i " << i << " with xr " << xr <<"\n";}
        if(xr>arithmos){arx[i]=0;}
    }
    if(log==1){cout<<"-----------------------------\n";
    cout<<"\n";
    cout<<"initial filling\n";}
    for(int i=0;i<=rowsx-1;i++){
                                    if(log==1){cout<<arx[i] << "\n";}
                               }
    if(log==1){cout<<"\n";
    cout<<"of " << arithmos << " evala " << xr <<"\n";}
    if(ph==0){
        int xof;
        xof=arithmos-xr;
        if(log==1){cout<<arithmos << " - " << xr << " ::== " << xof <<"\n";}
        if(xof>0){
                for(int i=0;i<=xof-1;i++){
                                            arx[i]=arx[i]+1;
                                         }
        if(log==1){cout<<"final tbl\n";}
                for(int i=0;i<=rowsx-1;i++){
                                           if(log==1){ cout<<"@i " << i << " " << arx[i] <<"\n";}
                                          }
        }
    }

    for(int i=0;i<=rowsx-1;i++){
      mlk+=to_string(arx[i]);
    }

if(log==1){cout<<"returning up down string to main as ::== " << mlk <<"\n";}
return mlk;
}

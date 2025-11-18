#include <iostream>
#include "math.h"
#include <iomanip>
#include "up_down.h"
#include "gen_to_dashes.h"
#include "up_down_to_verti.h"
#include <vector>
using namespace std;

int main(int argc,char** argv)
{
    up_down *updn=new up_down();
    int number=0;
    cout<<"enter number rows and logger 0 or 1\n";
    cout<<"enter number\n";
    number=stoi(argv[1]);
    string snumber;
    int rowsx=0;
    rowsx=stoi(argv[2]);
    int log=0;
    log=stoi(argv[3]);
    snumber+=to_string(number);
    char ck;
    int lk;
    string iko[snumber.size()];
    int iko_counter=0;
    cout<<"--sending ur number to generator each line in a number represantion \n";
    for(int i=0;i<=snumber.size()-1;i++){
        if(log==1){cout<<"----using number " << snumber.at(i) <<" ------\n";}
        ck=snumber.at(i);
        lk=stoi(&ck);
        iko[i]=updn->generate_up_down(lk,rowsx,log,snumber.size()); //fills the string with numbers of each number
        iko_counter+=1;
        if(log==1){cout<<"\n";}
    }

    cout<<"----- the iko table \n";
    for(int i=0;i<=iko_counter-1;i++){cout<<i << " " << iko[i] <<"\n";}
    cout<<"----- the iko table end \n";

    cout<<"\n";
    int xli=0;
    cout<<"--generate the dashes for each row which is a line \n";
    cout<<"N      " << "" << "Row \n";
    gen_to_dashes *gtd=new gen_to_dashes();
    for(int i=0;i<=snumber.size()-1;i++){
     cout<< snumber.at(i) << " ::== " << iko[i] <<" ";
     gtd->num_to_dash(iko[i],rowsx);
     cout<<"\n";
    }
    cout<<"count isia " << gtd->isia <<"\n";
    cout<<"count plagia " <<gtd->plagia<<"\n";
    cout<<"\n";
    cout<<"reversing the table to match the other similar projects\n";
    struct virt_tual {
                        int id;
                        string arr[1000];
                        };

    struct virt_tual vtr[snumber.size()+5];
//int arr[1000];
    char csk; int lck;
    int y=0;
    int i=0;
    int ct=0;
    for(;;){
        if(log==1){cout<<"using y " << y<<"\n";}
        vtr[y].id=y;
        while(i<=snumber.size()-1){
            if(log==1){cout<<iko[i][y] << " ";}
            csk=iko[i][y];
            //lck=stoi(&csk);
            vtr[y].arr[y]+=csk;
            i+=1;
        }
            if(log==1){cout<<"\n";}
            if(log==1){cout<<"leaving with " << i << " and " << y <<"\n";}
            i=0;
            y+=1;
    if(y>=rowsx){break;}
    }
    for(int i=0;i<=snumber.size()-1;i++){
        cout<<snumber.at(i) << " ";
    }
    cout<<"\n";
    cout<<"--------------------------------------\n";
    //for(int i=0;i<=rowsx-1;i++){
      //  cout<<vtr[i].id << " with values " << vtr[i].arr[i] <<" \n";
    //}

    y=0;
    i=0;
    int cat=0;
    for(;;){
        for(;;){
            cout<<vtr[i].arr[i][y] <<" ";
            y+=1;
            if(y>snumber.size()-1){break;}
        }
        cat+=1;
        cout<<"\n";
        i+=1;
        y=0;
        if(i>=rowsx){break;}
    }


    cout<<"exiting with counter of  "<< cat <<"\n";

    gen_to_dashes *gtdd=new gen_to_dashes();
    for(int i=0;i<=snumber.size()-1;i++){
     cout<< snumber.at(i) << " ::== " << vtr[i].arr[i] <<" ";
     gtdd->num_to_dash(iko[i],rowsx);
     cout<<"\n";
    }
    cout<<"count isia " << gtdd->isia <<"\n";
    cout<<"count plagia " <<gtdd->plagia<<"\n";
    cout<<"\n";


return 0;
}





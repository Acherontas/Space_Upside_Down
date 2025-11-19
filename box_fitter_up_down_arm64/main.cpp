#include <iostream>
#include "math.h"
#include <iomanip>
#include "up_down.h"
#include "gen_to_dashes.h"
#include "up_down_to_verti.h"
#include <vector>
#include <thread>
#include "rever_table.h"
#include "virttual.h"
#include "sum_cdi.h"
using namespace std;

int main(int argc,char** argv)
{
    up_down *updn=new up_down();
    int number=0;
    cout<<"enter number,rows,logger 0 or 1, and timer value\n";
    cout<<"enter number\n";
    number=stoi(argv[1]);
    string snumber;
    int rowsx=0;
    rowsx=stoi(argv[2]);
    int log=0;
    log=stoi(argv[3]);
    snumber+=to_string(number);
    int timerpreci;
    timerpreci=stoi(argv[4]);
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
        std::this_thread::sleep_for(std::chrono::milliseconds(timerpreci));
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
     std::this_thread::sleep_for(std::chrono::milliseconds(timerpreci));
    }
    cout<<"count isia " << gtd->isia <<"\n";
    cout<<"count plagia " <<gtd->plagia<<"\n";
    cout<<"Result set \n";
    sum_cdi *smcd=new sum_cdi();
    long long int ntis;
    long long int ntpl;
    ntis=stoll(gtd->ntd_isia);
    ntpl=stoll(gtd->ntd_plagia);
    long long int resis;
    long long int respl;
    cout<<"isia number " << gtd->ntd_isia <<"\n";
    resis=smcd->cdis(ntis,1);
    cout<<"plagia number " << gtd->ntd_plagia<<"\n";
    respl=smcd->cdis(ntpl,1);
    cout<<"\n";
    cout<<"reversing the table to match the other similar projects\n";
    /*struct virt_tual {
                        int id;
                        string arr[1000];
                        };

    struct virt_tual vtr[snumber.size()+5];*/



    rever_table *rtbl=new rever_table();
    int id[snumber.size()+5];
    string arr[1000];
    rtbl->conve_rtit(iko,id,arr,snumber.size()-1,log,rowsx,timerpreci);
    cout<<"\n";
    cout<<"--------------------------------------\n";
    //for(int i=0;i<=rowsx-1;i++){
      //  cout<<vtr[i].id << " with values " << vtr[i].arr[i] <<" \n";
    //}











return 0;
}





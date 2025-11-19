#include "rever_table.h"
#include "virttual.h"
#include "gen_to_dashes.h"
#include "sum_cdi.h"
#include <thread>

//ctor
rever_table::rever_table(){}
//dtor
rever_table::~rever_table(){}
//copy ctor
rever_table::rever_table(const rever_table& other){}
// handle self assignment//assignment operator
rever_table& rever_table::operator=(const rever_table& rhs){if (this == &rhs) return *this; return *this;}

int rever_table::conve_rtit(string* iko_string, int* id,string* arr,int snumber,int log,int rowsx,int timers){
    cout<<"\n";
    char csk; int lck;
    int y=0;
    int i=0;
    int ct=0;
    for(;;){
        if(log==1){cout<<"using y " << y<<"\n";}
        //vt[y].id=y;
        id[y]=y;
        while(i<=snumber){
            if(log==1){
                        cout<<iko_string[i][y] << " ";
                      }
            csk=iko_string[i][y];
            //lck=stoi(&csk);
            //vt[y].arr[y]+=csk;
            arr[y]+=csk;
            i+=1;
        }
            if(log==1){cout<<"\n";}
            if(log==1){cout<<"leaving with " << i << " and " << y <<"\n";}
            i=0;
            y+=1;
    if(y>=rowsx){break;}
    }
    y=0;
    i=0;
    int cat=0;
    for(;;){
        for(;;){
            cout<<arr[i][y] << " ";
            //cout<<vtr[i].arr[i][y] <<" ";
            y+=1;
            if(y>snumber){break;}
        }
        cat+=1;
        cout<<"\n";
        i+=1;
        y=0;
        if(i>=rowsx){break;}
    }
    cout<<"exiting with counter of  "<< cat <<"\n";
    gen_to_dashes *gtdd=new gen_to_dashes();
    for(int i=0;i<=cat-1;i++){
     //cout<<  vtr[i].arr[i] <<" ";
     cout<<arr[i] << " " ;
     //gtdd->num_to_dash_zwei(vtr[i].arr[i],rowsx);
     gtdd->num_to_dash_zwei(arr[i],rowsx);
     cout<<"\n";
     std::this_thread::sleep_for(std::chrono::milliseconds(timers));
    }
    cout<<"\n";
    cout<<"count isia " << gtdd->isia <<"\n";
    cout<<"count plagia " <<gtdd->plagia<<"\n";
    cout<<"Result set \n";
    sum_cdi *smcd=new sum_cdi();
    long long int ntis;
    long long int ntpl;
    ntis=stoll(gtdd->ntdz_isia);
    ntpl=stoll(gtdd->ntdz_plagia);
    long long int resis;
    long long int respl;
    cout<<"isia number " << gtdd->ntdz_isia <<"\n";
    resis=smcd->cdis(ntis,1);
    cout<<"plagia number " << gtdd->ntdz_plagia<<"\n";
    respl=smcd->cdis(ntpl,1);
    cout<<"\n";
    cout<<"\n";
   return 0;
}

#ifndef REVER_TABLE_H
#define REVER_TABLE_H
#include <iostream>
#include <string>
using namespace std;

class rever_table
{
    public:
        rever_table();
        virtual ~rever_table();
        rever_table(const rever_table& other);
        rever_table& operator=(const rever_table& other);


        int conve_rtit(string* iko_string, int* id,string* arr,int snumber,int log,int rowsx,int timers);

    protected:

    private:
};

#endif // REVER_TABLE_H

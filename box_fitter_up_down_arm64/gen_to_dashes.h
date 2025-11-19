#ifndef GEN_TO_DASHES_H
#define GEN_TO_DASHES_H
#include <iostream>
#include <iomanip>
#include "math.h"
#include <string>
using namespace std;

class gen_to_dashes
{
    public:
        gen_to_dashes();
        virtual ~gen_to_dashes();
        gen_to_dashes(const gen_to_dashes& other);
        gen_to_dashes& operator=(const gen_to_dashes& other);
        int isia=0;
        int plagia=0;
        int num_to_dash(string mlk,int rowsx);
        int num_to_dash_zwei(string mlk, int rowsx);
        string ntd_isia;
        string ntd_plagia;
        string ntdz_isia;
        string ntdz_plagia;

    protected:

    private:
};

#endif // GEN_TO_DASHES_H

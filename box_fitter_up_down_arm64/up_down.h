#ifndef UP_DOWN_H
#define UP_DOWN_H
#include <iostream>
#include <iomanip>
#include "math.h"
#include <string>
using namespace std;

class up_down
{
    public:
        up_down();
        virtual ~up_down();
        up_down(const up_down& other);
        up_down& operator=(const up_down& other);
        string mlk;
        string generate_up_down(int specific_number,int rowsx,int log,int max_lmi);

    protected:

    private:
};

#endif // UP_DOWN_H

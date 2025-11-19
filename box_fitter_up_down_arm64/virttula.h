#ifndef VIRTTULA_H
#define VIRTTULA_H
#include <iostream>
#include <string>
using namespace std;

class virttula
{
    public:
        virttula();
        virtual ~virttula();
        virttula(const virttula& other);
        virttula& operator=(const virttula& other);


    protected:

    private:
};

#endif // VIRTTULA_H

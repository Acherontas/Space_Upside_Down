#ifndef VIRTTUAL_H
#define VIRTTUAL_H
#include <string>
using namespace std;

class virttual
{
    public:
        virttual();
        virtual ~virttual();
        virttual(const virttual& other);
        virttual& operator=(const virttual& other);

              struct virt_tual {
                        int id;
                        string arr[1000];
                        };

    protected:

    private:
};

#endif // VIRTTUAL_H

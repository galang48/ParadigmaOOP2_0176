#include <iostream>
using namespace std;

class seseorang 
{
public:
    // pure virtual function
    virtual void pesan() = 0;

    //// virtual functionn biasa
    //virtual void pesan()
    //{
    //    cout << "Pesan dari seseorang" << endl;
    //}
};

class joko : public seseorang 
{
public:

};
int main()
{
    
}



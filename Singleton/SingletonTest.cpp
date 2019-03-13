#include "Database.h"
using namespace std;
int main(int argc, const char * argv[]) {

     Database *d;
    d = d->getInstance();
    cout << d << endl;

    //Testing if it works
	Database *d1;
    d1 = d1->getInstance();
    cout << d1<< endl;


    return 0;
}

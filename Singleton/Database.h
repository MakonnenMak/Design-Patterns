using namespace std;
#include <iostream>;
class Database {

public:
    static Database* getInstance() {

    return (!d) ?
        d = new Database : 
        d;
    }

private:
    Database() { cout << "Database created\n"; }

    Database(const Database&);
    Database& operator=(const Database&);

    static Database *d;
};

Database* Database::d= nullptr;

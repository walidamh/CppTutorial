#include "include/database.h"

Database::Database() {};
Database::~Database() {};

// write into a file
void Database::write(vector<vector<string>> mainList_)
{
    ofstream db;
    db.open("db/lists.sl");

    // write the list
    if (db.is_open())
    {
        for (unsigned int i = 0; i < mainList_.size(); i++)              // all users list
        {
            for (unsigned int j = 0; j < mainList_[i].size(); j++ )     // one specific user list
            {
                if ( j == 0 )
                {
                    db << "#" << mainList_[i][j] << endl; // username
                }
                else
                {
                    db << mainList_[i][j] << endl;         //items
                }
            }
            db << "%" << endl;                             // end of user's items
        }
    }
    else
    {
        cout << "File cannot be oppened for writing." << endl;
    }
    db.close();
}


// read from a file 
vector<vector<string>> Database::read()
{
    string line;
    vector<string> userList;

    ifstream db;
    db.open("db/lists.sl");

    // read the list
    if ( db.is_open() )
    {
        while ( getline(db, line, '\n') )
        {
            switch (line.front())
            {
            case '#':
                cout << "Found a hashtage: " << line << endl;
                line.erase(line.begin());
                userList.push_back(line);
                break;
            case '%':
                cout << "Found a percentage: " << line << endl;
                mainList.push_back(userList);
                userList.clear();
                break;
            default:
                cout << "found an item: " << line << endl;
                userList.push_back(line);   
                break;
            }
        }
    }
    else
    {
        cout << "File cannot be oppened for reading." << endl;
    }
    db.close();

    return mainList;
}





// header file

#pragma once

#include <iostream>
#include <string>
#include <vector>

#include <fstream>


using namespace std;



class Database 
{
    public:

        // member variables
        vector<vector<string>> mainList;
        string name;

        // Constructor & Destructor
        Database();
        ~Database();

        // member methods
        void write(vector<vector<string>> mainList_);
        vector<vector<string>> read();

    protected:
        
    private:
    

};



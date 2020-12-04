// header file

#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;



class List 
{
    public:

        // member variables
        vector<string> list;
        string name;

        vector<vector<string>> mainList;

        int currentUsrIdx;

        // Constructor & Destructor
        List();
        ~List();

        // member methods
        void print_menu();
        void print_list();
        void append_item();
        void delete_item();

        //
        bool find_userList();

        //
        void save_list();

    protected:
        
    private:
    

};



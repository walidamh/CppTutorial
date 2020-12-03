#include "include/List.h"

List::List() {}

List::~List() {}

void List::print_menu()
{
    unsigned int choice;
    cout << "****************\n";
    cout << "1- Print list.\n";
    cout << "2- Add to list.\n";
    cout << "3- Delete from list.\n";
    cout << "4- Quit.\n";
    cout << "Enter your choice ( 0 < int < 5 ) and press return: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        print_list();
        break;
    case 2:
        append_item();
        break;
    case 3:
        delete_item();
        break;
    case 4:
        return;
        break;
    default:
        cout << "Sorry, choice not implemented yet\n";
        break;
    }

}

void List::append_item()
{
    cout << "append_item function. \n";
    
    cout << "Type in an item, and press enter: ";
    string item;
    cin >> item;

    // push item back to the bootom of the vector list
    list.push_back(item);
    cout << "Successfully added item." << endl; 

    // clear any type of input in the console buffer
    cin.clear();

    // print output
    print_menu();

    //

}

void List::delete_item()
{
    cout << "Delete item function." << endl;

    //
    cout << "Select an item to delete" << endl;
    if (list.size())
    {
        for (unsigned int i = 0; i < list.size(); i++)
        {
            cout << i << ": " << list[i] << endl;
        }
        int choiceNbr;
        cin >> choiceNbr;
        list.erase(list.begin()+choiceNbr);
    }
    else
    {
        cout << "List is empty, no item to delete." << endl; 
    }

    //
    print_menu();
    
}

void List::print_list()
{
    cout << "print_list function. \n";

    for (unsigned int i = 0; i < list.size(); i++)
    {
        cout << "* " << list[i] << endl;
    }

    //
    cout << "M- Menu." << endl;
    char choice;
    cin >> choice;

    if (choice == 'M' || choice == 'm' )
        print_menu();
    else
    {
        cout << "Invalid Choice. Quitting.." << endl;
    }
    
}

// find user
void List::find_userList()
{
    bool userFound = false;
    cout << "find_userList function. \n";
    cout << "*** Welcome " << name << " ***" << endl;

    for (unsigned int i = 0; i < mainList.size(); i++)
    {
        cout << mainList[i][0] << endl;
        if ( mainList[i][0] == name )
        {
            cout << "user has been found: " << mainList[i][0] << endl;
            list = mainList[i];
            userFound = true;
            break;
        }
    }
}
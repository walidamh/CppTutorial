#include "include/List.h"
#include "include/database.h"

// main function
int main(int arg_count, char *args[])
{
    List list1;
    Database db1;

    if (arg_count > 1)
    {
        list1.name = string(args[1]);
        list1.mainList = db1.read();
        list1.find_userList();
        list1.print_menu();
        db1.write(list1.mainList);
    }
    else
    {
        cout << "Argcount is: " << arg_count << endl;
        cout << "Username not supplied.. exiting the program" << endl;
    }
    return 0;
}





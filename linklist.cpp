#include <iostream>
#include "llist.hpp"

int main() {

    struct Person *head = NULL ;
    struct Person *tail = NULL ;

    {
        struct Person *fdata;
        if((fdata = find(head,"Kunal","Shrivastav"))) {
            cout << fdata->last_name << ", " << fdata->first_name << ", " << fdata-> age << ", " << (fdata->gender?"female":"male") << "\n";
        } 
        else {
            cout << "1 Not found.\n";
            struct Person *data = new struct Person ;
            data->first_name = "Kunal";
            data->last_name = "Shrivastav";
            data->age = 18 ;
            data->gender = MALE ;
            add(&head, data) ;
        }
    }
    
    {
        struct Person *data = new struct Person ;
        data->first_name = "Vijay";
        data->last_name = "Shrivastav";
        data->age = 54 ;
        data->gender = MALE ;
        add(&head, data);
    }
    print(&head);
    {
        struct Person *data = new struct Person ;
        data->first_name = "Tushar";
        data->last_name = "Shrivastav";
        data->age = 19 ;
        data->gender = MALE ;
        struct Person *fdata;
        if((fdata = find(head,"Kunal","Shrivastav"))) {
        //    cout << fdata ->last_name << ", " << fdata->first_name << ", " << fdata-> age << ", " << (fdata->gender?"female":"male") << "\n";
            insert(fdata, data);
        } 
        else {
            cout << "2 Not found.\n";
            add(&head, data);
        }
    }
    print(&head);

    {
        struct Person *data = new struct Person ;
        data->first_name = "Dipti";
        data->last_name = "Shrivastav";
        data->age = 52 ;
        data->gender = FEMALE ;
        add(&head, data);
    }

    {
        struct Person *data = new struct Person ;
        data->first_name = "Shahmun";
        data->last_name = "Jafri";
        data->age = 19 ;
        data->gender = MALE ;
        add(&head, data);
    }

    print(&head);
    {
        struct Person *fdata;
        if((fdata = find(head,"Tushar","Shrivastav"))) {
            cout << "Removing...." << fdata->last_name << ", " << fdata->first_name 
                        << ", " << fdata-> age << ", " << (fdata->gender?"female":"male") << "\n";
            remove(&head, fdata);
            
        } 
    }
    
    print(&head);

}


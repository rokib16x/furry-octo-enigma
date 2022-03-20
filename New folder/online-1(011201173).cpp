#include<iostream>

using namespace std;

struct node
{
    int data;
    struct node* next;
};

struct single_linked_list
{
    node *head;

    single_linked_list()
    {
        head = NULL;
        //head->data = 0;
        //head->next = nullptr;
    }

    node* search_in_list(int val)
    {
        node *temp = head;
        while(temp->next!=NULL)
        {
            if(temp->data==val) return temp;
            else temp = temp->next;
        }
        return NULL;
    }

    void insert_first(int val)
    {

        //1st step
        node *temp = new node;
        temp->data = val;
        //2nd step
        temp->next = head;
        //3rd step
        head = temp;

    }

    void insert_last(int val)
    {
        //1st step
        node *temp = new node;
        temp->data = val;

        //2nd step
        node *last = head;
        while(last->next!=NULL)
        {
            last = last->next;
        }

        //3rd step
        last->next = temp;

        //4th step
        temp->next = NULL;

    }

    void insert_middle(int new_val, int prev_val)
    {
        //1st step
        node *temp = new node;
        temp->data = new_val;

        //2nd step
        node *prev = head;
        while(prev->data!=prev_val)
        {
            prev = prev->next;
        }

        //3rd step
        temp->next = prev->next;

        //4th step
        prev->next = temp;
    }

    void insert_in_order(int val)
     {
         node *current = head;
         node *temp = new node;
         temp->data =val;
         temp->next =NULL;
       if( current->data > temp->data)
            {
                insert_first(val);
                //return;
            }
            else{
         while(current->next !=NULL && current->next->data < temp->data)
        {
            current = current->next;
        }
            temp->next = current->next;
            current->next = temp;

        }

    }

    void delete_first()
    {
        if(head == NULL)
            return;
        else{
        //1st step
        node* curr = head;
        //2nd step
        head = head->next;

        //3rd step
        delete(curr);
        }
    }
    void delete_last()
    {

         if(head == NULL) return;
        node *curr= head;
        node *temp = NULL;

        if(head->next==NULL){
            head =NULL;
            delete(curr);
            return;
        }
        while(curr->next != NULL)
        {
            temp = curr;
            curr= curr->next;
        }
        temp->next = NULL;
        delete(curr);

    }
    void delete_middle(int val)
    {
        node *curr = head;
        node *temp = NULL;
        while(curr->next!=NULL){
            if(curr->data==val){
                break;
            }
            temp = curr;
             curr= curr->next;
        }
        if(head == NULL) return;
        if(head->next==NULL){
            head = NULL;
            delete(curr);
            return;
        }
        else
            temp->next = curr->next;
            delete(curr);

    }

    void show_list()
    {
        node *temp = head;
        while(temp!=NULL)
        {
            cout << temp->data << ", ";
            temp = temp->next;
        }
        cout << endl;
    }


};

int main()
{
    single_linked_list linked_list;
    int ch;
    int val, prev_val;
    node *y = new node;

    while(1)
    {
        cout << "---MENU---" << endl;
        cout << "1. Insert First" << endl;
        cout << "2. Show All " << endl;
        cout << "3. Search " << endl;
        cout << "4. Insert Last " << endl;
        cout << "5. Insert Middle " << endl;
        cout << "6. Insert In Order " << endl;
        cout << "7. DELETE FIRST " << endl;
        cout<<  "8. Delete Last" << endl;
        cout<< " 9. Delete Item" << endl;
        cout << "10. Exit " << endl;

        cin >> ch;

        switch(ch)
        {
        case 1:
            cout << "Enter the value of data: ";

            cin >> val;
            linked_list.insert_first(val);
            break;

        case 2:
            linked_list.show_list();
            break;

        case 3:
            cout << "Enter a value to search in the list: ";

            cin >> val;

            y = linked_list.search_in_list(val);
            if(y!=NULL)
            {
                cout << "Node found!" << endl;
                cout << y->data << endl;
            }
            else
            {
                cout << "Node not found!" << endl;
            }
            break;

        case 4:
            cout << "Enter the value of data: ";
            cin >> val;
            linked_list.insert_last(val);
            break;

        case 5:
            cout << "Enter the new value of data: ";
            cin >> val;
            cout << "Enter the prev value of data: ";
            cin >> prev_val;
            linked_list.insert_middle(val, prev_val);
            break;

        case 6:
            cout << "Enter the value of data: ";
            cin >> val;
            linked_list.insert_in_order(val);
            break;

        case 7:
            cout<< "Delete the first node..";
            linked_list.delete_first();
            linked_list.show_list();
            break;
        case 8:
            cout<< "Delete the last node...";
            linked_list.delete_last();
            linked_list.show_list();
            break;

        case 9:
            cout<< "Enter the node to delete"<< endl;
            cin>> val;
            linked_list.delete_middle(val);
            linked_list.show_list();
            break;

        case 10:
            return 0;
            break;



        default:
            cout << "Wrong input!" << endl;
        }
    }

    return 0;
}

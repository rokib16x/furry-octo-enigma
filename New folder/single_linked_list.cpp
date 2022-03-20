#include<bits/stdc++.h>
using namespace std;


struct node{

int data;
 node *next;

};

struct single_linked_list
{
    node *head;
    single_linked_list()
    {
        head = new node;
        head->data = 0;
        head->next = NULL;

    }
    void insert_first(int val)
    {
        //1st step
        node *temp= new node;
        temp->data = val;

        //2nd step

        temp->next= head;
        //3rd step
        head = temp;


    }
    void insert_last(int val)
    {
        //1st step
        node *temp = new node;
        temp->data = val;
        //2nd setp
        node *last = head;
        while(last->next!= NULL)
        {

            last= last->next;
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
        while(prev->data!= prev_val)
        {

            prev = prev->next;

        }

        //3rd step
        temp->next = prev->next;

        //4th step
        prev->next = temp;

    }
    void show_list()
    {
        node *temp = head;
        while(temp!= NULL)
        {

            cout<<temp->data<<", ";
            temp = temp->next;
        }
        cout<<endl;
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




};

int main()
{
    int ch;
    int val;
    int prev_val;
    node *y= new node;
    single_linked_list linked_list;

    while(1)
    {


        cout<<"----------MENU----------"<<endl;
        cout<<"1. Insert First"<< endl;
        cout<<"2. Show All"<< endl;
        cout<<"3. Search" << endl;
        cout<<"4. Insert Last" << endl;
        cout<<"5. Insert middle"<< endl;
        cout<<"6. EXIT" << endl;

        cin>> ch;

        switch(ch)
        {
        case 1:

         cout<<"Enter value of data: ";

         cin>> val;
         linked_list.insert_first(val);

            break;
        case 2:
         linked_list.show_list();

            break;
        case 3:
       cout<<"Enter a value to search in the list: ";

       cin>> val;
       y = linked_list.search_in_list(val);
       if(y!= NULL)
       {
           cout<<"Node Found!!" << endl;
           cout<< y->data <<endl;
       }
       else{
        cout<<" Node not found" << endl;
       }




            break;

        case 4:
      cout<<"Enter the value of data: ";
      cin>>val;

      linked_list.insert_last(val);


            break;

        case 5:
cout<<"Enter the new value of data: :";
cin>>val;
cout<<"Enter the previous value: ";
cin>> prev_val;
linked_list.insert_middle(val , prev_val);

            break;

        case 6:
            break;

        default:
            cout<<"Wrong Input!!"<< endl;
        }

    }

}

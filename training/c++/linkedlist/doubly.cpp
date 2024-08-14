// #include <iostream>
// #include <cstdlib>

// using namespace std;

// class Node 
// {   public:
//        int data;
//        Node* next;
// };

// Node* head = nullptr;

// void beginInsert();
// void lastInsert();
// void beginDelete();
// void lastDelete();
// void search();
// void display();

// int main() 
// {
//     int choice = 0;
//     while (choice != 7) 
// 	{
//         cout << "\n*********Main Menu*********\n";
//         cout << "\nChoose one option from the following list ...\n";
//         cout << "\n===============================================\n";
//         cout << "\n1. Insert in beginning\n2. Insert at last\n3. Delete from Beginning\n4. Delete from last\n5. Search for an element\n6. Show\n7. Exit\n";
//         cout << "\nEnter your choice?\n";
//         cin >> choice;

//         switch (choice) 
// 		{
//             case 1:
//                 beginInsert();
//                 break;
//             case 2:
//                 lastInsert();
//                 break;
//             case 3:
//                 beginDelete();
//                 break;
//             case 4:
//                 lastDelete();
//                 break;
//             case 5:
//                 search();
//                 break;
//             case 6:
//                 display();
//                 break;
//             case 7:
//                 exit(0);
//             default:
//                 cout << "Please enter a valid choice..\n";
//         }
//     }

//     return 0;
// }

// void beginInsert() 
// {   cout<<"beginInsert()"<<endl;
// }

// void lastInsert() 
// {	cout<<"lastInsert()"<<endl;
// }

// void beginDelete() 
// {	cout<<"beginDelete()"<<endl;
// }

// void display() 
// {	cout<<"display()"<<endl;
// }

// void lastDelete(){
//     if(head == nullptr){
//         cout << "underflow";
//     }
//     else if(head->next == head){
//         delete head;
//         head = nullptr;
//         cout << "node deleted";
//     }
//     else{
//         Node* ptr = head;
//         Node* preptr = nullptr;
//         while(ptr->next != nullptr){
//             preptr = ptr;
//             ptr = ptr->next;
//         }
//         preptr->next = head;
//         delete ptr;
//         cout << "node deleted";
//     }
// }

// void search(){
//     if(head == nullptr){
//         cout << "list is empty";
//         return;
//     }
//     Node* ptr =head;
//     int item ,i =0;
//     bool found= false;

//     cout << "enter the element to search";
//     cin >> item;
//     if(head->data == item){
//         cout << i+1;
//         found = true;
//     }
//     else{
//     while(ptr->next!= head ){
//         if(ptr->data == item){
//             cout <<i+1;

//             found= true;
//             break;
//         }
//         i++;
//         ptr = ptr->next;
//     }
//     }
// }



#include <iostream>
#include <cstdlib>  // For malloc() and free()

using namespace std;

class Node 
{   public:
        Node* prev;
        int data;
        Node* next;
};

Node* head = nullptr;

void insertion_beginning();
void insertion_last();
void insertion_specified();
void deletion_beginning();
void deletion_last();
void deletion_specified();
void display();
void search();

int main() 
{
    int choice = 0;

    while (choice != 9) 
	{
        cout << "\n*********Main Menu*********\n";
        cout << "\nChoose one option from the following list ...\n";
        cout << "\n===============================================\n";
        cout << "\n1. Insert in beginning\n2. Insert at last\n3. Insert at any random location\n4. Delete from Beginning\n";
        cout << "5. Delete from last\n6. Delete the node after the given data\n7. Search\n8. Show\n9. Exit\n";
        cout << "\nEnter your choice?\n";
        cin >> choice;
        switch (choice) 
		{
            case 1:
                insertion_beginning();
                break;
            case 2:
                insertion_last();
                break;
            case 3:
                insertion_specified();
                break;
            case 4:
                deletion_beginning();
                break;
            case 5:
                deletion_last();
                break;
            case 6:
                deletion_specified();
                break;
            case 7:
                search();
                break;
            case 8:
                display();
                break;
            case 9:
                exit(0);
            default:
                cout << "Please enter a valid choice..\n";
        }
    }

    return 0;
}

void insertion_beginning() 
{	
    Node* ptr = new Node();
    int item;
    cout <<"values:";
    cin >> item;
    ptr ->data = item;
    if(head== nullptr){
        ptr->prev=nullptr;
        ptr->next=nullptr;
        head=ptr;
    }
    else{
        ptr->prev=nullptr;
        ptr->next=head;
        head->prev=ptr;
        head=ptr;
    }
}

void insertion_last() 
{	cout << "\nNode inserted\n";
}

void insertion_specified() 
{	
    Node* ptr =new Node();
    int item,loc,i;
    Node* temp =head;
    cout << " values";
    cin >> loc;

    for(int i=0;i<loc;i++){
        temp=temp->next;
        if(temp == nullptr){
            cout<<"less element" << loc;
            return;
        }
    }
    cout << "value: ";
    cin >> item;
    ptr->data = item;

    ptr->next = temp->next;
    ptr->prev = temp;
    temp->next = ptr;
    if(ptr->next != nullptr){
        ptr->next->prev = ptr;
    }
    cout<< " node inserted";

}

void deletion_beginning() 
{	
    if(head == nullptr){
        cout << "underflow";
    }
    else if(head->next == nullptr){
        delete head;
        head= nullptr;
        cout<<"node deleted";
    }
    else{
        Node* ptr = head;
        head = head->next;
        head->prev = nullptr;
        delete ptr;
        cout << "node deleted";
    }
}

void deletion_last() 
{	
    if(head == nullptr){
        cout << "underflow";
    }
    else if(head->next == nullptr){
        delete head;
        head= nullptr;
        cout<<"node deleted";
    }
    else{
        Node* ptr = head;
        while(ptr->next != nullptr){
            ptr=ptr->next;
        }
        ptr->prev->next= nullptr;
        delete ptr;
        cout << " node deleted";

    }
}

void deletion_specified() 
{	cout << "\nImplement the logic to delete the specified element.\n";
}

void display() 
{	
    Node* ptr = head;
    cout << "";
    while (ptr!= nullptr)
    {
        cout << ptr->data <<endl;
        ptr =ptr->next;
    }
    
}

void search() 
{   cout<<"search()\n";
}



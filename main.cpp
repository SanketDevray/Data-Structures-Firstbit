#include"linkedlist.cpp"

int main(){
    LinkedList lt;
    //  lt.insertBeg(40);
    // lt.insertBeg(10);
    // lt.insertBeg(20);
    // lt.insertBeg(30);
   int choice;
   
   do{
    cout<<"\t\t\n1.Insert At Begining"<<endl;
    cout<<"\t\t\n2.Insert At End"<<endl;
    cout<<"\t\t\n3.Insert At Position"<<endl;
    cout<<"\t\t\n4.Display"<<endl;
    cout<<"\t\t\n5.Exit"<<endl;

    cout<<"Enter the Choice -:";
    cin>>choice;
    switch (choice)
    {
        case 1:
            {
                int ele;
                cout<<endl;
                cout<<"Enter the Elements -: ";
                cin>>ele;
                lt.insertBeg(ele);
            }
        break;
        case 2:
            {
                int ele;
                cout<<endl;
                cout<<"Enter the Elements -: ";
                cin>>ele;
                lt.insertEnd(ele);
            }
        break;
        case 3:
            {
                int pos;
                cout<<"Enter the Position -:";
                cin>>pos;
                int ele;
                cout<<endl;
                cout<<"Enter the Position -: ";
                cin>>ele;
                lt.insertPosition(ele,pos);
            }
        break;
        case 4:
                cout<<endl;
                cout<<"Linked List is -: ";
                lt.display();
                cout<<endl;
        break;
        case 5:
                cout<<"Exiting....";
        break;

        default:
            break;
        }

   }while(choice!=5);
    
    return 0;
}
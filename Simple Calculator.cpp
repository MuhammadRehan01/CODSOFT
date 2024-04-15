#include<iostream>
using namespace std;
int  main()
{
    float a,b,sum,difference,product,remainder;
    char c;
    cout<<"* * * Here's your simple Calculator * * * "<<endl;
    cout<<"To Perform Operations : "<<endl;
    cout<<"Please enter 1st number : ";
    cin>>a;
    cout<<"Please enter 2nd nummber : ";
    cin>>b;
    abc:
    cout<<"* Please enter the operation to be performed *"<<endl;
    cout<<"+ for Add\n- for Subtract\n* for multiply\n/ for remainder\nq for  quit"<<endl;
    cin>>c;
    switch (c)
    {
    case '+':
    sum = a+b;
    cout<<"\n* * * * * * * * * * * * * * * * * *\n";
    cout<<"The sum of  the  numbers  is  : "<<sum<<endl;
     cout<<"\n* * * * * * * * * * * * * * * * * *\n";
    goto abc;
        break;
        case '-':
        difference = a-b;
         cout<<"\n* * * * * * * * * * * * * * * * * *\n";
        cout<<"The difference of  the two numbers is : "<<difference<<endl;
         cout<<"\n* * * * * * * * * * * * * * * * * *\n";
        goto abc;
        break;
        case '*':
        product = a*b;
         cout<<"\n* * * * * * * * * * * * * * * * * *\n";
        cout<<"The product of the two numbers is : "<<product<<endl;
         cout<<"\n* * * * * * * * * * * * * * * * * *\n";
        goto abc;
        break;
        case '/':
        remainder = a/b;
         cout<<"\n* * * * * * * * * * * * * * * * * *\n";
        cout<<"The quotient from the  division of  the  two  numbers is : "<<remainder<<endl;
         cout<<"\n* * * * * * * * * * * * * * * * * *\n";
        goto abc;
        break;
        case 'q':
        return 0;
    default:
    cout<<"Please enter a valid choice ..."<<endl;
    goto abc;
        break;
    }





return 0;
}

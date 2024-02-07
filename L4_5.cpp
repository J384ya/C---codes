#include<iostream>
using namespace std;
main()
{
    int day;
    cout<<"Enter Day Number: ";
    cin>>day;
    switch(day){
        case 1:
        cout<<"Monday";
        break;

        case 2:
        cout<<"Tuesday";
        break;
        
        case 3:
        cout<<"Wednesday";
        break;
        
        case 4:
        cout<<"Thusday";
        break;

        case 5:
        cout<<"Friday";
        break;

        case 6:
        cout<<"Saturday";
        break;

        case 7:
        cout<<"Sunday";
        break;

        default:
        cout<<"Wrong Number";
    }

    char input;
    cout<<"Enter a charecter: ";
    cin>>input;
    switch (input)
    {
    case 'a':
    cout<<"Vovel";
        break;
    
    case 'e':
    cout<<"Vovel";
        break;

    case 'i':
    cout<<"Vovel";
        break;

    case 'o':
    cout<<"Vovel";
        break;

    case 'u':
    cout<<"Vovel";
        break;

    default:
    cout<<"Consonent";
        break;
    }
}

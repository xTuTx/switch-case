#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"enter 1234"<<endl;
    cin>>num;
    switch(num)
    {
        case 1:
        {
            cout<<"Have a nice day!"<<endl;
            break;
        }
        case 2:
        {
            cout<<"Good luck!"<<endl;
            break;
        }
        case 3:
        {
            cout<<"best wishes!"<<endl;
            break;
        }
        case 4:
        {
            cout<<"All the best!"<<endl;
            break;
        }
        default :
        {
             cout<<":D:D"<<endl;

        }

    }
    return 0;
}

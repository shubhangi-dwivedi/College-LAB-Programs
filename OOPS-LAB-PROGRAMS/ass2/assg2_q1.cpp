// C++ program to design Login screen, check username and password.
/* NAME: SHUBHANGI DWIVEDI
ROLL NO. :1913122
DATE OF CREATION : 07/01/21 */

# include <iostream>
# include <string.h>
using namespace std;

int main()
{
    char userId[20],password[20];
    char u_id[] = "shubhangi",u_password[] = "1913122";
    int ch = 3;

    while(ch)
    {
        cout<<"Enter User ID -> ";
        cin>>userId;
        cout<<"Enter Your Password -> ";
        cin>> password;

        if (strcmp(u_id, userId) == 0 && strcmp(password, u_password) == 0)
        {
            cout<<"\n*******Correct User Id And Password...logged in*******\n";
            break;
        }
        else
        {
            ch=ch-1;
            cout<<"\n*****Invalid User Id And Password*****\n"<<ch<<" CHANCES LEFT\n\n";

            if(!ch)
                cout<<"**********You have no more chances...session terminated********";
        }
    }

    return 0;
}

// #include<iostream>
// using namespace std;
// int main()
// {
//     int x;
//     x=9/0;
//     cout<<x;
// }

// -------------------------------------------
// #include<iostream>
// using namespace std;
// int main()
// {
//     int x=10,y=0,z;
//     z=x/y;
//     cout<<z;
// }

// -------------------------------------------
// This will also not work

// #include<iostream>
// using namespace std;
// int main()
// {
//     int x=10,y=0,z;
//     try
//     {
//     z=x/y;
//     cout<<z;
    
//     }
//     catch(...)
//     {
//         cout<<"Please try to divide with some other number";
//     }


// --------------------------------------
#include<iostream>
using namespace std;
int main()
{
    int x=10,y=0,z;
    try
    {
    if(y==0)
    throw 89;
    z=x/y;
    cout<<z;
    
    }
    catch(int c)
    {
        cout<<"Cannot Divide With 0"<<endl<<"Error Code: "<<c;
    }
    cout<<"Bye"; //This will Run Always whether their is Exception or Not 
}
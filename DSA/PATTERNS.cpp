1.
#include <iostream>
using namespace std;

int main()
{
    for (int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            
           cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

2.
#include <iostream>
using namespace std;

int main()
{
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
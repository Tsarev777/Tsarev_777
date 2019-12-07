#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    int x;
    while (true){
    cin>>x;
    if (x>120){
        cout<<"RIP"<<endl;
    continue;}
        if ((x%10==1)&&(x!=11)){

        cout<<x<<" год"<<endl;
    }
    int k = x%10;
    if ((k>=2 and k<=4)&&(x/10%10!=1) ){
        cout<<x<<" года"<<endl;

    }
    if (((x%10>4)||(x/10%10==1))||(x%10==0))
    {
         cout<<x<<" лет"<<endl;
    }


    }


 return 0;
}

#include <iostream>
#include <fstream>
using namespace std;
ifstream in1("bac1.txt");
ifstream in2("bac2.txt");
int n1,n2,x,y,i,j,k=0;
int main()
{

    in1>>n1;
    in2>>n2;
    in1>>x;
    i++;
    in1>>y;
    j++;
    while(i<=n1 && j<=n2)
    {
        if(x==y)
        {
            in1>>x;
            i++;
            in2>>y;
            j++;
        }
        while(x<y && i<=n1)
        {
            if(x%5==0)
            {
                cout<<x<<" ";
                k++;

            }
            in1>>x;
            i++;
        }
        while(y<x && j<=n2)
        {
            if(y%5==0)
            {
                cout<<y<<" ";
                k++;

            }
            in2>>y;
            j++;
        }
        if(i<=n1)
            for(j=i ; j<=n1 ; j++)
            {
                if(x%5==0)
                {
                    cout<<x<<" ";
                    k++;

                }
                in1>>x;
            }
        if(y<=n2)
            for(i=j ; i<=n2 ; i++)
            {
                if(y%5==0)
                {
                    cout<<y<<" ";
                    k++;

                }
                in2>>y;
            }
        if(k==0)
            cout<<"nu exista";

        in1.close();
        in2.close();

    }
    return 0;
}

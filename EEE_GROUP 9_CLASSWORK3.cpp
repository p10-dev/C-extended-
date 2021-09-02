#include <iostream>
#include<cmath>

using namespace std;

int main()
{

     int v = 2;
     float r,t,va,ro;
     va = v -(5*t);
     ro = (v*t)-(4.9*t*t);
     for(t=0; t<=10;){
            va = v -(5*t);
           ro = (v*t)-(4.9*t*t);
            cout<<"The particles velocity at "<<t<<"s is: "<<va<<"m/s"<< endl;
            cout<<"The particles position at "<<t<<"s is: "<<ro<<"m"<< endl;

            t=t+0.5;
     }
}

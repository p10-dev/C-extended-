#include <iostream>
#include <cmath>

using namespace std;

void sayHi(int age, string name) {

    cout << "You are "<< age << " years old " << name;
}

int main()

{
    cout << "Top ";
    sayHi(10, "Mike");
    cout << " Bottom";
    return 0;
}

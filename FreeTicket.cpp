//relational and logical operators

#include <iostream> 

using namespace std; 

int main ()
{
    int age;
    float wage;
    
    cout << "Write your age";
    
    cin >> age;
    
    cout << "Write your wage";
    
    cin >> wage;
    
    if (wage <500 || age >= 65)
    {
     cout << "Free ticket!" << endl;
    }
    
    else
    {
     cout << "Pay the ticket" << endl;
    }
 }
#include <iostream>

using namespace std;

void FunctionA();
void BugFixes();

int main()
{
    cout << "Hello world!" << endl;
    
    BugFixes();

    FunctionA();


    return 0;
}

//  v1.0 
//  Two bugs has been fixed!

void BugFixes()
{
    cout << "This fixes a bug!" << endl;
    cout << "This fixes a bug again! so should be commit!" << endl;
}

void FunctionA()
{
    cout << "This is another way to implemention functionA" << endl;
    cout << "I think this is better! Do you think so? " << endl;
}


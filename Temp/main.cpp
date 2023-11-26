#include <iostream>
#include <list>
using namespace std;

int main()
{
    int a,b;
    list<int> x;
    list<int>::iterator iter = x.begin();
    for(int i=0;i<5;i++){
        cin >> a >> b;
        x.push_back(a+b);
        for(iter=x.begin(); iter!=x.end(); iter++){
            cout << *iter << "\n";
        }
    }
    return 0;
}

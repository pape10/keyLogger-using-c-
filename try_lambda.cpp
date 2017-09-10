#include <iostream>
using namespace std;

void setfunction(std::function<void (void)> &f)
{
    f();
}

int main()
{

    return 0;
}

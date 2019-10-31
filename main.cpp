#include <iostream>
using namespace std;//It is inserted to avoid using the scope operator :: multiple times
int main(int argc, char *argv[])
{
    cout <<endl<<"Hello, World!";//without 'using namespace std' it would have been std::cout
    return 0;
}

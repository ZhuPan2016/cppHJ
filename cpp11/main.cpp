#include <iostream>
using namespace std;

void printx(){

}

template<typename T, typename... Ts>
void printx(const T& firstArg, const Ts&... args){
    cout << firstArg << endl;
    printx(args...);
}

int main(int argc, char const *argv[])
{
    printx(
        1 + 4,
        "string",
        33
    );
    return 0;
}

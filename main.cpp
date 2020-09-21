#include <iostream>
int* someMethod()
{
    int* createOne;
    delete createOne;

    return createOne;

}
int main() {
    std::cout << "Hello, World!" << std::endl;
    int* newPtr;
    delete newPtr;

    int* anotherOne;
    delete anotherOne;

    int* what;
    delete what;
    *what = 3;

    int * newIntro;
    delete newIntro;

    int* newPtr;
    delete newPtr;

    //add comment

    int* assignThis = someMethod();
    return 0;
}

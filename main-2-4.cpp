#include <iostream>
extern bool is_ascending(int array[], int n);

int main(){
    int a[]={1,2,3};
    int b= is_ascending(a,3);

    std::cout<<"Is accending?: "<<b<<std::endl;
    return 1;
}

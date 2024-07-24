#include <iostream>
extern int count_evens(int number);

int main(){
    int a=10;
    int b=count_evens(a);
    std::cout<<"even count is: "<<b<<std::endl;
    return 0;
}
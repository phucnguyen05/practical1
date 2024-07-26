#include <iostream>
extern bool is_fanarray(int array[], int n);

int main(){
    int array[]= {1,2,3,2,1};
    bool result=is_fanarray(array,5);

    std::cout<<"is fan?: "<<result<<std::endl;

    return 1;
}

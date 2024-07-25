#include <iostream>
extern bool is_descending(int array[], int n);

int main(){
    int a[]={9,8,7,6,5,4,3,2,1};
    bool b=is_descending(a,9);

    std::cout<<"Is descending: "<<b<<std::endl;
    return 1;
}
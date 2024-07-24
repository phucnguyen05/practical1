#include <iostream>
extern int min_element(int array[], int n);

int main(){
    int a[]={1,3,6,2,8,23,8};
    int b=7;
    int c=min_element(a,b);

    std::cout<<"Smallest is: "<<c<<std::endl;
    return 0;
}
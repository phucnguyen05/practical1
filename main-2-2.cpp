#include <iostream>
extern int max_element(int array[], int n);

int main(){
    int a[]={1,2,3,5,7,1,6,2};
    int b=8;
    int c=max_element(a,b);

    std::cout<<"max element: "<<c<<std::endl;
    return 1;
}
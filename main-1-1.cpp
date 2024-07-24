#include <iostream>

extern int array_sum(int array[], int n);

int main(){
    int a[]={1,2,3};
    int b=array_sum(a,3);
    std::cout<<"the sum is"<<b<<std::endl;
}
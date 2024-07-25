#include <iostream>
extern double sum_even(double array[], int n);

int main(){
    double a[]={1.0,2.0,3.0,4.0};
    int sum=sum_even(a,4);

    std::cout<<"sum is: "<<sum<<std::endl;
    return 0;
}
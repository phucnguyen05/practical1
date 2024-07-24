#include <iostream>
extern  int sum_two_arrays(int array[], int secondarray[], int n);

int main(){
    int a[]={1,2,3};
    int b[]={1,2,3};
    int c=3;
    int d=sum_two_arrays(a,b,c);

    std::cout<<"the sum is: "<<d<<std::endl;

    return 0;
}
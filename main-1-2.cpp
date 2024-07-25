#include <iostream>
extern double array_mean(int array[], int n);

int main(){
    int array[]={1,2,3};
    int result=array_mean(array,3);
    std::cout<<"average: "<<result<<std::endl;
    return 1;
}
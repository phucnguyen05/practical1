#include <iostream>
extern double weighted_average(int array[], int n);

int main(){
    int array[]={1,2,1,4,1,3};
    double solution=weighted_average(array,6);

    std::cout<<"Weighted average: "<<solution<<std::endl;
    return 1;
}

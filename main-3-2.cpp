#include <iostream>
extern  int median_array(int array[], int n);

int main(){
    int array[]={3,5,2,1,4};
    int b=median_array(array,5);
    std::cout<<"median: "<<b<<std::endl;
}
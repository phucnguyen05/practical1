#include <iostream>
extern int num_count(int array[], int n, int number);

int main(){
    int a[]={5,1,2,5,6,12,5,2,6,2};
    int b=10;
    int c=2;

    int d=num_count(a,b,c);
    std::cout<<"Matches count: "<<d<<std::endl;
    return 0;
}

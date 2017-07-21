// Assignment 5 - Problem 7
// Angeline Fletcher 106595271
#include <iostream>

using namespace std;

int main()
{
    int arr;
    long num=600851475143;
    int i=2, x=0, a=0, b=0;
    while(x!=1){
        if(num%i==0){
            arr=i;
            b++;
            if(num==i){x=1;}
            num=num/i;
            i=i-1;
            a++;}
        else{i++;}
}
std::cout<<arr<<std::endl;
}

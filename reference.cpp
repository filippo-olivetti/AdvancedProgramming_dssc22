#include <iostream>

void add_2(int& a){
    a= a +2;
}

int main(){
    int b{3};
    add_2(b);
    std::cout<<"Il valore è "<< b <<std::endl;
    return 0;
}
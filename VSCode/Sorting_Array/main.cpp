#include <iostream>

//Sort numbers from lowest to highest
void sorting_numbers(int numbers[]){
    bool has_changed;
    //Will check if the current object is higher than the next one
    //if it is it will swap both of them
    // and it will continue doing it till current number is lower than the next one in all the locations
    do{
        has_changed=false;
        for(int i = 0; i <8 ;i++){
            if(numbers[i]>numbers[i+1]){
                int temp{numbers[i+1]};
                numbers[i+1]=numbers[i];
                numbers[i] = temp;
                has_changed=true;
            }
        }
    }
    while(has_changed);
}

void print_numbers(int numbers[]){
    for(int i=0; i<9;i++)
        std::cout<<numbers[i]<<" ";
    std::cout<<std::endl;
}

int main (){

    int numbers[]{3,2,1,7,4,9,8,5,6};
    print_numbers(numbers);
    sorting_numbers(numbers);
    print_numbers(numbers);
    return 0;
}
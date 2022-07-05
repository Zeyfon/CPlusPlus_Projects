#include "Log_Reg.h"
#include <iostream>
#include <fstream>
#include <string>

void Log_Reg::display_menu(){
    std::cout << "1: Register\n"<<std::endl; 
    std::cout << "2: Login\n"<<std::endl;
    std::cout << "Your choice\n"<<std::endl;
}
int Log_Reg::get_menu_choice(){
    int number;
    std::cin>>number;
    return number;
}
void Log_Reg::register_user(){
    std::string username, password;
    std::cout<<"Select a username: ";
    std::cin>> username;
    std::cout<<std::endl;
    std::cout<<"Select a password: ";
    std::cin>> password;
    std::cout<<std::endl;

    std::ofstream file;
    file.open(username + ".txt");
    if(!file.is_open())
        std::cout<<"Failed to Register user";
    file << username<<std::endl;
    file <<password <<std::endl;
    file.close();
}
bool Log_Reg::login_user(){
    bool status = is_already_registered();
    if(!status){
        std::cout << "False Login!" << std::endl;
        //system("PAUSE");
        return 0;
    }
    else{
        std::cout<< "Successfuly logged in" << std::endl;
        //system("PAUSE");
        return 1;
    }
}

bool Log_Reg::is_already_registered(){
    std::string username, password, un, pw;

    std::cout<< "Enter username: ";
    std::cin>> username;
    std::cout<<std::endl;
    std::cout<<"Enter password: ";
    std::cin>>password;
    std::cout<<std::endl;

    std::ifstream read(username+ ".txt");
    getline(read,un);
    getline(read,pw);

    if(un==username && pw == password)
        return true;
    else
        return false;
}
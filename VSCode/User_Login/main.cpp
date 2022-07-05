#include "Registration.h"


int main(){
    Registration registration{};
    bool display_menu{true};
    while(display_menu){
        registration.display_menu();
        int choice = registration.get_menu_choice();

        if(choice ==1){
            registration.register_user();
        }
        else if(choice ==2){
            display_menu = registration.login_user();
        }
    }
}
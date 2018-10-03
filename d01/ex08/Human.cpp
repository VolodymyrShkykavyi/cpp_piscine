#include "Human.hpp"

void Human::meleeAttack(std::string const &target) {
    std::cout << "melee attack " << target << std::endl;
}

void Human::rangedAttack(std::string const &target) {
    std::cout << "ranged attack " << target << std::endl;
}

void Human::intimidatingShout(std::string const &target) {
    std::cout << "intimidating shout " << target << std::endl;
}

void Human::action(std::string const &action_name, std::string const &target) {
    typedef struct actions {
        std::string name;
        void (Human::*fnPtr)(std::string const &);
    }   t_actions;
    int actArrSize = 3;

    t_actions act_arr[actArrSize];
    act_arr[0].name = "meleeAttack";
    act_arr[0].fnPtr = &Human::meleeAttack;
    act_arr[1].name = "rangedAttack";
    act_arr[1].fnPtr = &Human::rangedAttack;
    act_arr[2].name = "intimidatingShout";
    act_arr[2].fnPtr = &Human::intimidatingShout;

    for (int i = 0; i < actArrSize; i++) {
        if (act_arr[i].name == action_name) {
            (this->*(act_arr[i].fnPtr))(target);
            break;
        }
    }
}
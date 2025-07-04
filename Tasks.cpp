#include <iostream>
#include <cstdlib>
#include <ctime>
std::string user_rpsg() {
    std::string user_rps;
    while (true) {
        std::cout << "Enter your choice (rock/paper/scissors): ";
        std::cin >> user_rps;
        if (user_rps == "rock" || user_rps == "paper" || user_rps == "scissors") {
            return user_rps;
            std::cout << "Invalid choice!\n";
        }
    }
};
std::string pc_rps() {
    int random_rps = rand() % 3;
    switch (random_rps) {
    case 0: return "rock";
    case 1: return "paper";
    case 2: return "scissors";

    }
};
std::string determine(const std::string& user_rps, const std::string& random_rps) {
    if (user_rps == random_rps) {
        return "draw";
    }
    if ((user_rps == "rock" && random_rps == "scissors") ||
        (user_rps == "paper" && random_rps == "rock") ||
        (user_rps == "scissors" && random_rps == "paper")) {
        return "win";
    }
    return "lose";
    
};
void age() {
    int user_age;
    std::cout << "Enter your age\n";
    std::cin >> user_age;
    if (user_age >= 18) {
        std::cout << "You're welcome\n";
    }
    else {
        std::cout << "Entrance denied\n";
    }
}

void random() {
    int random_number = rand() % 10 + 1;
    for (int attempt = 1; attempt <= 10; attempt++) {
        int user_number;
        std::cout << "Enter a number (1-10)\n";
        std::cin >> user_number;
        if (user_number == random_number) {
            std::cout << "You win!\n";
            std::cout << "Random number: " << random_number << "\n";
            random_number = rand() % 10 + 1;
        }
        else {
            std::cout << "You lose!\n";
        }
    }
}
void rps() {

    std::string player_choice = user_rpsg();
    std::string pc_choice = pc_rps();
    std::string result = determine(player_choice, pc_choice);
    std::cout << "you choice: " << player_choice <<
        "\nComputer choice: " << pc_choice <<
        "\nResult: " << result << "\n";
}

void math() {
    int a = 2;
    int b = 5;
    std::cout << "Sum: " << b + a << "\n"
        << "Difference: " << b - a << "\n"
        << "Product: " << b * a << "\n"
        << "Quotient: " << b / a << "\n"
        << "Remainder: " << b % a << "\n";
}

int main() {
    srand(time(0));
    std::cout << "Enter the task number\n (1-4): ";
    int choice;
    std::cin >> choice;
    switch (choice) {
    case 1: math(); break;
    case 2: age(); break;
    case 3: random(); break;
    case 4: rps(); break;
    default: std::cout << "Invalid choice\n";
    }
    return 0;
}
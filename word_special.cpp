# include <iostream>
# include <vector>
# include <conio.h>

int points;

void question(std::string question, std::vector<std::string> options, char answer){
    static int total_questions = 1;
    char response;

    std::cout << "Question " << total_questions << ". " << question << ":\n\n";

    for(int i = 0, j = 65; i != (int)options.size(); i++, j++) std::cout << (char)j << ". " << options[i] << '\n';

    std::cout << ">> ";
    response = toupper(getch());

    if(response == answer) std::cout << "Correct Option!";
    else if((int)response > (int)options.size() + 64) std::cout << "That is not even a valid option!";
    else std::cout << "Wrong answer! The correct answer should be: " << options[answer - 65];

    points += (response == answer);

    std::cout << "\n\n";
    total_questions++;
}

/// @brief Main function of the program
/// @param argc Number of arguments
/// @param argv String array of the arguments
/// @return int
int main(int argc, char** argv){
    std::cout << "WELCOME TO DILLUSIOENRS QUIZ.\n\n";

    question(
        "What is SuperB\'s Special word?",
        {"IDK", "Banned", "Think Easy", "Alright"},
        'A'
    );


    std::cout << "Your total points is " << points;
    return 0;
}
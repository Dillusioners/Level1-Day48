# include <iostream>

/// @brief Makes it easier to take input from the console
/// @param prompt The message to be printed to indicate that the input is taken
/// @return char
char input(std::string prompt){
    std::string response;
    
    // printing the prompt and asking for a response
    std::cout << prompt;
    std::cin >> response;

    // returning the first character of response
    return response[0];
}

/// @brief Makes it so that generating responses based on answer is much easier
/// @param ans The answer given in the prompt
/// @param prompt1 The prompt if yes is given
/// @param prompt2 The prompt is no is given
void generate_response(char ans, std::string prompt1, std::string prompt2){
    if(ans == 'y' || ans == 'Y') std::cout << prompt1;
    else if(ans == 'n' || ans == 'N') std::cout << prompt2;
    else std::cout << "Invalid response provided!";

    std::cout << "\n\n";
}

/// @brief Main function of the program
/// @param argc Number of arguments
/// @param argv String array of the arguments
/// @return int
int main(int argc, char** argv){
    // prologue sentense
    std::cout << "DILLUSIONERS QUIZ! ARE YOU SPECIAL?\nThis quiz will determine you how special you are from others!\n\n";

    // generating response for if the user is left or right handed
    generate_response(
        input("Do you write with your left hand? (Y/n): "), 
        "Wow, thats quiet Special!", 
        "Alright. Most of the world is right-handed so not an issue"
    );

    // response for having blue/green eyes
    generate_response(
        input("Do you have blue or green eye color? (Y/n): "),
        "Now that is something quiet special for an individual!",
        "No issues. Thats a quiet rare trait"
    );

    // response for having a buggati
    generate_response(
        input("Do you have a buggati? (Y/n): "),
        "Quiet special indeed! Andrew Tate will be proud of you!",
        "Donot Worry, one day you also will have one!"
    );

    // response for being happy
    generate_response(
        input("Do you have a great day everyday? (Y/n): "),
        "Well Done! Most people don\'t and it makes you quiet special!",
        "Im sorry! I hope you feel better afterwards."
    );

    // some lines to cheer up the user
    std::cout << "Remember! Its not about doing different or having special traits!\n";
    std::cout << "Everyone is the same and special in their own way! There is noone born to feel common.\n";
    std::cout << "You have no enemies.\n\n";

    return 0;
}
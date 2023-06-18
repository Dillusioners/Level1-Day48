# include <iostream>

/// @brief Main function of the program
/// @param argc Number of arguments
/// @param argv String array of the arguments
/// @return int
int main(int argc, char** argv){
    std::string opinion;
    std::cout << "Is Wamis Special?\n";
    std::cout << "Wamis is a great man. He is so special that he was the only one chosen from his level.\n";
    std::cout << "What are your opinions on him? ";
    std::cin >> opinion;
    return 0;
}

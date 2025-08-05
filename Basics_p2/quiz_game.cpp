#include <iostream>

int main() {
    std::string questions[] = {"1. What year was c++ created?: ",
                               "2. Who invented C++?: ",
                               "3. What is the predecessor of C++?: ",
                               "4. Is the earth Flat?: "};

    std::string options[][4] =  {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                                {"A. Guido van Rossum", "B. Bjarne Strosprut", "C. John Carmack", "D. Mark Zukerberg"},
                                {"A. C", "B. C+", "C. C--", "D. B++"},
                                {"A. Yes", "B. No", "C. Sometimes", "D. What's earth"}};
    
    char answerKey[] = {'C', 'B', 'A', 'B'};
    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;
    for ( int i = 0; i < size; i++) {
        std::cout << "***************************************\n";
        std::cout << questions[i] << '\n';
        std::cout << "***************************************\n";

        for( int j = 0; j < sizeof(options[i])/sizeof(options[0][0]); j++){
            std::cout << options[i][j] << '\n';
        }
        std::cin >> guess;
        guess = toupper(guess);
        if (guess == answerKey[i]){
            std::cout << "Correct\n";
            score++;

        }else{
            std::cout << "Wrong\n";
            std::cout << "Answer: " << answerKey[i] << '\n';
        }
    }
    std::cout << "**************************************\n";
    std::cout << "*             RESULT                 *\n";
    std::cout << "**************************************\n";
    std::cout << "Correct Guesses: " << score << '\n';
    std::cout << "Number of questions: "<< size << '\n';
    std::cout << "Score is: " << (score/(double)size)*100 << '%';

    return 0;

    }
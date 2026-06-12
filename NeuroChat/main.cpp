#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <windows.h>

class NeuroChat {
private:
    int colorIndex;
    
    // ANSI color codes for Windows
    void setConsoleColor(int colorCode) {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, colorCode);
    }

    void resetColor() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 7); // Default white
    }

public:
    NeuroChat() : colorIndex(0) {}

    void displayAnimatedTitle() {
        // Windows color codes
        int colors[] = {
            12, // Red
            14, // Yellow
            10, // Green
            11, // Cyan
            9,  // Blue
            13, // Magenta
        };

        system("cls"); // Clear screen

        std::cout << "\n\n";
        std::cout << "╔════════════════════════════════════════════════════════════╗\n";
        std::cout << "║                                                            ║\n";
        
        // Animated title
        for (int j = 0; j < 3; j++) {
            setConsoleColor(colors[j % 6]);
            std::cout << "║                       NEUROCHAT v1.0                       ║\n";
            std::cout.flush();
            std::this_thread::sleep_for(std::chrono::milliseconds(300));
            
            // Move cursor back up
            std::cout << "\x1B[A";
        }

        resetColor();
        std::cout << "║                       NEUROCHAT v1.0                       ║\n";
        std::cout << "║                                                            ║\n";
        std::cout << "║            🤖 AI-Powered Chat Interface 🤖                 ║\n";
        std::cout << "║                                                            ║\n";
        std::cout << "╚════════════════════════════════════════════════════════════╝\n";
        std::cout << "\n";
    }

    void displayWelcome() {
        setConsoleColor(11); // Cyan
        std::cout << "✓ Welcome to NeuroChat!\n";
        resetColor();
        
        setConsoleColor(10); // Green
        std::cout << "✓ Application initialized successfully\n";
        resetColor();
        
        setConsoleColor(14); // Yellow
        std::cout << "✓ Ready for your input\n\n";
        resetColor();
    }

    void displayColorfulText() {
        int colors[] = { 12, 14, 10, 11, 9, 13 };
        std::string text = "NEUROCHAT";

        setConsoleColor(12); // Red
        for (char c : text) {
            std::cout << c;
            std::cout.flush();
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
        resetColor();
        std::cout << "\n\n";
    }

    void run() {
        displayAnimatedTitle();
        displayWelcome();
        displayColorfulText();

        // Chat loop
        std::string input;
        while (true) {
            setConsoleColor(13); // Magenta
            std::cout << "You: ";
            resetColor();
            
            std::getline(std::cin, input);

            if (input == "exit" || input == "quit") {
                setConsoleColor(12); // Red
                std::cout << "\nGoodbye! Thanks for using NeuroChat.\n";
                resetColor();
                break;
            }

            setConsoleColor(11); // Cyan
            std::cout << "NeuroChat: ";
            resetColor();
            std::cout << "Thank you for your message: \"" << input << "\"\n\n";
        }
    }
};

int main() {
    NeuroChat chat;
    chat.run();
    return 0;
}

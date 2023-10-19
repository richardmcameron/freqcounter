#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

class ItemTracker
{
private:
    map<string, int> itemFrequency;  // Map to store item frequencies
    string dataFilePath;            // File path for saving data

public:
    ItemTracker()
    {
        dataFilePath = "frequency.dat";  // Default data file path
    }

    
    void processInputFile(const string& filePath) // Read and process input file
    {
        ifstream inputFile(filePath);  // Input file stream
        string item;

        if (!inputFile.is_open())
        {
            cout << "Error: Unable to open file " << filePath << endl;
            return;
        }

        while (getline(inputFile, item))
        {
            itemFrequency[item]++;  // Increment item frequency count
        }

        inputFile.close();
    }

   
    void saveDataToFile()  // Save data to a file
    {
        ofstream outputFile(dataFilePath);  // Output file stream

        if (!outputFile.is_open())
        {
            cout << "Error: Unable to create output file " << dataFilePath << endl;
            return;
        }

        for (const auto& pair : itemFrequency)
        {
            outputFile << pair.first << " " << pair.second << endl;  // Write item and frequency
        }

        outputFile.close();
        cout << "Data saved to " << dataFilePath << endl;
    }

   
    void printItemFrequency()  // Print item frequencies
    {
        for (const auto& pair : itemFrequency)
        {
            cout << pair.first << " " << pair.second << endl;  // Print item and frequency
        }
    }

    
    void printHistogram() // Print histogram of item frequencies
    {
        for (const auto& pair : itemFrequency)
        {
            cout << pair.first << " ";
            for (int i = 0; i < pair.second; i++)
            {
                cout << "*";  // Print asterisks based on frequency count
            }
            cout << endl;
        }
    }

    void run() // Main menu and program execution
    {
        string userInput;
        int choice;

        do
        {
            cout << "Menu Options:" << endl;
            cout << "1. Look up item frequency" << endl;
            cout << "2. Print item frequency list" << endl;
            cout << "3. Print item frequency histogram" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "Enter the item to look up: ";
                cin.ignore();  // Clear the input buffer
                getline(cin, userInput);
                cout << "Frequency of " << userInput << ": " << itemFrequency[userInput] << endl;
                break;
            case 2:
                printItemFrequency();
                break;
            case 3:
                printHistogram();
                break;
            case 4:
                saveDataToFile();
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        } while (choice != 4);  // Continue until the user chooses to exit
    }
};

int main()
{
    string inputFile = "CS210_Project_Three_Input_File.txt";
    ItemTracker tracker;
    tracker.processInputFile(inputFile);  // Process input data
    tracker.run();  // Run the program

    return 0;
}

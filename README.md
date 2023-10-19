# Frequency Counter
CS-210 8-1 Journal: Portfolio Submission

This is designed to track and manage item frequencies based on an input file.

    Class ItemTracker has the following private data members:
        itemFrequency: a map that stores the frequency of each item.
        dataFilePath: a string representing the file path for saving data.

    The constructor initializes the dataFilePath to a default value ("frequency.dat").

    processInputFile method reads an input file, increments the frequency count for each item, and stores the results in the itemFrequency map.

    saveDataToFile method saves the item frequencies to a file specified by dataFilePath.

    printItemFrequency method prints the list of items and their frequencies.

    printHistogram method prints a histogram of item frequencies using asterisks.

    The run method presents a menu to the user with the following options:
        Look up item frequency
        Print item frequency list
        Print item frequency histogram
        Exit

    Depending on the user's choice, the program interacts with the user to:
        Look up the frequency of a specific item.
        Print the list of items and their frequencies.
        Print a histogram of item frequencies.
        Save the data to a file.

    The program is executed in the main function. It specifies an input file, creates an ItemTracker object, processes the input data from the file, and then enters the main menu for user interaction.

    In summary, this program reads item data from an input file, allows users to query item frequencies, and provides options to display the frequencies and histograms. It also supports saving the data to an output file.



What was done particularly well:

    The code structure is organized into a class (ItemTracker) and follows object-oriented programming principles, making it easier to understand and maintain.
    The menu-driven user interface is clear and intuitive, making it easy for users to interact with the program.
    Error handling is implemented for file operations, ensuring that the program handles exceptions well.

Areas for enhancement:

    Error handling can be more robust. For instance, it could include handling non-integer input for menu choices and checking for file open failures more comprehensively.
    The code could be enhanced with comments and documentation to improve its readability and maintainability.
    Data validation could be improved, ensuring that user inputs are checked and cleaned.

Challenging pieces of code:

    Handling user input and input file processing can be challenging due to potential errors and edge cases. Careful validation and error checking are required.
    Handling exceptions raised during file operations and user input is a crucial part of maintaining code robustness.

Transferable skills:

    Object-oriented programming concepts and class design can be applied in various programming projects.
    Handling file I/O and user input is a fundamental skill applicable to a wide range of applications.

Making the program maintainable, readable, and adaptable:

    The use of a class structure with well-defined methods promotes maintainability and readability.
    Meaningful variable and method names enhance code readability.
    To make the program adaptable, you can further modularize the code, use comments to explain complex logic, and document the code properly for future reference.
    

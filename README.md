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

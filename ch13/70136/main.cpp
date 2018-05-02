/*
Write a program that asks the user for two file names.
The first file will be opened for input and the second file will be opened for output.
(It will be assumed that the first file contains sentences that end with a period.)
The program will read the contents of the first file and change all the letters to
lowercase except the first letter of each sentence, which should be made uppercase.
The revised contents should be stored in the second file.
*/
#include <iostream>
#include <fstream>
#include <string>

void capitalizeSentences(std::ifstream &, std::ofstream &);

int main()
{
    std::ifstream input;
    std::ofstream output;
    std::string infile;
    std::string outfile;
// get file names from user
    std::cin >> infile;
    std::cin >> outfile;

    std::cout << "infile: " << infile << std::endl;
    std::cout << "outfile: " << outfile << std::endl;
// try to open both files
    input.open(infile);
    if (!input)
    {
        std::cout << "Error could not open input file" << std::endl;
        return 1;
    }
    output.open(outfile);
    if (!output)
    {
        std::cout << "Error could not open output file" << std::endl;
        return 1;
    }

    capitalizeSentences(input, output);

    return 0;
}

void capitalizeSentences(std::ifstream & instream, std::ofstream & outstream)
{
    bool capitalized = false;

    while (!instream.eof())
    {
        std::string line;

        std::getline(instream, line);

        for (int i = 0; i < line.length(); i++)
        {
            if (capitalized == false)
            {
                line[i] = std::toupper(line[i]);
                capitalized = true;
            }
            if (line[i] == '.')
            {
                capitalized = false;
            }
        }

        outstream << line << std::endl;
    }
}
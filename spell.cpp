// Spells a string using the phonetic alphabet

#include <cctype>
#include <cstdlib>
#include <iostream>
#include <map>

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: " << argv[0] << " string_to_be_translated\n";
        std::exit(EXIT_FAILURE);
    }

    std::string str{argv[1]};
    std::map<char, std::string> dict;
    dict['A'] = "Alpha";
    dict['B'] = "Bravo";
    dict['C'] = "Charlie";
    dict['D'] = "Delta";
    dict['E'] = "Echo";
    dict['F'] = "Foxtrot";
    dict['G'] = "Golf";
    dict['H'] = "Hotel";
    dict['I'] = "India";
    dict['J'] = "Juliet";
    dict['K'] = "Kilo";
    dict['L'] = "Lima";
    dict['M'] = "Mike";
    dict['N'] = "November";
    dict['O'] = "Oscar";
    dict['P'] = "Papa";
    dict['Q'] = "Quebec";
    dict['R'] = "Romeo";
    dict['S'] = "Sierra";
    dict['T'] = "Tango";
    dict['U'] = "Uniform";
    dict['V'] = "Victor";
    dict['W'] = "Whiskey";
    dict['X'] = "X-ray";
    dict['Y'] = "Yankee";
    dict['Z'] = "Zulu";

    for (auto && elem : str)
    {
        std::cout << elem;
        if (std::isalpha(elem))
            std::cout << " - " << dict[std::toupper(elem)] << std::endl;
        else
            std::cout << std::endl;
    }
}
//
//  main.cpp
//  Find
//
//  Created by Brett Meyer on 4/24/16.
//  Copyright © 2016 Brett Meyer. All rights reserved.
//

#include <iostream>
//
//  main.cpp
//  studentdb
//
//  Created by Brett Meyer on 3/19/16.
//  Copyright © 2016 BDM. All rights reserved.
//
// reading a text file
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main (int argc, char* argv[]) {
    
    //check for correct number of args
    if (argc != 3) {
        cout << "Proper usage: findWord <word> <file>" << endl;
        cout << "where" << endl;
        cout << "  <word> is a sequence of non-whitespace characters" << endl;
        cout << "  <file> is the file in which to search for the word" << endl;
        cout << "example: findWord the test.txt" << endl;
        exit(1);
    }
    
    //vars
    string subStr = argv[1];
    string line;
    ifstream myfile;
    int counter = 1;
    int findCounter = 0;
    
    //get input file name
    myfile.open(argv[2]);
    
    //if file was successfully openned
    if (myfile.is_open())
    {
        cout << "Searching for '" << argv[1] << "' in file '" << argv[2] << "'" << endl;
        //while not EOF
        while (getline(myfile,line))
        {
            int k = 0;
            cout << counter << " : " << line << endl;
            for (int i = 0; i < line.size(); i++)
            {
                if (subStr[k] == line[i])
                {
                    if (k == subStr.size() - 1)
                    {
                        findCounter++;
                    }
                    else
                    {
                        k++;
                    }
                }
                //letter is not correct
                else
                {
                    k = 0;
                }
            }
            
        }
        cout << "# occurrences of '" << argv[1] << "' = " << findCounter << endl;
        //close file
        myfile.close();
    }
    //unable to open file
    else
    {
        cout << "Unable to open file";
    }
    
}
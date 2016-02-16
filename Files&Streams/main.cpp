#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char data[100];

    //open a file in write mode
    ofstream outfile;
    outfile.open("afile.dat");

    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);

    //write inputted data into a file
    outfile << data << endl;

    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();

    //again write inputted data into the file
    outfile << data << endl;

    //close the file
    outfile.close();

    //open file in read mode
    ifstream infile;
    infile.open("afile.dat");

    //write data to screen
    cout << "Reading from the file" << endl;
    infile >> data;
    cout << data << endl;

    //close the opened file
    infile.close();


    cout << "Hey, Beautiful!" << endl;
    return 0;
}

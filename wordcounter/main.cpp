#include <iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;

int main()
{
    cout<<"Welcome the word counter program\n";
    string name;
    cout<<"please enter the file name(make sure it is in the same directory): ";
    cin>>name;
    string file = name + ".txt";
    ifstream ifs(file);
    int words= 0;
    string word;
    while(ifs >> word)
    {
        words++;
    }
    cout<<"Number of words in this file is: "<<words<<endl;
    return 0;
}

#include <iostream>
#include <fstream>
#include "string"
#include <sstream>
using namespace std;

int main()
{
    int x=0, i=0;
    int numbers [10000];
    string line;
    fstream myfile;
    myfile.open ("data10k.txt");
    while(myfile.good()){
    getline (myfile,line );
    stringstream(line)>>x;
    numbers[i]=x;
    i++;
    }

    void();
    {
        int i, temp, j;
            for (i = 0; i < 10000; i++ )
            {
                for (j = 0; j < 10000; j++)
                {
                    if (numbers [i] < numbers [j])
                    {
                    temp = numbers[j];
                    numbers[j] = numbers [i];
                    numbers[i] = temp;
                    }
                }
            }
    }

    for (i=0;i<10000;i++)
    {
        cout<<numbers [i]<<endl;
    }

    myfile.close ();
    return 0;
};


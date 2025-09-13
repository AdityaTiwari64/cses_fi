#include <iostream>
#include <string>
using namespace std;

int main() {
    string c;
    int countA = 0, countC = 0, countG = 0, countT = 0; 
    
    cin >> c;
    
    for (int i = 0; i < c.length(); i++)  
    {
        if (c[i] == 'A')
        {
            countA++;
        }
        else if (c[i] == 'C')
        {
            countC++;
        }
        else if (c[i] == 'G')
        {
            countG++;
        }
        else if (c[i] == 'T') 
        {
            countT++;
        }
    }
    
   
    if (countA >= countC && countA >= countG && countA >= countT)
    {
        cout<< countA << endl;
    }
    else if (countC >= countA && countC >= countG && countC >= countT)
    {
        cout<< countC << endl;
    }
    else if (countG >= countA && countG >= countC && countG >= countT)
    {
        cout <<countG << endl;
    }
    else
    {
        cout <<countT << endl;
    }
    
    
    return 0;
}
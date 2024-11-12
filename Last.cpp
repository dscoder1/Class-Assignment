#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <typeinfo>
using namespace std;
fstream file;
void Val()
{
    string val;
    int num;
    bool good_flag = true;
    file.open("StoredVal.txt", ios::in);
    while (!file.eof())
    {
        getline(file, val, '\n');
        stringstream ss(val);
        ss >> num;
        if (num == 0)
        {
            good_flag = false;
        }
        if (good_flag == false)
        {
            return;
        }
        cout << num << endl;
    }
}

int main()
{
    Val();
    return 0;
}
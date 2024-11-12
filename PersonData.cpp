#include <iostream>
#include <string>
#include <fstream>
using namespace std;
fstream InputFile, OutputFile;
class Person
{
    string Salary;

public:
    void OpenFile()
    {
        InputFile.open("Input.txt", ios::in);
        OutputFile.open("Output.txt", ios::out | ios::app);
    }
    void Store()
    {
        string name, age, salary;
        while (!InputFile.eof())
        {
            getline(InputFile, name, '-');
            getline(InputFile, age, '-');
            getline(InputFile, salary, '\n');
            cout << salary << endl;
            this->Salary = to_string(stoi(salary) + (stoi(salary) * 0.10));
            cout << stoi(salary) << endl;
            OutputFile << "Person Name --" << name << endl;
            OutputFile << "Person Age --" << age << endl;
            OutputFile << "Person Salary After Giving Bonus --" << this->Salary << endl;
            OutputFile << "-----------------------------" << endl;
        }
    }
    void CloseFile()
    {
        InputFile.close();
        OutputFile.close();
    }
};
int main()
{
    Person Obj;
    Obj.OpenFile();
    Obj.Store();
    Obj.CloseFile();
    return 0;
}
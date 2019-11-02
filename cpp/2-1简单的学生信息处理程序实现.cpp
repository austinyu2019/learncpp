
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    string id;
    int age;
    int score1, score2, score3, score4;
    int average;
public:
    void init();
    void print();
};

void Student::init()
{
    char comma;
    getline(cin, name, ',');
    cin >> age >> comma;
    getline(cin, id, ',');
    cin >> score1 >> comma >> score2 >> comma >> score3 >> comma >> score4;
    average = (score1 + score2 + score3 + score4) / 4;
}

void Student::print()
{
    cout << name << ',' << age << ',' << id << ',' << average << endl;
}

int main()
{
    Student stu1;
    stu1.init();
    stu1.print();
    return 0;
}
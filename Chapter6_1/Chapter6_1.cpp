#include <iostream>

using namespace std;

#define NUM_STUDENTS 100000

void doSomething(int students_scores[20])
{
    cout << (int)&students_scores << '\n';
    cout << students_scores[0] << '\n';
    cout << students_scores[1] << '\n';
    cout << students_scores[2] << '\n';
}

int main()
{
    const int num_students = 20;
    //cin >> num_students;

    int students_scores[num_students] = {1, 2, 3, 4, 5, };
    
    cout << (int)students_scores << '\n';
    cout << (int)&students_scores << '\n';
    cout << students_scores[0] << '\n';
    cout << students_scores[1] << '\n';
    cout << students_scores[2] << '\n';


    doSomething(students_scores);


    return 0;
}

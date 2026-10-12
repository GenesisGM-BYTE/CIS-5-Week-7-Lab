#include <iostream>
using namespace std;

const int N = 5;

int main() {

    // -----------------------------------------
    // QUIZ ARRAY
    // -----------------------------------------
    int quiz[N] = {88, 91, 73, 95, 84};

    cout << "Quiz" << endl;

    int quizSum = 0;
    int quizHi = quiz[0];

    for (int i = 0; i < N; ++i) {
        cout << "[" << i << "] " << quiz[i] << endl;
        quizSum += quiz[i];
        if (quiz[i] > quizHi) {
            quizHi = quiz[i];
        }
    }

    cout << "Sum: " << quizSum << endl;
    cout << "High: " << quizHi << endl;


    // -----------------------------------------
    // LAB ARRAY
    // -----------------------------------------
    int lab[N] = {70, 82, 90, 90, 75};

    cout << "Lab" << endl;

    int labSum = 0;
    int labHi = lab[0];

    for (int i = 0; i < N; ++i) {
        cout << "[" << i << "] " << lab[i] << endl;
        labSum += lab[i];
        if (lab[i] > labHi) {
            labHi = lab[i];
        }
    }

    cout << "Sum: " << labSum << endl;
    cout << "High: " << labHi << endl;

    return 0;
}

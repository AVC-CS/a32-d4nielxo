#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numFemale, numMale, numOthers;
    double percF, percM, percO;

    cout << "Enter the number of students: Male, Female and Others";
    cin >> numMale >> numFemale >> numOthers;

    int total = numMale + numFemale + numOthers;

    percM = (static_cast<double>(numMale) / total) * 100.0;
    percF = (static_cast<double>(numFemale) / total) * 100.0;
    percO = (static_cast<double>(numOthers) / total) * 100.0;

    cout << setprecision(2) << fixed;
    cout << "Percentage of Male: " << percM << endl;
    cout << "Percentage of Female: " << percF << endl;
    cout << "Percentage of Others: " << percO << endl;

    return 0;
}

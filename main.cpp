#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int count;
    cout << "Enter number of problems solved today: ";
    cin >> count;

    ofstream file("leaderboard.txt", ios::app);
    if (file.is_open()) {
        file << "User: Swaraj, Problems Solved: " << count << "\n";
        cout << "Progress saved successfully!\n";
    } else {
        cout << "Error opening leaderboard file.\n";
    }

    file.close();
    return 0;
}
 

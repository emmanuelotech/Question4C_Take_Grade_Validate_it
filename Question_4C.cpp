#include <iostream>
using namespace std;

//Request any one using my program for the stored_grade_from_user 
int enter_the_stored_grade_from_user() {
    int stored_grade_from_user;
    do {
        cout << "Pleae enter stored_grade_from_user scored in class:(0-100): ";
        cin >> stored_grade_from_user;

        if (stored_grade_from_user < 0 || stored_grade_from_user > 100) {
            cout << "🫵 This is not right. Please enter a valid grade in range 0 to 100" << endl;
        }
    } while (stored_grade_from_user < 0 || stored_grade_from_user > 100);
    
    return stored_grade_from_user;
}

int main() {
    int stored_grade_from_user = enter_the_stored_grade_from_user();
    cout << "The grade entered is valid 👉 " << stored_grade_from_user << endl;
    
    return 0;
}

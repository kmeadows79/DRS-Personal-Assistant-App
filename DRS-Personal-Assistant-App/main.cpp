#include <iostream>

using namespace std;

void display_main_menu();
string get_user_selection();

int main() {
    string user_selection {};
    display_main_menu();
    user_selection = get_user_selection();
    cout << user_selection << endl;
    return 0;
}

void display_main_menu() {
    cout << "----------------------------------------------\n"
        << "|     DRS Personal Assistant Application     |\n"
        << "----------------------------------------------\n"
        << "\n"
        << "     1  Enter clocking\n"
        << "     2  View calendar\n"
        << "     3  Personal Assistant preferences\n"
        << "     4  Enter/view Consumer information\n"
        << "     Q  Quit\n"
        << "\n"
        << "Please make a selection from the menu above: ";
}

string get_user_selection() {
    string user_selection {};
    bool valid_selection {false};
    do {
        cin >> user_selection;
        if (user_selection > "0" && user_selection < "5") {
            valid_selection = true;
        } else if (user_selection == "Q" || user_selection == "q") {
            user_selection = "Q";
            valid_selection = true;
        } else {
            user_selection = "";
            cout << "\nInvalid selection.\n";
            display_main_menu();
        }
    } while (!valid_selection);
    return user_selection;
}
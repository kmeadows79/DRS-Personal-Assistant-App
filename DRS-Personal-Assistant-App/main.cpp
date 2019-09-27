#include <iostream>

using namespace std;

void display_main_menu();
char get_user_selection();

int main() {
    char user_selection {};
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
        << "     C  Enter clocking\n"
        << "     V  View calendar\n"
        << "     P  Personal Assistant preferences\n"
        << "     I  Enter/view Consumer information\n"
        << "     Q  Quit\n"
        << "\n"
        << "Please make a selection from the menu above: ";
}

char get_user_selection() {
    char user_selection {};
    cin >> user_selection;
    if (user_selection == '1' || user_selection == '2' || user_selection == '3' || user_selection == '4' || user_selection == 'Q') {
        
    } else {
        user_selection = '~';
    }
    return user_selection;
}
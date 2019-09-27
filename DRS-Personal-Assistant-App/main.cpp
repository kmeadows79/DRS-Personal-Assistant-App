#include <iostream>

using namespace std;

void clear_screen();
void display_main_menu();
char get_user_selection();

int main() {
    char user_selection {};
    clear_screen();
    do { //while (user_selection != 'Q')
        display_main_menu();
        user_selection = get_user_selection();
        clear_screen();
        switch (user_selection) {
            case '1'    :   cout << "Enter clocking\n";
                            break;
            case '2'    :   cout << "View calendar\n";
                            break;
            case '3'    :   cout << "Personal Assistant preferences\n";
                            break;
            case '4'    :   cout << "Enter/view Consumer information\n";
                            break;
            case 'Q'    :   cout << "Quit program\n";
                            break;
            default     :   cout << "Invalid selection\n";
                            break;
        } //switch (user_selection)
    } while (user_selection != 'Q');
    return 0;
}

void clear_screen() {
    cout << string(50, '\n');
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

char get_user_selection() {
    string user_selection {};
    bool valid_selection {false};
    do { //while (!valid_selection)
        cin >> user_selection;
        if (user_selection > "0" && user_selection < "5") {
            valid_selection = true;
        } else if (user_selection == "Q" || user_selection == "q") {
            user_selection = "Q";
            valid_selection = true;
        } else {
            user_selection = "";
            clear_screen();
            cout << "\nInvalid selection.\n\n\n";
            display_main_menu();
        }
    } while (!valid_selection);
    return user_selection[0];
}
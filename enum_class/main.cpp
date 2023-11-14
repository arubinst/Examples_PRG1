#include <iostream>
using namespace std;

int main() {
    // Using magic numbers
    int day = 1; // Example day
    cout << "Using magic numbers:" << endl;
    switch (day) {
        case 1: // Monday
            [[fallthrough]];
        case 2: // Tuesday
            [[fallthrough]];
        case 3: // Wednesday
            [[fallthrough]];
        case 4: // Thursday
            [[fallthrough]];
        case 5: // Friday
            cout << "Jour ouvrable" << endl;
            break;
        case 6: // Saturday
            [[fallthrough]];
        case 7: // Sunday
            cout << "Week-end" << endl;
            break;
        default:
            cout << "N/A" << endl;
            break;
    }

    // Using enum for better readability
    enum class Day { MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };
    Day dayEnum = Day::MONDAY; // Example day using enum

    cout << "\nUsing enum:" << endl;
    switch (dayEnum) {
        case Day::MONDAY: // fallthrough
        case Day::TUESDAY: // fallthrough
        case Day::WEDNESDAY: // fallthrough
        case Day::THURSDAY: // fallthrough
        case Day::FRIDAY:
            cout << "Jour ouvrable" << endl;
            break;
        case Day::SATURDAY: // fallthrough
        case Day::SUNDAY:
            cout << "Week-end" << endl;
            break;
        default:
            cout << "N/A" << endl;
            break;
    }

    return 0;
}

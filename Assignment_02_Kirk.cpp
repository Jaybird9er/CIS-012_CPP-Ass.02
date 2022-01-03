#include <iostream>

using namespace std;

int main ()
{
    // variable declarations
    double doorHeight = 0.0;
    double doorWidth = 0.0;
    double door = 0.0;
    double winHeight1 = 0.0;
    double winWidth1 = 0.0;
    double win1 = 0.0;
    double winHeight2 = 0.0;
    double winWidth2 = 0.0;
    double win2 = 0.0;
    double bShelfHeight = 0.0;
    double bShelfWidth = 0.0;
    double bShelf = 0.0;
    double rmLength = 0.0;
    double rmWidth = 0.0;
    double rmHeight = 0.0;
    double walls = 0.0;
    double paint = 0.0;

    // inputs
    cout << "Enter the height and width of the door: ";
    cin >> doorHeight >> doorWidth;
    cout << endl;
    cout << "Enter the height and width of the first window: ";
    cin >> winHeight1 >> winWidth1;
    cout << endl;
    cout << "Enter the height and width of the second window: ";
    cin >> winHeight2 >> winWidth2;
    cout << endl;
    cout << "Enter the height and width of the bookshelf: ";
    cin >> bShelfHeight >> bShelfWidth;
    cout << endl;
    cout << "Enter the length, width, and height of the room: ";
    cin >> rmLength >> rmWidth >> rmHeight;
    cout << endl;

    // math
    walls = (rmLength * rmHeight * 2) + (rmWidth * rmHeight * 2);
    door = doorHeight * doorWidth;
    win1 = winHeight1 * winHeight1;
    win2 = winHeight2 * winWidth2;
    bShelf = bShelfHeight * bShelfWidth;
    paint = (walls - door - win1 - win2 - bShelf) / 120;

    // output
    cout << "The amount of paint needed to paint the room: " << paint << " gallons" << endl;

    return 0;
}

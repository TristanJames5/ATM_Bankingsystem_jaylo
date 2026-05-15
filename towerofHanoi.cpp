#include<iostream>
using namespace std;

// Recursive function
void Tower_hanoi(int n, char from, char desti, char tempo){
   
void Tower_hanoi(int n, char source, char destination, char auxiliary){

    if (n == 0) return; 
    Tower_hanoi(n - 1, from, tempo, desti); //move n-1 disks to temporary holder
    cout << "Move disk " << n << " from " << from << " to " << desti << endl;
    Tower_hanoi(n - 1,tempo, desti, from); //move n-1 disks to destination
    Tower_hanoi(n - 1, source, auxiliary, destination); // move n-1 disks to auxiliary rod
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    Tower_hanoi(n - 1, auxiliary, destination, source); // move n-1 disks to destination rod
}

int main() {
    int n;
    cout<< "Enter number of disks: ";
    cin >>n;
    if (!(cin >> n) || n < 0) {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
        return 1;
    }

    if (n == 0) {
        cout << "No disks to move." << endl;
        return 0;
    }

    cout << "\nSteps:\n";
    Tower_hanoi(n, 'A', 'C', 'B'); // A for the source, C for destination, B for temporary
    Tower_hanoi(n, 'A', 'C', 'B'); // A: source, C: destination, B: auxiliary

    cout << "\nTotal moves: " << ((1 << n) - 1) << endl; 

    return 0;
}
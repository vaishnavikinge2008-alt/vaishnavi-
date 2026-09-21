#include <iostream>
using namespace std;

int main() {
int roll numbers[5];
int searchrollno;
bool found = false;

cout << "Enter the roll numbers of 5 students:" << endl;
for int ( i = 0; i < 5; i++) {
cout << "student" << (i+1) <<": ";

cin >> roll numbers[i];
}

cout << "\n Enter the roll numbers you want to search for:";
cin >> searchRollno;

for (int i = 0; i < 5; i++) {
if (roll numbers[i] == searchRollno ) {
found == true;
break;
}
}
 if (found) {
 cout << "student found" << endl;
 } else {
 cout << "student not found " << endl;
 }
 return 0;
 }

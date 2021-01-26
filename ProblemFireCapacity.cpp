/*
This program asks for the maximum occupants allowed inside a meeting room per legal requirements and the number of
attendees for a given meeting. The program interprets those inputs and outputs whether or not the meeting is
or is not in violation of fire saftey codes.
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  short numPeopleToAttend;
  short maxRoomCapacity;

  cout << "Enter the legal maximum room capacity for the meeting room: ";
  cin >> maxRoomCapacity;

  cout << "Enter the number of people that are expected to attend the meeting: ";
  cin >> numPeopleToAttend;

  cout << endl;

  if(numPeopleToAttend > maxRoomCapacity){
    cout << "This meeting is in violation of fire safety regulations and cannot be held." << endl;
    cout << numPeopleToAttend - maxRoomCapacity << " attendee(s) must be removed in order to be in compliance." << endl;
  }

  else if(numPeopleToAttend < maxRoomCapacity){
    cout << "This meeting is in compliance with fire safety regulations." << endl;
    cout << "By law you are allowed an additional " << maxRoomCapacity - numPeopleToAttend << " person(s)." << endl;
  }

  else{
    cout << "This meeting is in compliance with fire safety regulations." << endl;
  }

  return 0;
}

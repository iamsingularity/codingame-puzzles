#include <iostream>

#include "../../src/referee.cpp"

using namespace std;

int main() {
  Referee referee;
  referee.readGameInfo();
  Referee refereeCopy(referee);

  vector<Action*> actions0 = {new Action(), new Action(), new Action()};
  refereeCopy.assignActions(0, actions0);

  int power = MAX_THRUST;

  vector<Action*> actions1 = {
    new Action(-2268, -1468, false, power, "TEST"),
    new Action(87, 2270, false, power, "TEST"),
    new Action(1291, -1466, false, power, "TEST")
  };
  refereeCopy.assignActions(1, actions1);

  vector<Action*> actions2 = {
    new Action(2674, -1154, false, power, "TEST"),
    new Action(-765, -413, "TEST"),
    new Action(-2685, 4745, false, power, "TEST")
  };
  refereeCopy.assignActions(2, actions2);

  refereeCopy.updateGame();

  cout << refereeCopy.toString();
}

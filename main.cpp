#include "tricktrack/SpacePoint.h"
#include "tricktrack/CellularAutomaton.h"

int main() {
  auto a = tricktrack::SpacePoint<size_t>( 0, 0, 0,0);
  auto g = tricktrack::CAGraph();
  auto c = tricktrack::CellularAutomaton(g);
  }

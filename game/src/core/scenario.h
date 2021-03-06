#ifndef SCENARIO_H_
#define SCENARIO_H_

#include "resource_manager.h"
#include "util/common.h"

namespace mengde {
namespace core {

class Assets;
class Game;

// Scenario data globally used during the entire scenario

class Scenario {
 public:
  Scenario(const string&);
  ~Scenario();
  const ResourceManagers& GetResourceManagers() { return rc_; }
  Assets*                 GetAssets() { return assets_; }
  Game*                   GetGame() { return game_; }

 private:
  Game* NewGame(const string&, const string&);
  Game* LoadGame(const string&, const string&);

 private:
  ResourceManagers rc_;
  Assets*          assets_;
  Game*            game_;
};

}  // namespace core
}  // namespace mengde

#endif  // SCENARIO_H_

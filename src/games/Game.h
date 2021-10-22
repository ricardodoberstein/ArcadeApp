#ifndef GAMES_GAME_H_
#define GAMES_GAME_H_

#include <string>
#include <stdint.h>
#include "../input/GameController.h"
#include "../graphics/Screen.h"

class Game
{
public:
  //virtual ~Game();
  virtual void Init(GameController& controller) = 0;
  virtual void Update(uint32_t dt) = 0;
  virtual void Draw(Screen& screen) = 0;
  virtual const std::string& GetName() = 0;
};

#endif
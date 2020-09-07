#ifndef KIRAJINGUARDTOWER_H
#define KIRAJINGUARDTOWER_H

#include <SFML/Graphics.hpp>
#include "../../../../Config.h"
#include "../../Entity.h"

using namespace std;

class KirajinGuardTower : public Entity
{
    public:
    bool dead = false;
    bool droppeditem = false;
    float shake = 0;
    bool negative = false;
    sf::Clock death_timer;
    sf::Clock shake_timer;
    float shake_delay = 80;

    KirajinGuardTower();
    void LoadConfig(Config *thisConfigs);
    void Draw(sf::RenderWindow& window);
    void OnCollide(CollidableObject* otherObject, int collidedWith=-1, vector<string> collisionData = {});
};

#endif // KIRAJINGUARDTOWER_H
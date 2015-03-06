#ifndef PARTICLE_H
#define PARTICLE_H

#include <SFML/System/Vector2.hpp>
#include <SFML/System/Time.hpp>
#include <SFML/Graphics/Color.hpp>

class Particle {
public:
  enum Type {
    Explosion,
    Trail,
    TypeCount,
  };
  Particle(sf::Vector2f position, sf::Color color, sf::Time lifetime);
  void update(sf::Time dt);

  sf::Vector2f get_position() const;
  sf::Color get_color() const;
  sf::Time get_lifetime() const;

private:
  sf::Vector2f position;
  sf::Color color;
  sf::Time lifetime;
};

#endif // PARTICLE_H

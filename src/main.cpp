#include <../SFML/Graphics.hpp>
#include <../SFML/Window.hpp>
#include <iostream>
#include <string>

class Card {
public:
    std::string Name;
    sf::Texture Texture;
    int Health;
    int Damage;
    float SpeedDmg;
    float SpeedMov;
    float MassWeight;
    float KnockBack;
    std::string Type;
    int Cost;
    float Range;
    
    Card(std::string CardName, const std::string CardTexture, int CardHealth, int CardDamage, float CardSpeedDmg, float CardSpeedMov, float CardMassWeight, float CardKnockBack, std::string CardType, int CardCost, float CardRange):
    Name(CardName), Texture(CardTexture), Health(CardHealth), Damage(CardDamage), SpeedDmg(CardSpeedDmg), SpeedMov(CardSpeedMov), MassWeight(CardMassWeight), KnockBack(CardKnockBack), Type(CardType), Cost(CardCost), Range(CardRange) {
        if(Health <= 0 && Type != "Spell") {
            std::cout << "The card has no health left" << std::endl;
        } else if(Health <= 0 && Type == "Trainer") {
            std::cout << "You lose" << std::endl;
        }
        
        if(!Texture.loadFromFile(CardTexture.c_str())) {
            std::cerr << "Error on load texture" << std::endl;
        }
    }
};

int CardsList() {
    Card Card1("Pirate", "../assets/cards/card1.png", 910, 73, 1.24f, 3.1f, 73, 0, "Trainer", 5, 1);
    Card Card2("Indians", "../assets/cards/card2.png", 222, 34, 1, 3, 60, 56, "Troop", 3, 5.5f);
    Card Card3("Reaper Girl", "../assets/cards/card3.png", 590, 60, 1.18f, 3.3f, 64.3f, 55, "Troop", 4, 1.5f);
    Card Card4("Cannon", "../assets/cards/card4.png", 700, 66, 1, 0, 200, 61, "Building", 3, 5);
    Card Card5("Capybara", "../assets/cards/card5.png", 555, 66, 1.5f, 3.8f, 60, 40, "Troop", 4, 1.25f);
    Card Card6("Tsunami", "../assets/cards/card6.png", 0, 95, 0.1f, 4.5f, 0, 80.5f, "Spell", 4, 1.1f);
    
    return 0;
}
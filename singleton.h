//
// Created by denis on 05.04.18.
//

#ifndef MIPT_APP_SINGLETON_H
#define MIPT_APP_SINGLETON_H

class Application
{
private:
    Application(){};
    Application(const OnlyOne& root) = delete;
    Application& operator=(const OnlyOne&) = delete;
public:

    std::vector<GameObject> Objects;
    sf::RenderWindow window(sf::VideoMode mode, const std::string name);
    float CurrentTime = 0;
    float LastTime = 0;

    void addObject(GameObject Object){
        this -> Objects.push_back(Object);
    }


    static Application& getInstance()
    {
        static Application Instance;
        return Instance;
    }
};

#endif //MIPT_APP_SINGLETON_H

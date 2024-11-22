#ifndef CHEF_H
#define CHEF_H

#include <string>
#include <iostream>

class Chef {
public:
    Chef(const std::string& name);
    ~Chef();

    void makeSalad();
    void makeSoup();

protected:
    std::string name;
};

#endif // CHEF_H

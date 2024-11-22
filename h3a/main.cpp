#include "Chef.h"
#include "ItalianChef.h"

int main() {
    {
        // Ensimmäinen lohko: Chef Gordon Ramsay
        Chef chef("Gordon Ramsay");
        chef.makeSalad();
        chef.makeSoup();
        // Chef-olion elinkaari päättyy tässä, ja destruktori kutsutaan
    }

    {
        // Toinen lohko: ItalianChef Anthony Bourdain
        ItalianChef italianChef("Anthony Bourdain");
        italianChef.makeSalad();
        italianChef.makeSoup();
        italianChef.makePasta();
        std::cout << "name of the Italian Chef is " << italianChef.getName() << std::endl;
        // ItalianChef-olion elinkaari päättyy tässä, ja destruktori kutsutaan
    }

    return 0;
}

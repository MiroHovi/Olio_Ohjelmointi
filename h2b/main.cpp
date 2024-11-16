#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Car {
private:
    string brand;   // Car brand
    string model;   // Car model
    int yearModel;  // year

public:
    // initialize variables
    Car(string b, string m, int y) : brand(b), model(m), yearModel(y) {}

    // Print details
    void printData() const {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << yearModel << endl;
    }
};

int main() {
    // Vector list
    vector<Car> carList;

    Car car1("Mercedes- Benz", "E3003", 2023);
    Car car2("Ford", "Mustang", 1975);
    Car car3("BMW", "E90", 2006);

    // Adding details to list
    carList.push_back(car1);
    carList.push_back(car2);
    carList.push_back(car3);

    // Print the details of the second car in the list
    cout << "Second car in the list:" << endl;
    carList[1].printData();

    cout << "\nAll cars in the list:" << endl;
    for (int i = 0; i < carList.size(); i++) {
        carList[i].printData();
    }

    return 0;
}


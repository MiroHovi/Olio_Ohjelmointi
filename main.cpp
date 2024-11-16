#include <iostream>
#include <string>
#include <memory>

// Step 1 car
class Car {
private:
    std::string brand;
    std::string model;
    int yearModel;

public:

    void setBrand(const std::string& brandName) {
        brand = brandName;
    }

    void setModel(const std::string& modelName) {
        model = modelName;
    }

    void setYearModel(int year) {
        yearModel = year;
    }


    void printData() const {
        std::cout << "Car Brand: " << brand
                  << ", Model: " << model
                  << ", Year: " << yearModel << std::endl;
    }
};

// Step 2 Rectangle
class Rectangle {
private:
    double width;
    double height;

public:

    void setWidth(double w) {
        width = w;
    }

    void setHeight(double h) {
        height = h;
    }


    double getArea() const {
        return width * height;
    }

    double getCircum() const {
        return 2 * (width + height);
    }
};

// step 3 student
class Student {
private:
    std::string name;
    int studentNumber;
    double average;

public:
     // Setter
    void setName(const std::string& studentName) {
        name = studentName;
    }

    void setStudentNumber(int number) {
        studentNumber = number;
    }

    void setAverage(double avg) {
        average = avg;
    }

    // Getter
    std::string getName() const {
        return name;
    }

    int getStudentNumber() const {
        return studentNumber;
    }

    double getAverage() const {
        return average;
    }
};


int main() {
    // Step 1
    Car car;
    car.setBrand("Mercedes-Benz");
    car.setModel("E3003");
    car.setYearModel(2023);
    car.printData();

    // Step 2
    Rectangle* rect = new Rectangle();
    rect->setWidth(7.0);
    rect->setHeight(5.0);

    std::cout << "Rectangle Area: " << rect->getArea() << std::endl;
    std::cout << "Rectangle Circumference: " << rect->getCircum() << std::endl;

    delete rect;

    // Step 3
    std::unique_ptr<Student> student = std::make_unique<Student>();
    student->setName("Miro Hovi");
    student->setStudentNumber(12345);
    student->setAverage(3.7);

    std::cout << "Student Name: " << student->getName() << std::endl;
    std::cout << "Student Number: " << student->getStudentNumber() << std::endl;
    std::cout << "Student Average: " << student->getAverage() << std::endl;

    return 0;
}

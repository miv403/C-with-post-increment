#include <iostream>
#include <cstdio>


struct salesCalc {
    salesCalc() {
        baseSalary = 200;
        salary = 0;
        sales = 0;
        printf("Enter sales: ");
        std::cin >> sales;
    }

    double calcSalary() {
        salary = baseSalary + (sales * 0.09);
        return salary;
    }

private:
    double baseSalary;
    double salary;
    double sales;

};

int main() {

    salesCalc calculator{};
    puts("");
    std::cout << "Salary: " << calculator.calcSalary() << "\n";

    return 0;
}

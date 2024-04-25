#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "PhoneCall.h"




int main() {
    std::string searchNumber;

    std::cout << "Enter the phone number to search: ";
    std::cin >> searchNumber;

    std::ifstream inputFile("/Users/carl/Library/CloudStorage/OneDrive-UniversityofSouthAfrica/Unisa/Code/COS1512/test6/MyCalls.dat");
    if (!inputFile) {
        std::cerr << "Error opening input file." << std::endl;

        return 1;
    }

    std::vector<PhoneCall> calls;
    PhoneCall longestCall;
    float totalAmount = 0;
    int callCount = 0;

    PhoneCall theCall(searchNumber);
    PhoneCall currentCall;

    while (inputFile >> currentCall) {
        calls.push_back(currentCall);

        if (currentCall == theCall) {
            totalAmount += currentCall.calcCharge();
            callCount++;

            if (currentCall.getLength() > longestCall.getLength()) {
                longestCall = currentCall;
            }
        }
    }

    inputFile.close();

    std::cout << "Phone calls to number " << searchNumber << ":" << std::endl;
    for (const PhoneCall& call : calls) {
        if (call.getNumber() == searchNumber) {
            std::cout << call << std::endl;
        }
    }

    std::cout << "\nTotal amount spent: $" << totalAmount << std::endl;
    std::cout << "Number of calls: " << callCount << std::endl;
    std::cout << "Longest call to " << searchNumber << ": " << longestCall << std::endl;

    return 0;
}

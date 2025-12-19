#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

std::string turkify(int num) {
    string units[] = {"sıfır", "bir", "iki", "üç", "dört", "beş", "altı", "yedi", "sekiz", "dokuz",};
    string tens[] = {"", "on", "yirmi", "otuz", "kırk", "elli", "altmış", "yetmiş", "seksen", "doksan",};

    if (num < 0 || 99 < num) throw runtime_error("The number MUST be between 0 and 99, no exceptions.");

    return tens[num / 10] + ((num < 10 || !(num % 10))? "": " ") + ((!(num % 10) && num / 10)? "" : units[num % 10]);
}
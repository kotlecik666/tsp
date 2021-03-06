//
// Created by corni on 08.11.2016.
//

#include <cstdlib>
#include <ctime>
#include <vector>
#include "Point.h"
using namespace std;

std::vector <Point> generate(int n) {
    std::vector <Point> points;

    srand((unsigned)time(NULL));

    for (int i = 0; i < n; i++){
        points.push_back(Point(i+1, 1+rand()%999, 1+rand()%999));
    }

    return points;
}

int main(int argc, char **argv) {
    int n;
    if (argc < 2) {
        cerr << "Podaj liczbę punktów do wygenerowania jako parametr!" << endl;
        return 1;
    }
    n = atoi(argv[1]); // n is set to 0 if it can't be converted
    if (n < 2) {
        cerr << "Należy wygenerować co najmniej dwa punkty!" << endl;
        return 1;
    }

    auto points = generate(n);
    cout << n << endl;
    for (auto point: points) {
        cout << point << endl;
    }

    return 0;
}
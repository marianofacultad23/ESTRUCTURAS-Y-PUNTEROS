#include <iostream>
using namespace std;

template <typename T, typename U>
auto miMax(T x, U y) {
    return (x > y) ? x : y;
}

int main() {

    cout << miMax(1, '2') << endl;

    return 0;
}

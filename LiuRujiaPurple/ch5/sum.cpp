#include <iostream>
using namespace std;

template<typename T>
T sum(T* begin, T* end)
{
    T* p = begin;
    T ans = 0;
    for(T* p = begin; p != end; p++)
    {
        ans = ans + *p;
    }

    return ans;
}

template <typename T>
struct Point
{
    T x, y;
    Point(T x=0, T y=0):x(x),y(y) {}
};

template <typename T>
Point<T> operator + (const Point<T>& A, const Point<T>& B)
{
    return Point<T>(A.x+B.x, A.y+B.y);
}

template <typename T>
ostream operator << (ostream& out, const Point<T>& p)
{
    out << "(" << p.x << "," << p.y << ")";
    return out;
}

int main(int argc, char const *argv[]) {
    double a[] = {1.1, 2.2, 3.3, 4.4};
    cout << sum(a, a+4) << "\n";
    Point b[] = {Point(1, 2), Point(3, 4), Point(5, 6), Point(7, 8)};
    cout << sum(b, b+4) << "\n";
    return 0;
}

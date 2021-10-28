// Lab_5-5 
#include <iostream>
// піду втоплюся у річці глибокій
using namespace std;
double f(double x)
{
    return sin(x) - cos(x);
}


double D(double a, double b, double eps, int level, int& depth)
{
    if (level > depth)
        depth = level;
    double m = (a + b) / 2;
    
    if (a < b && f(a) * f(b) < 0) {
        if ((b - a) > eps)
        {
            if (f(m) == 0)
                return m;
            else
                if (f(a) * f(m) < 0)
                    return D(a, m, eps, level + 1, depth);
                else
                    return D(m, b, eps, level + 1, depth);
        }
    }
    else
        cout << "invalid function" << endl;
    return m;
}
   

int main()
{
    double a, b, eps;
    int depth;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "eps = "; cin >> eps;
    cout << "D() = " << D(a, b, eps, 1, depth) << endl;
    cout << "depth = " << depth << endl;
    return 0;
}

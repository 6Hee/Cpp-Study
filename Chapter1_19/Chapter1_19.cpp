#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>


int main()
{
    using namespace std;

    double zero = 0.0;
    double posinf = 5.0 / zero;
    double neginf = -5.0 / zero;
    double nan = zero / zero;

    cout << posinf << " " << std::isinf(posinf) << endl;
    cout << neginf << " " << std::isinf(neginf) << endl;
    cout << nan << " " << std::isnan(nan) << endl;
    cout << 1.0 << " " << std::isnan(1.0) << endl;



    //double d1(1.0); // 10 significant digits
    //double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

    //cout << setprecision(17);
    //cout << d1 << endl;
    //cout << d2 << endl;





    //float f(3.141592f); // 3.14 = 31.4 * 0.1

    //cout << 3.14 << endl;
    //cout << 31.4e-1 << endl;
    //cout << 31.4e-2 << endl;
    //cout << 31.4e1 << endl;
    //cout << 31.4e2 << endl;

    /*cout << numeric_limits<float>::lowest() << endl;
    cout << numeric_limits<double>::lowest() << endl;
    cout << numeric_limits<long double>::lowest() << endl;*/

    return 0;
}

// 부동소수점 수
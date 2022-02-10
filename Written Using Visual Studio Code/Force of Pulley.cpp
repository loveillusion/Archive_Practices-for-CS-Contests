#include <iostream>
#include <math.h>
#include <cstdio>

using namespace std;

int main() {
    const double pi = 3.14159265359;
    double t, ra1, ra2;

    cout << "Input tension: ";
    cin >> t;

    cout << "Input angle of first ramp: ";
    cin >> ra1;
    ra1 = ra1 * pi / 180;

    cout << "Input angle of second ramp: ";
    cin >> ra2;
    ra2 = ra2 * pi / 180;

    double vertical, horizontal, ans, ang;

    vertical = sin(ra1) * t + sin(ra2) * t;

    horizontal = cos(ra2) * t - cos(ra1) * t;

    ans = sqrt(vertical*vertical + horizontal*horizontal);

    ang = atan(horizontal / vertical);
    ang = ang * 180 / pi;
 
    cout << "The vertical component is: " << vertical << "\n";
    cout << "The horizontal component is: " << horizontal << "\n";
    cout << "The answer is: " << ans << "\n";
    cout << "The angle is: [U " << ang << " L] \n";

    cout << "Type in anything to quit. \n";
    string anything;
    cin >> anything;
}
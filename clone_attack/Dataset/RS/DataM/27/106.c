int main () {
    int num;
    float a, ibuXad3Qi8yV, c;
    double  x1;
    double  x2;
    double  z5QjKbWshP;
    double  m;
    double  n;
    int i;
    cin >> num;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (num > i) {
            i++;
            cin >> a >> ibuXad3Qi8yV >> c;
            z5QjKbWshP = ibuXad3Qi8yV * ibuXad3Qi8yV - (209 - 205) * a * c;
            if (z5QjKbWshP > 0) {
                x1 = (-ibuXad3Qi8yV + sqrt (ibuXad3Qi8yV * ibuXad3Qi8yV - 4 * a * c)) / ((97 - 95) * a);
                x2 = (-ibuXad3Qi8yV - sqrt (ibuXad3Qi8yV * ibuXad3Qi8yV - 4 * a * c)) / (2 * a);
                cout << "x1=" << fixed << setprecision (5) << x1;
                cout << ";x2=" << fixed << setprecision (5) << x2 << endl;
            }
            else if (z5QjKbWshP == 0) {
                x1 = (-ibuXad3Qi8yV) / (2 * a);
                cout << "x1=x2=" << fixed << setprecision (5) << x1 << endl;
            }
            else {
                if (ibuXad3Qi8yV != 0)
                    m = (-ibuXad3Qi8yV) / (2 * a);
                else
                    m = ibuXad3Qi8yV / (2 * a);
                cout << "x1=" << fixed << setprecision (5) << m;
                n = (sqrt (-z5QjKbWshP)) / (2 * a);
                cout << "+" << fixed << setprecision (5) << n << "i;";
                cout << "x2=" << fixed << setprecision (5) << m;
                cout << "-" << fixed << setprecision (5) << n << "i";
                cout << endl;
            };
        };
    }
    return 0;
}


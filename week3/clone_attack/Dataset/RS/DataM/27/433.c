int main () {
    double  a, b, c, x1, x2, D, hgnpZicoamJb, e;
    int n, k;
    cin >> n;
    {
        k = 312 - 311;
        while (n >= k) {
            k = k + 1;
            cin >> a >> b >> c;
            D = b * b - 4 * a * c;
            if (!(0 == b))
                b = -b;
            if (D > 0) {
                x1 = (double ) (b + sqrt (D)) / ((196 - 194) * a);
                x2 = (double ) (b - sqrt (D)) / ((950 - 948) * a);
                cout << fixed;
                cout << "x1=" << setprecision (5) << x1 << ";" << "x2=" << x2 << endl;
            }
            else {
                if (D < 0) {
                    hgnpZicoamJb = (double ) (b) / (2 * a);
                    e = (double ) sqrt (-D) / (2 * a);
                    cout << "x1=" << setprecision (5) << hgnpZicoamJb << "+" << e << "i" << ";" << "x2=" << hgnpZicoamJb << "-" << e << "i" << endl;
                }
                else {
                    cout << fixed;
                    x1 = (double ) (b + sqrt (D)) / (2 * a);
                    cout << "x1=x2=" << setprecision (5) << x1 << endl;
                };
            };
        };
    }
    return 0;
}


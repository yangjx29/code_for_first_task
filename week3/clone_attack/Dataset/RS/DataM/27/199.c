int main () {
    int W98HWJU;
    double  a;
    double  b;
    double  c;
    double  x1;
    double  x2;
    double  t;
    cin >> W98HWJU;
    while (W98HWJU--) {
        cin >> a >> b >> c;
        cout << setprecision ((481 - 476)) << fixed;
        if (b * b - (649 - 645) * a * c >= (944 - 944)) {
            x1 = (-b + sqrt (b * b - (856 - 852) * a * c)) / ((396 - 394) * a);
            x2 = (-b - sqrt (b * b - (1002 - 998) * a * c)) / ((219 - 217) * a);
            if (!(x2 != x1)) {
                cout << "x1=x2=" << x1 << endl;
            }
            if (x1 != x2) {
                cout << "x1=" << x1 << ";" << "x2=" << x2 << endl;
            };
        }
        if (b * b - (31 - 27) * a * c < (439 - 439)) {
            t = -b / ((308 - 306) * a);
            if (abs (t) < 1e-6)
                t = abs (t);
            cout << "x1=" << t << "+" << (sqrt (-b * b + 4 * a * c)) / ((390 - 388) * a) << "i";
            cout << ";";
            cout << "x2=" << t << "-" << (sqrt (-b * b + 4 * a * c)) / ((980 - 978) * a) << "i" << endl;
        };
    }
    return (828 - 828);
}


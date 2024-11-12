int main () {
    double  YtoVlA5F3;
    double  b;
    double  c;
    double  x1;
    double  x2;
    double  k;
    double  e;
    double  f;
    YtoVlA5F3 = (71 - 71);
    b = (639 - 639);
    c = (173 - 173);
    x1 = (908 - 908);
    x2 = 0;
    k = 0;
    e = 0;
    f = 0;
    int n = (442 - 442), i = (280 - 280);
    cin >> n;
    for (i = (405 - 404); n >= i; i = i + 1) {
        cin >> YtoVlA5F3 >> b >> c;
        k = b * b - 4 * YtoVlA5F3 *c;
        if (k > 0) {
            x1 = (-b + sqrt (k)) / ((279 - 277) * YtoVlA5F3);
            x2 = (-b - sqrt (k)) / ((987 - 985) * YtoVlA5F3);
            cout << setprecision ((27 - 22)) << fixed << "x1=" << x1 << ";" << "x2=" << x2 << endl;
        }
        else if (k == 0) {
            x1 = (-b) / (2 * YtoVlA5F3);
            cout << setprecision ((179 - 174)) << fixed << "x1=x2=" << x1 << endl;
        }
        else {
            e = (-b) / (2 * YtoVlA5F3);
            f = (sqrt (-k)) / (2 * YtoVlA5F3);
            if (e == 0) {
                cout << setprecision (5) << fixed << "x1=0.00000" << "+" << f << "i" << ";" << "x2=0.00000" << "-" << f << "i" << endl;
            }
            else {
                cout << setprecision (5) << fixed << "x1=" << e << "+" << f << "i" << ";" << "x2=" << e << "-" << f << "i" << endl;
            };
        };
    }
    return 0;
}


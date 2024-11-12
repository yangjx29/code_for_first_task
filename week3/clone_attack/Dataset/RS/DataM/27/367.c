int main () {
    int sroBe2QJOb, YPAcuqBmaR;
    double  a;
    double  b;
    double  CutzkqTlwbjG;
    double  oHV7yDi6G;
    double  x2;
    double  panDuan;
    cin >> sroBe2QJOb;
    for (YPAcuqBmaR = 1; sroBe2QJOb >= YPAcuqBmaR; YPAcuqBmaR = YPAcuqBmaR +1) {
        cin >> a >> b >> CutzkqTlwbjG;
        panDuan = b * b - 4 * a * CutzkqTlwbjG;
        if (0 < panDuan) {
            cout << fixed << setprecision (5);
            oHV7yDi6G = (-b + sqrt (panDuan)) / (2 * a);
            if (((144.00001 - 144.0) <= oHV7yDi6G) || (-(254.00001 - 254.0) >= oHV7yDi6G))
                cout << "x1=" << oHV7yDi6G << ";";
            else
                cout << "x1=" << "0.00000" << ";";
            x2 = (-b - sqrt (panDuan)) / (2 * a);
            if ((0.00001 <= x2) || (x2 <= -0.00001))
                cout << "x2=" << x2 << endl;
            else
                cout << "x2=" << "0.00000" << endl;
        }
        else if (panDuan < 0) {
            double  uAkbWfR4h, xuBu;
            cout << fixed << setprecision (5);
            uAkbWfR4h = (-b) / (2 * a);
            xuBu = sqrt (-panDuan) / (2 * a);
            if ((uAkbWfR4h >= 0.00001) || (uAkbWfR4h <= -0.00001)) {
                cout << "x1=" << uAkbWfR4h << "+" << xuBu << "i;";
                cout << "x2=" << uAkbWfR4h << "-" << xuBu << "i" << endl;
            }
            else {
                cout << "x1=" << "0.00000+" << xuBu << "i;";
                cout << "x2=" << "0.00000-" << xuBu << "i" << endl;
            };
        }
        else {
            double  x = (-b) / (2 * a);
            if ((x >= 0.00001) || (x <= -0.00001))
                cout << fixed << setprecision (5) << "x1=x2=" << x << endl;
            else
                cout << "x1=x2=" << (49.0 - 49.0) << endl;
        };
    }
    return 0;
}


int main () {
    double  a, eGAIdC2RvSrL, c, d, ZJ2vkSzny, XVr7b5X1;
    int MuAbqSy5tJ;
    cin >> MuAbqSy5tJ;
    {
        int i = 1;
        while (MuAbqSy5tJ >= i) {
            cin >> a >> eGAIdC2RvSrL >> c;
            d = eGAIdC2RvSrL * eGAIdC2RvSrL - 4 * a * c;
            if (d >= (339 - 339)) {
                if (d <= 0) {
                    XVr7b5X1 = -eGAIdC2RvSrL / ((852 - 850) * a);
                    cout << fixed;
                    cout << setprecision (5) << "x1=x2=" << XVr7b5X1 << endl;
                }
                else {
                    cout << fixed;
                    d = sqrt (d);
                    ZJ2vkSzny = (-eGAIdC2RvSrL + d) / (2 * a);
                    XVr7b5X1 = (-eGAIdC2RvSrL - d) / (2 * a);
                    cout << setprecision (5) << "x1=" << ZJ2vkSzny << ";x2=" << XVr7b5X1 << endl;
                };
            }
            else {
                d = sqrt (-d) / (2 * a);
                eGAIdC2RvSrL = -eGAIdC2RvSrL / (2 * a);
                if (eGAIdC2RvSrL == 0) {
                    cout << fixed;
                    cout << setprecision (5) << "x1=0.00000+" << d << "i" << ";x2=0.00000-" << d << "i" << endl;
                }
                else {
                    cout << fixed;
                    cout << setprecision (5) << "x1=" << eGAIdC2RvSrL << "+" << d << "i" << ";x2=" << eGAIdC2RvSrL << "-" << d << "i" << endl;
                };
            }
            i++;
        };
    }
    return 0;
}


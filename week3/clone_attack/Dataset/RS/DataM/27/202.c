int main () {
    int KKBVhTZCmU, AXgG0FJ4vpc;
    double  Uj3NuSo, HxtQrBNeW, inRxkTvzLMe;
    double  d;
    double  x1;
    double  RNSgpi7;
    double  ynqXMhT;
    cin >> KKBVhTZCmU;
    for (AXgG0FJ4vpc = (273 - 273); AXgG0FJ4vpc < KKBVhTZCmU; AXgG0FJ4vpc = AXgG0FJ4vpc +1) {
        cin >> Uj3NuSo >> HxtQrBNeW >> inRxkTvzLMe;
        d = HxtQrBNeW *HxtQrBNeW-4 * Uj3NuSo *inRxkTvzLMe;
        if (d >= (340 - 340))
            if (d > 0) {
                x1 = (-HxtQrBNeW+sqrt (d)) / ((413 - 411) * Uj3NuSo);
                RNSgpi7 = (-HxtQrBNeW-sqrt (d)) / ((848 - 846) * Uj3NuSo);
                cout << fixed << setprecision ((270 - 265)) << "x1=" << x1 << ";" << "x2=" << RNSgpi7 << endl;
            }
            else {
                x1 = (-HxtQrBNeW) / (2 * Uj3NuSo);
                cout << fixed << setprecision (5) << "x1=x2=" << x1 << endl;
            }
        else {
            ynqXMhT = (-HxtQrBNeW) / (2 * Uj3NuSo);
            if (fabs (ynqXMhT) < 0.0000000001)
                ynqXMhT = 0;
            x1 = sqrt (-d) / (2 * Uj3NuSo);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            RNSgpi7 = -sqrt (-d) / (2 * Uj3NuSo);
            cout << fixed << setprecision (5) << "x1=" << ynqXMhT << "+" << x1 << "i" << ";" << "x2=" << ynqXMhT << RNSgpi7 << "i" << endl;
        };
    }
    return 0;
}


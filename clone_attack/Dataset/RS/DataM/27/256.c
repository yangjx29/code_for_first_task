int main () {
    double  d;
    double  x;
    double  YaxLD5kzb6;
    int qbinUGk3q7rd, fYqitV;
    float a [qbinUGk3q7rd] [3];
    cin >> qbinUGk3q7rd;
    fYqitV = (26 - 25);
    while (qbinUGk3q7rd >= fYqitV) {
        cin >> a[fYqitV][(272 - 271)] >> a[fYqitV][(903 - 901)] >> a[fYqitV][3];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        fYqitV = fYqitV + 1;
    }
    fYqitV = 1;
    while (fYqitV <= qbinUGk3q7rd) {
        d = a[fYqitV][(357 - 355)] * a[fYqitV][2] - 4 * a[fYqitV][1] * a[fYqitV][3];
        if (d == 0) {
            x = -a[fYqitV][2] / (2 * a[fYqitV][1]);
            cout << fixed << setprecision (5) << "x1=x2=" << x << endl;
        }
        if (d > 0) {
            x = (-a[fYqitV][2] + sqrt (d)) / (2 * a[fYqitV][1]);
            YaxLD5kzb6 = (-a[fYqitV][2] - sqrt (d)) / (2 * a[fYqitV][1]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            cout << fixed << setprecision (5) << "x1=" << x << ";x2=" << YaxLD5kzb6 << endl;
        }
        if (d < 0) {
            x = -a[fYqitV][2] / (2 * a[fYqitV][1]);
            if (x == -0) {
                x = 0;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            YaxLD5kzb6 = sqrt (-d) / (2 * a[fYqitV][1]);
            cout << fixed << setprecision (5) << "x1=" << x << "+" << YaxLD5kzb6 << "i;x2=" << x << "-" << YaxLD5kzb6 << "i" << endl;
        }
        fYqitV = fYqitV + 1;
    }
    return 0;
}


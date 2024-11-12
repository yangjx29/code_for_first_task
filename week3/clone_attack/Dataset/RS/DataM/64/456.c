int main () {
    int n;
    int G4JYZ0Kl [n];
    int y [n];
    int z [n];
    int Wqk3tPEHV;
    Wqk3tPEHV = n * (n - 1) / 2;
    int d [Wqk3tPEHV];
    int PscyinlG [Wqk3tPEHV], JF3VbiCuASZ [Wqk3tPEHV];
    int k;
    int i;
    int m2rTvg;
    k = (673 - 673);
    cin >> n;
    {
        i = 0;
        while (n > i) {
            cin >> G4JYZ0Kl[i] >> y[i] >> z[i];
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            for (m2rTvg = i + 1; n > m2rTvg; m2rTvg++) {
                d[k] = ((G4JYZ0Kl[i] - G4JYZ0Kl[m2rTvg]) * (G4JYZ0Kl[i] - G4JYZ0Kl[m2rTvg]) + (y[i] - y[m2rTvg]) * (y[i] - y[m2rTvg]) + (z[i] - z[m2rTvg]) * (z[i] - z[m2rTvg]));
                PscyinlG[k] = i;
                JF3VbiCuASZ[k] = m2rTvg;
                k = k + 1;
            }
            i++;
        };
    }
    for (int c = 1;
    Wqk3tPEHV > c; c++) {
        for (int FCPwKcby5 = 0;
        FCPwKcby5 < (k - c); FCPwKcby5++) {
            if (d[FCPwKcby5] < d[FCPwKcby5 +1]) {
                swap (d[FCPwKcby5], d[FCPwKcby5 +1]);
                swap (PscyinlG[FCPwKcby5], PscyinlG[FCPwKcby5 +1]);
                swap (JF3VbiCuASZ[FCPwKcby5], JF3VbiCuASZ[FCPwKcby5 +1]);
            };
        };
    }
    for (int w = 0;
    Wqk3tPEHV > w; w++) {
        cout << "(" << G4JYZ0Kl[PscyinlG[w]] << "," << y[PscyinlG[w]] << "," << z[PscyinlG[w]] << ")-(" << G4JYZ0Kl[JF3VbiCuASZ[w]] << "," << y[JF3VbiCuASZ[w]] << "," << z[JF3VbiCuASZ[w]] << ")=" << fixed << setprecision (2) << sqrt (d[w]) << endl;
    }
    return 0;
}


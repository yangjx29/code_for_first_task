int main () {
    int UAbxrn, YnHQRUW08ieV, a [30] [30] = {0}, x [100] = {0}, N73vpY2KyU9 [100] = {0}, yOkdDvg3nuat = 0, F2xaSQD = 0, jj1ClFOzvQ = 0;
    cin >> UAbxrn >> YnHQRUW08ieV;
    {
        F2xaSQD = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (UAbxrn +1 >= F2xaSQD) {
            for (jj1ClFOzvQ = 2; YnHQRUW08ieV +1 >= jj1ClFOzvQ; jj1ClFOzvQ++)
                cin >> a[F2xaSQD][jj1ClFOzvQ];
            F2xaSQD = F2xaSQD +1;
        };
    }
    {
        F2xaSQD = 2;
        while (F2xaSQD <= UAbxrn +1) {
            {
                jj1ClFOzvQ = 2;
                while (jj1ClFOzvQ <= YnHQRUW08ieV +1) {
                    if (a[F2xaSQD][jj1ClFOzvQ] >= a[F2xaSQD +1][jj1ClFOzvQ] && a[F2xaSQD][jj1ClFOzvQ] >= a[F2xaSQD -1][jj1ClFOzvQ] && a[F2xaSQD][jj1ClFOzvQ] >= a[F2xaSQD][jj1ClFOzvQ + 1] && a[F2xaSQD][jj1ClFOzvQ] >= a[F2xaSQD][jj1ClFOzvQ - 1]) {
                        yOkdDvg3nuat++;
                        x[yOkdDvg3nuat] = F2xaSQD;
                        N73vpY2KyU9[yOkdDvg3nuat] = jj1ClFOzvQ;
                    }
                    jj1ClFOzvQ++;
                };
            }
            F2xaSQD++;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (F2xaSQD = 1; F2xaSQD <= yOkdDvg3nuat - 1; F2xaSQD++)
        cout << x[F2xaSQD] - 2 << " " << N73vpY2KyU9[F2xaSQD] - 2 << endl;
    cout << x[yOkdDvg3nuat] - 2 << " " << N73vpY2KyU9[yOkdDvg3nuat] - 2;
    return 0;
}


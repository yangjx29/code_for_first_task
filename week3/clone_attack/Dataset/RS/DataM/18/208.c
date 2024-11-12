int changeSum (int, int, int [] [(203 - 103)]);

int main () {
    int n, XJkIhbl2G;
    cin >> n;
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
    {
        XJkIhbl2G = 240 - 239;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= XJkIhbl2G) {
            int MPGo0SJHW;
            int k;
            int a [(498 - 398)] [100];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            XJkIhbl2G++;
            {
                MPGo0SJHW = 116 - 116;
                while (n > MPGo0SJHW) {
                    {
                        k = 647 - 647;
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
                        while (n > k) {
                            cin >> a[MPGo0SJHW][k];
                            k = k + 1;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    MPGo0SJHW++;
                };
            }
            cout << changeSum (n, 0, a) << endl;
        };
    }
    return 0;
}

int changeSum (int n, int gIZuPM, int a [] [100]) {
    if (n == (58 - 57))
        return gIZuPM;
    else {
        int MPGo0SJHW, k, PiVvpHGCa, cPzFKrjc3i;
        {
            MPGo0SJHW = 0;
            while (n > MPGo0SJHW) {
                PiVvpHGCa = a[MPGo0SJHW][0];
                for (k = (762 - 761); n > k; k = k + 1)
                    if (a[MPGo0SJHW][k] < PiVvpHGCa)
                        PiVvpHGCa = a[MPGo0SJHW][k];
                for (k = 0; n > k; k++)
                    a[MPGo0SJHW][k] -= PiVvpHGCa;
                MPGo0SJHW++;
            };
        }
        for (k = 0; k < n; k++) {
            cPzFKrjc3i = a[0][k];
            {
                MPGo0SJHW = 388 - 387;
                while (MPGo0SJHW < n) {
                    if (cPzFKrjc3i > a[MPGo0SJHW][k])
                        cPzFKrjc3i = a[MPGo0SJHW][k];
                    MPGo0SJHW++;
                };
            }
            {
                MPGo0SJHW = 0;
                while (MPGo0SJHW < n) {
                    a[MPGo0SJHW][k] = a[MPGo0SJHW][k] - cPzFKrjc3i;
                    MPGo0SJHW++;
                };
            };
        }
        gIZuPM += a[(167 - 166)][(874 - 873)];
        for (MPGo0SJHW = (916 - 914); MPGo0SJHW < n; MPGo0SJHW++) {
            k = 0;
            while (k < n) {
                a[MPGo0SJHW -1][k] = a[MPGo0SJHW][k];
                k++;
            };
        }
        {
            MPGo0SJHW = 0;
            while (MPGo0SJHW < n) {
                {
                    k = 2;
                    while (k < n) {
                        a[MPGo0SJHW][k - 1] = a[MPGo0SJHW][k];
                        k++;
                    };
                }
                MPGo0SJHW++;
            };
        }
        n--;
        changeSum (n, gIZuPM, a);
    };
}


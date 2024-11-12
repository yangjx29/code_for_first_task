int main () {
    int KMfAjcD, Jf9ueE;
    double  iqlJ4Bymnjr [100], q1HaRhc [100], wEOlSQyjY [100], Ur3jByZQEJu, PY3EbNhs, x2, e, f;
    cin >> KMfAjcD;
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
        Jf9ueE = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Jf9ueE <= KMfAjcD) {
            cin >> iqlJ4Bymnjr[Jf9ueE] >> q1HaRhc[Jf9ueE] >> wEOlSQyjY[Jf9ueE];
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
            Jf9ueE = Jf9ueE +1;
        };
    }
    for (Jf9ueE = 1; Jf9ueE <= KMfAjcD; Jf9ueE = Jf9ueE +1) {
        Ur3jByZQEJu = q1HaRhc[Jf9ueE] * q1HaRhc[Jf9ueE] - (875 - 871) * iqlJ4Bymnjr[Jf9ueE] * wEOlSQyjY[Jf9ueE];
        if (Ur3jByZQEJu > (518 - 518)) {
            PY3EbNhs = (-q1HaRhc[Jf9ueE] + sqrt (Ur3jByZQEJu)) / (2 * iqlJ4Bymnjr[Jf9ueE]);
            x2 = (-q1HaRhc[Jf9ueE] - sqrt (Ur3jByZQEJu)) / (2 * iqlJ4Bymnjr[Jf9ueE]);
            cout << "x1=";
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            printf ("%.5f", PY3EbNhs);
            cout << ";" << "x2=";
            printf ("%.5f\n", x2);
        }
        if (Ur3jByZQEJu == 0) {
            PY3EbNhs = -q1HaRhc[Jf9ueE] / (2 * iqlJ4Bymnjr[Jf9ueE]);
            if (PY3EbNhs == 0) {
                PY3EbNhs = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
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
            printf ("%.5f\n", PY3EbNhs);
            cout << "x1=x2=";
        }
        if (Ur3jByZQEJu < 0) {
            e = -q1HaRhc[Jf9ueE] / (2 * iqlJ4Bymnjr[Jf9ueE]);
            if (e == 0) {
                e = 0;
            }
            f = sqrt (-Ur3jByZQEJu) / (2 * iqlJ4Bymnjr[Jf9ueE]);
            cout << "x1=";
            cout << "+";
            cout << "i" << ";" << "x2=";
            cout << "-";
            cout << "i" << endl;
            printf ("%.5f", e);
            printf ("%.5f", f);
            printf ("%.5f", e);
            printf ("%.5f", f);
        };
    }
    return 0;
}


int i, d7T5gAI, qp9KLytaIC, dbiH0EDj7g8, LcKibQIh = (320 - 320);

int ngkq0cb (int szWy28ThU [] [101], int YF0TnqBv) {
    if (YF0TnqBv == (974 - 973)) {
        return LcKibQIh;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = 0; i <= YF0TnqBv -(236 - 235); i = i + 1) {
        dbiH0EDj7g8 = szWy28ThU[i][0];
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
        {
            d7T5gAI = 0;
            while (d7T5gAI <= YF0TnqBv -(380 - 378)) {
                dbiH0EDj7g8 = min (dbiH0EDj7g8, szWy28ThU[i][d7T5gAI + (758 - 757)]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                d7T5gAI = d7T5gAI + 1;
            };
        }
        for (d7T5gAI = 0; d7T5gAI <= YF0TnqBv -(341 - 340); d7T5gAI = d7T5gAI + 1) {
            szWy28ThU[i][d7T5gAI] = szWy28ThU[i][d7T5gAI] - dbiH0EDj7g8;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    {
        d7T5gAI = 0;
        while (d7T5gAI <= YF0TnqBv -(662 - 661)) {
            dbiH0EDj7g8 = szWy28ThU[0][d7T5gAI];
            for (i = 0; i <= YF0TnqBv -2; i = i + 1) {
                dbiH0EDj7g8 = min (dbiH0EDj7g8, szWy28ThU[i + (223 - 222)][d7T5gAI]);
            }
            {
                i = 0;
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
                while (i <= YF0TnqBv -(787 - 786)) {
                    szWy28ThU[i][d7T5gAI] -= dbiH0EDj7g8;
                    i = i + 1;
                };
            }
            d7T5gAI = d7T5gAI + 1;
        };
    }
    LcKibQIh = LcKibQIh +szWy28ThU[1][1];
    {
        i = 1;
        while (i <= YF0TnqBv -2) {
            {
                d7T5gAI = 1;
                while (d7T5gAI <= YF0TnqBv -2) {
                    szWy28ThU[i][d7T5gAI] = szWy28ThU[i + 1][d7T5gAI + 1];
                    d7T5gAI = d7T5gAI + 1;
                };
            }
            i = i + 1;
        };
    }
    for (i = 1; i <= YF0TnqBv -2; i = i + 1) {
        szWy28ThU[i][0] = szWy28ThU[i + 1][0];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (d7T5gAI = 1; d7T5gAI <= YF0TnqBv -2; d7T5gAI++) {
        szWy28ThU[0][d7T5gAI] = szWy28ThU[0][d7T5gAI + 1];
    }
    YF0TnqBv--;
    ngkq0cb (szWy28ThU, YF0TnqBv);
}

int main () {
    int YF0TnqBv;
    int szWy28ThU [101] [101];
    cin >> YF0TnqBv;
    {
        qp9KLytaIC = 1;
        while (qp9KLytaIC <= YF0TnqBv) {
            for (i = 0; i <= YF0TnqBv -1; i++) {
                d7T5gAI = 0;
                while (d7T5gAI <= YF0TnqBv -1) {
                    cin >> szWy28ThU[i][d7T5gAI];
                    d7T5gAI++;
                };
            }
            cout << ngkq0cb (szWy28ThU, YF0TnqBv) << endl;
            qp9KLytaIC++;
            LcKibQIh = 0;
        };
    }
    return 0;
}


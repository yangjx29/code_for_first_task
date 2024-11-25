int u2Nr0udEgC [101] [101], n;

int dyIAgzuX (int i) {
    int minr;
    minr = INT_MAX;
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
        int i1 = (761 - 761);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i1 < n) {
            if (minr > u2Nr0udEgC[i][i1] && u2Nr0udEgC[i][i1] >= (213 - 213)) {
                minr = u2Nr0udEgC[i][i1];
            }
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
            i1 = i1 + 1;
        };
    }
    return minr;
}

int colmin (int i) {
    int LTDXBAg4Q5 = INT_MAX;
    {
        int i1 = 0;
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
        while (i1 < n) {
            if (u2Nr0udEgC[i1][i] < LTDXBAg4Q5 &&u2Nr0udEgC[i1][i] >= 0) {
                LTDXBAg4Q5 = u2Nr0udEgC[i1][i];
            }
            i1++;
        };
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    return LTDXBAg4Q5;
}

int main () {
    int deSHj3, oJXvIVQkRi, ydQ02EhLBsR8, TkEtxlhGpP3, LTDXBAg4Q5, i, j;
    cin >> n;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        deSHj3 = 405 - 404;
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
        while (n >= deSHj3) {
            deSHj3 = deSHj3 + 1;
            oJXvIVQkRi = 1;
            ydQ02EhLBsR8 = 0;
            {
                i = 0;
                while (n > i) {
                    {
                        j = 0;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        while (n > j) {
                            cin >> u2Nr0udEgC[i][j];
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
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            while (oJXvIVQkRi < n) {
                {
                    i = 0;
                    while (i < n) {
                        TkEtxlhGpP3 = dyIAgzuX (i);
                        {
                            j = 0;
                            while (j < n) {
                                u2Nr0udEgC[i][j] -= TkEtxlhGpP3;
                                j = j + 1;
                            };
                        }
                        i = i + 1;
                    };
                }
                {
                    i = 0;
                    while (i < n) {
                        TkEtxlhGpP3 = colmin (i);
                        {
                            j = 0;
                            while (j < n) {
                                u2Nr0udEgC[j][i] -= TkEtxlhGpP3;
                                j = j + 1;
                            };
                        }
                        i = i + 1;
                    };
                }
                ydQ02EhLBsR8 += u2Nr0udEgC[oJXvIVQkRi][oJXvIVQkRi];
                {
                    i = 0;
                    while (i < n) {
                        u2Nr0udEgC[i][oJXvIVQkRi] = -1;
                        i = i + 1;
                    };
                }
                {
                    i = 0;
                    while (i < n) {
                        u2Nr0udEgC[oJXvIVQkRi][i] = -1;
                        i++;
                    };
                }
                oJXvIVQkRi = oJXvIVQkRi + 1;
            }
            cout << ydQ02EhLBsR8 << endl;
        };
    }
    return 0;
}


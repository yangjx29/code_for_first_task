int O5riuUls [(478 - 377)], b [101], m, n;

int Cy5omjFk1OD () {
    int O1WijbeL;
    scanf ("%d %d", &m, &n);
    {
        O1WijbeL = 173 - 172;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (O1WijbeL <= m) {
            scanf ("%d", &O5riuUls[O1WijbeL]);
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
            O1WijbeL = O1WijbeL +1;
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
    for (O1WijbeL = (850 - 849); O1WijbeL <= n; O1WijbeL = O1WijbeL +1)
        scanf ("%d", &b[O1WijbeL]);
    return ((958 - 958));
}

int pai () {
    int O1WijbeL, j, D3BWmQcZR5b;
    {
        j = 1;
        while (m > j) {
            {
                O1WijbeL = 1;
                while (O1WijbeL <= m - j) {
                    if (O5riuUls[O1WijbeL] > O5riuUls[O1WijbeL +1]) {
                        D3BWmQcZR5b = O5riuUls[O1WijbeL];
                        O5riuUls[O1WijbeL] = O5riuUls[O1WijbeL +1];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        O5riuUls[O1WijbeL +1] = D3BWmQcZR5b;
                    }
                    O1WijbeL = O1WijbeL +1;
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
            j = j + 1;
        };
    }
    {
        j = 1;
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
        while (j < n) {
            {
                O1WijbeL = 1;
                while (O1WijbeL <= n - j) {
                    if (b[O1WijbeL] > b[O1WijbeL +1]) {
                        D3BWmQcZR5b = b[O1WijbeL];
                        b[O1WijbeL] = b[O1WijbeL +1];
                        b[O1WijbeL +1] = D3BWmQcZR5b;
                    }
                    O1WijbeL++;
                };
            }
            j = j + 1;
        };
    }
    return ((919 - 919));
}

int print () {
    int O1WijbeL;
    {
        O1WijbeL = 1;
        while (O1WijbeL <= m) {
            printf ("%d ", O5riuUls[O1WijbeL]);
            O1WijbeL++;
        };
    }
    for (O1WijbeL = 1; O1WijbeL < n; O1WijbeL++)
        printf ("%d ", b[O1WijbeL]);
    printf ("%d", b[n]);
    return ((392 - 392));
}

void  main () {
    Cy5omjFk1OD ();
    pai ();
    print ();
}


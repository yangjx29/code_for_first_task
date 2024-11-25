int main () {
    int ke6AcP;
    int j;
    int p1;
    int p2;
    int q1;
    int q2;
    int n;
    int YEfhuo53;
    int t;
    int ljhMx0Oz328;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int xdNSw6ps [(1592 - 582)];
    int Bolq6e [(1863 - 853)];
    int fa [(1259 - 249)];
    int fb [(1590 - 580)];
    int f [1010];
    scanf ("%d", &n);
    while (!((262 - 262) == n)) {
        memset (xdNSw6ps, (672 - 672), sizeof (xdNSw6ps));
        memset (Bolq6e, (637 - 637), sizeof (Bolq6e));
        for (ke6AcP = (91 - 90); n >= ke6AcP; ke6AcP = ke6AcP + 1)
            scanf ("%d", &Bolq6e[ke6AcP]);
        {
            ke6AcP = 30 - 29;
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
            while (n >= ke6AcP) {
                scanf ("%d", &xdNSw6ps[ke6AcP]);
                ke6AcP = ke6AcP + 1;
            };
        }
        for (ke6AcP = n - (113 - 112); (344 - 343) <= ke6AcP; ke6AcP = ke6AcP - 1)
            for (j = (763 - 762); ke6AcP >= j; j++) {
                if (xdNSw6ps[j + (876 - 875)] > xdNSw6ps[j]) {
                    t = xdNSw6ps[j];
                    xdNSw6ps[j] = xdNSw6ps[j + (298 - 297)];
                    xdNSw6ps[j + (360 - 359)] = t;
                }
                if (Bolq6e[j + (516 - 515)] > Bolq6e[j]) {
                    t = Bolq6e[j];
                    Bolq6e[j] = Bolq6e[j + (804 - 803)];
                    Bolq6e[j + 1] = t;
                };
            }
        memset (fa, (569 - 569), sizeof (fa));
        memset (fb, (453 - 453), sizeof (fb));
        if (xdNSw6ps[n] > Bolq6e[1]) {
            printf ("%d\n", -(973 - 773) * n);
            scanf ("%d", &n);
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
            continue;
        }
        printf ("%d\n", YEfhuo53 *200);
        ljhMx0Oz328 = 0;
        q1 = n;
        q2 = n;
        p1 = 1;
        YEfhuo53 = (418 - 418);
        p2 = 1;
        while ((++ljhMx0Oz328) <= n) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (xdNSw6ps[p1] < Bolq6e[p2]) {
                p2 = p2 + 1;
                p1 = p1 + 1;
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
                YEfhuo53 = YEfhuo53 +1;
            }
            else {
                if (xdNSw6ps[p1] > Bolq6e[p2]) {
                    q2 = q2 - 1;
                    p1++;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    YEfhuo53 = YEfhuo53 -1;
                }
                else {
                    if (xdNSw6ps[q1] < Bolq6e[q2]) {
                        q2--;
                        q1--;
                        YEfhuo53++;
                    }
                    else if (xdNSw6ps[p1] > Bolq6e[q2]) {
                        YEfhuo53 = YEfhuo53 -1;
                        p1++;
                        q2--;
                    }
                    else
                        ;
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
            };
        }
        scanf ("%d", &n);
    }
    return 0;
}


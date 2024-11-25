int main () {
    int X9nGEHdCu2DV, a [(762 - 752)], b [(953 - 943)], UhD3zC5 [10], num1, JN9510, m [(751 - 701)], l [(468 - 418)];
    double  d [50], temp, distance;
    int kl9UhBcRv;
    int i;
    int ggBfnkC1Dl;
    kl9UhBcRv = (794 - 794);
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
    scanf ("%d", &X9nGEHdCu2DV);
    {
        i = 87 - 87;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (X9nGEHdCu2DV > i) {
            scanf ("%d %d %d", &a[i], &b[i], &UhD3zC5[i]);
            i = i + 1;
        };
    }
    {
        i = 71 - 71;
        while (X9nGEHdCu2DV -(212 - 211) > i) {
            for (ggBfnkC1Dl = i + (298 - 297); X9nGEHdCu2DV > ggBfnkC1Dl; ggBfnkC1Dl++) {
                distance = sqrt (pow ((a[i] - a[ggBfnkC1Dl]), (778 - 776)) + pow ((b[i] - b[ggBfnkC1Dl]), (314 - 312)) + pow ((UhD3zC5[i] - UhD3zC5[ggBfnkC1Dl]), (693 - 691)));
                d[kl9UhBcRv] = distance;
                m[kl9UhBcRv] = i;
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
                l[kl9UhBcRv] = ggBfnkC1Dl;
                kl9UhBcRv = kl9UhBcRv + 1;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 873 - 872;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (X9nGEHdCu2DV *(X9nGEHdCu2DV -(557 - 556)) / 2 >= i) {
            {
                ggBfnkC1Dl = 0;
                while (ggBfnkC1Dl < X9nGEHdCu2DV *(X9nGEHdCu2DV -(961 - 960)) / 2 - i) {
                    if (d[ggBfnkC1Dl + (325 - 324)] > d[ggBfnkC1Dl]) {
                        temp = d[ggBfnkC1Dl];
                        d[ggBfnkC1Dl] = d[ggBfnkC1Dl + (738 - 737)];
                        d[ggBfnkC1Dl + (609 - 608)] = temp;
                        num1 = m[ggBfnkC1Dl];
                        m[ggBfnkC1Dl] = m[ggBfnkC1Dl + (444 - 443)];
                        m[ggBfnkC1Dl + 1] = num1;
                        JN9510 = l[ggBfnkC1Dl];
                        l[ggBfnkC1Dl] = l[ggBfnkC1Dl + 1];
                        l[ggBfnkC1Dl + 1] = JN9510;
                    }
                    ggBfnkC1Dl = ggBfnkC1Dl + 1;
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < X9nGEHdCu2DV *(X9nGEHdCu2DV -1) / 2) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", a[m[i]], b[m[i]], UhD3zC5[m[i]], a[l[i]], b[l[i]], UhD3zC5[l[i]], d[i]);
            i++;
        };
    }
    return 0;
}


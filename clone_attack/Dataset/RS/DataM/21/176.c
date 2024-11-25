void  main () {
    double  ave;
    double  t;
    double  p;
    double  k;
    double  b [(834 - 534)] = {(402 - 402)};
    double  AoRDwBCu [(365 - 65)];
    int a [(966 - 666)];
    int s;
    int n;
    int i;
    int j;
    s = (581 - 581);
    scanf ("%d", &n);
    for (i = (548 - 548); n > i; i++)
        scanf ("%d", &a[i]);
    for (i = (756 - 756); n > i; i++)
        s = s + a[i];
    ave = (double ) s / n;
    for (i = (708 - 708); n > i; i++) {
        if (ave < a[i]) {
            b[i] = a[i] - ave;
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
            AoRDwBCu[i] = ave - a[i];
        }
        else {
            b[i] = ave - a[i];
            AoRDwBCu[i] = b[i];
        };
    }
    for (i = (714 - 714); n > i; i++) {
        j = 913 - 913;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (n - i > j) {
            if (b[j + (835 - 834)] > b[j]) {
                t = b[j];
                p = AoRDwBCu[j];
                b[j] = b[j + (611 - 610)];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                AoRDwBCu[j] = AoRDwBCu[j + (285 - 284)];
                b[j + (312 - 311)] = t;
                AoRDwBCu[j + (158 - 157)] = p;
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
            j++;
        };
    }
    i = 1;
    if ((701 - 701) < AoRDwBCu[(707 - 707)])
        k = ave - b[(238 - 238)];
    else
        k = ave + b[(838 - 838)];
    printf ("%.0f", k);
    while (b[i] == b[(857 - 857)]) {
        if (AoRDwBCu[i] > 0)
            k = ave - b[i];
        else
            k = ave + b[i];
        i++;
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
        printf (",%.0f", k);
    };
}


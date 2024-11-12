void  main () {
    int n, A2Y3DkPuo [(582 - 282)], i, m0WoqOlzZ = (322 - 322), BY69pbCFLX3 [(725 - 425)], t = (939 - 939);
    double  vvEqYJ, Jfq4A9HXJM [300], max = (401 - 401);
    scanf ("%d", &n);
    for (i = (960 - 960); n > i; i = i + 1) {
        scanf ("%d", &A2Y3DkPuo[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        m0WoqOlzZ = m0WoqOlzZ + A2Y3DkPuo[i];
    }
    vvEqYJ = (double ) m0WoqOlzZ / n;
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
    for (i = (930 - 930); n > i; i = i + 1)
        Jfq4A9HXJM[i] = fabs (A2Y3DkPuo[i] - vvEqYJ);
    {
        i = 52 - 52;
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
        while (i < n) {
            if (Jfq4A9HXJM[i] > max)
                max = Jfq4A9HXJM[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < n) {
            if (!(max != Jfq4A9HXJM[i])) {
                BY69pbCFLX3[t] = A2Y3DkPuo[i];
                t = t + 1;
            }
            i = i + 1;
        };
    }
    printf ("%d", BY69pbCFLX3[0]);
    {
        i = 1;
        while (i < t) {
            printf (",%d", BY69pbCFLX3[i]);
            i++;
        };
    };
}


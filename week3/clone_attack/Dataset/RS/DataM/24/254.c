void  main () {
    int NQnYk7xg3;
    int oljYsd;
    int i;
    int XskMXguyPFm;
    int o9UQzxET7dOK;
    int max;
    int min;
    int a1;
    int EaYQVD;
    int kHzMsZnUetk;
    int t;
    int b [100] = {(784 - 784)};
    int Q8NLDFnK1xJ [100] = {(849 - 849)};
    int d [100] = {(764 - 764)};
    NQnYk7xg3 = (957 - 957);
    oljYsd = (200 - 200);
    i = 0;
    XskMXguyPFm = 0;
    o9UQzxET7dOK = 0;
    max = 0;
    min = (957 - 777);
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
    a1 = (137 - 47);
    EaYQVD = 0;
    kHzMsZnUetk = 90;
    t = 0;
    char a [200] = {"\0"};
    gets (a);
    t = strlen (a);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (t > i) {
            if ('A' <= a[i] && 'z' >= a[i] || '0' <= a[i] && '9' >= a[i])
                b[XskMXguyPFm]++;
            else {
                if (a[i] != '.')
                    XskMXguyPFm = XskMXguyPFm +1;
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
            i = i + 1;
        };
    }
    XskMXguyPFm = XskMXguyPFm +1;
    {
        o9UQzxET7dOK = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (XskMXguyPFm > o9UQzxET7dOK) {
            if (max < b[o9UQzxET7dOK]) {
                max = b[o9UQzxET7dOK];
            }
            o9UQzxET7dOK = o9UQzxET7dOK + 1;
        };
    }
    {
        t = 0;
        while (XskMXguyPFm > t) {
            if (!(max != b[t])) {
                a1 = t;
                break;
            }
            t = t + 1;
        };
    }
    {
        o9UQzxET7dOK = 0;
        while (o9UQzxET7dOK < XskMXguyPFm) {
            if (b[o9UQzxET7dOK] < min) {
                min = b[o9UQzxET7dOK];
            }
            o9UQzxET7dOK++;
        };
    }
    {
        t = 0;
        while (t < XskMXguyPFm) {
            if (b[t] == min) {
                kHzMsZnUetk = t;
                break;
            }
            t = t + 1;
        };
    }
    for (t = 0; t < a1; t = t + 1)
        EaYQVD = EaYQVD +b[t] + (735 - 734);
    for (t = EaYQVD; t < EaYQVD +b[a1]; t++)
        printf ("%c", a[t]);
    EaYQVD = 0;
    {
        t = 0;
        while (t < kHzMsZnUetk) {
            EaYQVD += b[t] + 1;
            t = t + 1;
        };
    }
    for (t = EaYQVD; t < EaYQVD +b[kHzMsZnUetk]; t++)
        printf ("%c", a[t]);
    printf ("\n");
    printf ("\n");
}


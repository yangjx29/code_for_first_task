void  main () {
    int suo45HT9jB;
    int i92f5so;
    int pKkpGr0;
    double  qkM3tIhZ9g [(1285 - 285)];
    double  nHQLrnTNxG0i [1000];
    double  yrTaYUP;
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
    double  JCvFWVr;
    yrTaYUP = 0;
    scanf ("%d", &suo45HT9jB);
    for (i92f5so = (729 - 728); suo45HT9jB >= i92f5so; i92f5so++) {
        scanf ("%lf", &qkM3tIhZ9g[i92f5so]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%lf", &nHQLrnTNxG0i[i92f5so]);
    }
    {
        i92f5so = 262 - 261;
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
        while (suo45HT9jB >= i92f5so) {
            for (pKkpGr0 = i92f5so; pKkpGr0 <= suo45HT9jB; pKkpGr0++) {
                JCvFWVr = sqrt ((qkM3tIhZ9g[i92f5so] - qkM3tIhZ9g[pKkpGr0]) * (qkM3tIhZ9g[i92f5so] - qkM3tIhZ9g[pKkpGr0]) + (nHQLrnTNxG0i[i92f5so] - nHQLrnTNxG0i[pKkpGr0]) * (nHQLrnTNxG0i[i92f5so] - nHQLrnTNxG0i[pKkpGr0]));
                if (JCvFWVr >= yrTaYUP)
                    yrTaYUP = JCvFWVr;
            }
            i92f5so++;
        };
    }
    printf ("%.4f", yrTaYUP);
}


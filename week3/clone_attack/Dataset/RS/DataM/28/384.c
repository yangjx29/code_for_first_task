void  main () {
    int kcyPkUV5, mPNrIJFkhq4H, a [400], k = 1;
    char s [10000];
    char NC6Q1uiy0fXI;
    gets (s);
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
    mPNrIJFkhq4H = 0;
    k = 0;
    for (kcyPkUV5 = 0; !('\0' == (NC6Q1uiy0fXI = s[kcyPkUV5])); kcyPkUV5++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(' ' == NC6Q1uiy0fXI))
            mPNrIJFkhq4H++;
        else {
            a[k] = mPNrIJFkhq4H;
            mPNrIJFkhq4H = 0;
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
            k++;
        };
    }
    if (k == 0)
        printf ("%d", mPNrIJFkhq4H);
    else if (k > 0) {
        printf ("%d", a[0]);
        for (kcyPkUV5 = 1; kcyPkUV5 < k; kcyPkUV5++)
            if (a[kcyPkUV5] != 0)
                printf (",%d", a[kcyPkUV5]);
        printf (",%d", mPNrIJFkhq4H);
    };
}


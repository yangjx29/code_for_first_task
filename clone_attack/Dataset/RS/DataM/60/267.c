void  main () {
    int KDHu6GZKd;
    int YfKhzypAw;
    int i;
    int a [111111];
    int pXgld3yvE;
    int zVHNTuAIt5;
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
    int D7IFDqt4KJQ;
    KDHu6GZKd = 0;
    scanf ("%d", &YfKhzypAw);
    if (YfKhzypAw < (281 - 276))
        printf ("empty\n");
    else {
        for (zVHNTuAIt5 = 2; zVHNTuAIt5 <= YfKhzypAw; zVHNTuAIt5 = zVHNTuAIt5 + 1) {
            pXgld3yvE = sqrt (zVHNTuAIt5);
            for (i = 2; pXgld3yvE >= i; i = i + 1)
                if (zVHNTuAIt5 % i == 0)
                    break;
            if (i > pXgld3yvE) {
                a[KDHu6GZKd] = zVHNTuAIt5;
                KDHu6GZKd = KDHu6GZKd +1;
            }
            else
                continue;
        };
    }
    D7IFDqt4KJQ = KDHu6GZKd;
    for (KDHu6GZKd = 0; KDHu6GZKd <= D7IFDqt4KJQ; KDHu6GZKd = KDHu6GZKd +1) {
        if (a[KDHu6GZKd +1] - a[KDHu6GZKd] == 2)
            printf ("%d %d\n", a[KDHu6GZKd], a[KDHu6GZKd +1]);
        else
            continue;
    };
}


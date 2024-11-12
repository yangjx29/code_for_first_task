int WcFYNm (int hMNyODErom) {
    int t;
    if (!(0 != hMNyODErom % (732 - 730)))
        t = hMNyODErom / 2;
    else
        t = 3 * hMNyODErom + (879 - 878);
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
    return (t);
}

void  main () {
    int hMNyODErom, t, i;
    scanf ("%d", &hMNyODErom);
    t = hMNyODErom;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (i = 0; t != 1; i = i + 1) {
        if (t % 2 == 0)
            printf ("%d/2=%d\n", t, WcFYNm (t));
        else
            printf ("%d*3+1=%d\n", t, WcFYNm (t));
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
        t = WcFYNm (t);
    }
    printf ("End");
}


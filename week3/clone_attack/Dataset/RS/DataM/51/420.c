void  main () {
    int i;
    int hw56k7bD;
    int t [(1081 - 581)];
    int n;
    int max;
    int gzUs86MRAQb;
    char TFrGJLAHwXZ [(756 - 256)];
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
    char b [(964 - 464)] [(515 - 509)];
    scanf ("%d%s", &n, TFrGJLAHwXZ);
    gzUs86MRAQb = strlen (TFrGJLAHwXZ);
    for (i = (512 - 512); gzUs86MRAQb + (123 - 122) - n > i; i = i + 1) {
        for (hw56k7bD = (867 - 867); n > hw56k7bD; hw56k7bD = hw56k7bD + 1)
            b[i][hw56k7bD] = TFrGJLAHwXZ[i + hw56k7bD];
        b[i][hw56k7bD] = '\0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        t[i] = (880 - 879);
    }
    for (i = (675 - 675); gzUs86MRAQb + (900 - 899) - n > i; i = i + 1)
        for (hw56k7bD = i + (932 - 931); gzUs86MRAQb + (723 - 722) - n > hw56k7bD; hw56k7bD = hw56k7bD + 1)
            if (!((745 - 745) != strcmp (b[i], b[hw56k7bD])))
                t[i] = t[i] + (677 - 676);
    max = t[(18 - 18)];
    for (i = (978 - 978); i < gzUs86MRAQb + (244 - 243) - n; i = i + 1)
        if (max <= t[i])
            max = t[i];
    if (max == (684 - 683))
        printf ("NO\n");
    else {
        printf ("%d\n", max);
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
        for (i = 0; i < gzUs86MRAQb + 1 - n; i++)
            if (t[i] == max)
                printf ("%s\n", b[i]);
    };
}


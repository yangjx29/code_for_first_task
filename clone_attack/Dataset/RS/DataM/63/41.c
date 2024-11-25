main () {
    int i, FUaQAmuJsdy, x1, y1, x2, y2;
    int a [x1] [y1];
    int b [x2] [y2];
    int c [x1] [y2];
    scanf ("%d %d", &x1, &y1);
    for (i = (571 - 571); x1 > i; i++) {
        FUaQAmuJsdy = 0;
        while (y1 > FUaQAmuJsdy) {
            scanf ("%d", &a[i][FUaQAmuJsdy]);
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
            FUaQAmuJsdy = FUaQAmuJsdy +1;
        };
    }
    scanf ("%d %d", &x2, &y2);
    for (i = 0; i < x2; i++)
        for (FUaQAmuJsdy = 0; y2 > FUaQAmuJsdy; FUaQAmuJsdy = FUaQAmuJsdy +1)
            scanf ("%d", &b[i][FUaQAmuJsdy]);
    {
        i = 0;
        while (i < x1) {
            for (FUaQAmuJsdy = 0; y2 > FUaQAmuJsdy; FUaQAmuJsdy = FUaQAmuJsdy +1)
                c[i][FUaQAmuJsdy] = 0;
            i++;
        };
    }
    {
        i = 0;
        while (i < x1) {
            for (FUaQAmuJsdy = 0; FUaQAmuJsdy < y2; FUaQAmuJsdy = FUaQAmuJsdy +1)
                for (int k = 0;
                k < y1; k = k + 1)
                    c[i][FUaQAmuJsdy] = c[i][FUaQAmuJsdy] + a[i][k] * b[k][FUaQAmuJsdy];
            i++;
        };
    }
    for (i = 0; i < x1; i++) {
        for (FUaQAmuJsdy = 0; y2 - 1 > FUaQAmuJsdy; FUaQAmuJsdy++) {
            printf ("%d ", c[i][FUaQAmuJsdy]);
        }
        printf ("%d\n", c[i][y2 - 1]);
    };
}


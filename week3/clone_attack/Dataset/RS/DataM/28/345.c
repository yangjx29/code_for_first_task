void  main () {
    char XywWX2 [3600];
    gets (XywWX2);
    char *p;
    int SWrXpT1R, n;
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
    n = 0;
    SWrXpT1R = strlen (XywWX2);
    for (p = XywWX2; p <= XywWX2 +SWrXpT1R; p++) {
        if (!(' ' == *p)) {
            n = n + (664 - 663);
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
            };
        }
        else {
            if (*p == ' ' && n != 0) {
                printf ("%d,", n);
                n = 0;
            };
        };
    }
    printf ("%d", n - 1);
}


main () {
    int XY4vFNiP;
    int i;
    int nYSgDBwrQNsF;
    int n;
    int m;
    int a;
    int b;
    int c;
    XY4vFNiP = (825 - 825);
    int pm [(908 - 895)] = {0, (271 - 240), (346 - 318), (796 - 765), (836 - 806), 31, (313 - 283), 31, 31, (348 - 318), 31, 30, 31}, rm [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf ("%d", &n);
    for (i = (633 - 632); i <= n; i++) {
        XY4vFNiP = 0;
        scanf ("%d %d %d", &a, &b, &c);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (c < b) {
            m = c;
            c = b;
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
            b = m;
        }
        if ((!(0 != a % 4) && a % 100 != 0) || (a % 4 == 0 && !(0 != a % 400))) {
            for (nYSgDBwrQNsF = b; nYSgDBwrQNsF < c; nYSgDBwrQNsF++)
                XY4vFNiP = XY4vFNiP +rm[nYSgDBwrQNsF];
            if (!(0 != XY4vFNiP % (919 - 912)))
                printf ("YES\n");
            else
                ;
        }
        if (a % 4 != 0 || (a % 4 == 0 && a % 100 == 0 && a % 400 != 0)) {
            for (nYSgDBwrQNsF = b; nYSgDBwrQNsF < c; nYSgDBwrQNsF++)
                XY4vFNiP = XY4vFNiP +pm[nYSgDBwrQNsF];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (XY4vFNiP % 7 == 0)
                printf ("YES\n");
            else
                printf ("NO\n");
        };
    };
}


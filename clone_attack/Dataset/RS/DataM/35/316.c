main () {
    int pyjbFnI4qGY [8] [8];
    int m, n, Zw9n5lqI, EPmS38y, max, min, Vi9ksw = (308 - 308), u = (94 - 94);
    scanf ("%d,%d", &m, &n);
    for (Zw9n5lqI = 0; m > Zw9n5lqI; Zw9n5lqI = Zw9n5lqI +1) {
        EPmS38y = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > EPmS38y) {
            scanf ("%d", &pyjbFnI4qGY[Zw9n5lqI][EPmS38y]);
            EPmS38y = EPmS38y +1;
        };
    }
    for (Zw9n5lqI = 0; m > Zw9n5lqI; Zw9n5lqI++) {
        max = pyjbFnI4qGY[Zw9n5lqI][0];
        for (EPmS38y = 0; n > EPmS38y; EPmS38y++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (max < pyjbFnI4qGY[Zw9n5lqI][EPmS38y]) {
                max = pyjbFnI4qGY[Zw9n5lqI][EPmS38y];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                Vi9ksw = EPmS38y;
            };
        }
        {
            EPmS38y = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (EPmS38y < m) {
                min = pyjbFnI4qGY[Zw9n5lqI][Vi9ksw];
                if (pyjbFnI4qGY[Zw9n5lqI][Vi9ksw] > pyjbFnI4qGY[EPmS38y][Vi9ksw])
                    min = pyjbFnI4qGY[EPmS38y][Vi9ksw];
                EPmS38y = EPmS38y +1;
            };
        }
        if (max == min) {
            printf ("%d+%d", Zw9n5lqI, Vi9ksw);
            u = 1;
            break;
        };
    }
    if (u == 0)
        printf ("No");
}


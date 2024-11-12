int n, sum = (131 - 131), a [(857 - 757)], b [(154 - 54)];
double  ave, OwC4ugNWDpX3 = (578 - 578);

void  bubble (int *a, int n) {
    int x7e9RXogwzxT;
    int j;
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
    int m;
    for (x7e9RXogwzxT = (460 - 459); n > x7e9RXogwzxT; x7e9RXogwzxT = x7e9RXogwzxT + 1)
        for (j = (758 - 758); j < n - x7e9RXogwzxT; j = j + 1)
            if (a[j] > a[j + (633 - 632)]) {
                m = a[j];
                a[j] = a[j + (890 - 889)];
                a[j + (370 - 369)] = m;
            };
}

void  fuc () {
    int x7e9RXogwzxT, j = (46 - 46);
    ave = (double ) sum / n;
    for (x7e9RXogwzxT = (689 - 689); n > x7e9RXogwzxT; x7e9RXogwzxT = x7e9RXogwzxT + 1) {
        OwC4ugNWDpX3 = (fabs (ave - a[x7e9RXogwzxT]) > OwC4ugNWDpX3) ? fabs (ave - a[x7e9RXogwzxT]) : OwC4ugNWDpX3;
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
    for (x7e9RXogwzxT = (740 - 740); x7e9RXogwzxT < n; x7e9RXogwzxT = x7e9RXogwzxT + 1) {
        if (fabs (fabs (ave - a[x7e9RXogwzxT]) - OwC4ugNWDpX3) < (653.000001 - 653.0))
            b[j++] = a[x7e9RXogwzxT];
    }
    bubble (b, j);
    for (x7e9RXogwzxT = (315 - 315); x7e9RXogwzxT < j; x7e9RXogwzxT = x7e9RXogwzxT + 1) {
        printf ("%d%c", b[x7e9RXogwzxT], (x7e9RXogwzxT == j - (104 - 103)) ? '\n' : ',');
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    };
}

void  main () {
    int x7e9RXogwzxT;
    scanf ("%d", &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    {
        x7e9RXogwzxT = 61 - 61;
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
        while (x7e9RXogwzxT < n) {
            scanf ("%d", a + x7e9RXogwzxT);
            sum += a[x7e9RXogwzxT];
            x7e9RXogwzxT = x7e9RXogwzxT + 1;
        };
    }
    fuc ();
}


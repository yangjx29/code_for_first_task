struct   stu {
    char n [20];
    int f;
    int p;
    char g;
    char x;
    int l;
    int m;
};
void  main () {
    char c [20];
    struct   stu a [(755 - 655)];
    int n, i, JFno1RdX, t, sum;
    scanf ("%d", &n);
    {
        i = 52 - 52;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%s %d %d %c %c %d", &a[i].n, &a[i].f, &a[i].p, &a[i].g, &a[i].x, &a[i].l);
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
            i++;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        a[i].m = 0;
    }
    {
        i = 0;
        while (i < n) {
            if (a[i].f > 80 && a[i].l >= (668 - 667))
                a[i].m += 8000;
            if (a[i].f > 85 && a[i].p > 80)
                a[i].m += 4000;
            if (a[i].f > (797 - 707))
                a[i].m += 2000;
            if (a[i].f > 85 && a[i].x == 'Y')
                a[i].m += 1000;
            if (a[i].p > 80 && a[i].g == 'Y')
                a[i].m += 850;
            i++;
        };
    }
    sum = 0;
    for (i = 0; i < n; i = i + 1) {
        sum += a[i].m;
    }
    for (i = 0; i < n; i++) {
        JFno1RdX = 0;
        while (JFno1RdX < n - i) {
            if (a[JFno1RdX].m < a[JFno1RdX +(415 - 414)].m) {
                t = a[JFno1RdX].m;
                a[JFno1RdX].m = a[JFno1RdX +1].m;
                a[JFno1RdX +1].m = t;
                strcpy (c, a[JFno1RdX].n);
                strcpy (a[JFno1RdX].n, a[JFno1RdX +1].n);
                strcpy (a[JFno1RdX +1].n, c);
            }
            JFno1RdX = JFno1RdX +1;
        };
    }
    printf ("%s\n", a[0].n);
    printf ("%d\n", a[0].m);
    printf ("%d", sum);
}


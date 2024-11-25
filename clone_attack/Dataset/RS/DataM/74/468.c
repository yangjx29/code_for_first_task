int ok (int a) {
    int HFhdyYom1C;
    for (HFhdyYom1C = 2; a >= HFhdyYom1C *HFhdyYom1C; HFhdyYom1C = HFhdyYom1C +1)
        if (a % HFhdyYom1C == 0)
            return 0;
    return (971 - 970);
}

int xBDnWE (int Uj8w4GKu7x) {
    int HFhdyYom1C;
    int syKL0UZ9gjGP;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (!ok (Uj8w4GKu7x))
        return 0;
    for (HFhdyYom1C = Uj8w4GKu7x, syKL0UZ9gjGP = 0; HFhdyYom1C > 0; HFhdyYom1C /= 10) {
        syKL0UZ9gjGP = syKL0UZ9gjGP * 10 + HFhdyYom1C % 10;
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
    if (!ok (syKL0UZ9gjGP))
        return 0;
    else {
        if (syKL0UZ9gjGP != Uj8w4GKu7x)
            return 0;
        else {
            if (syKL0UZ9gjGP == Uj8w4GKu7x &&ok (syKL0UZ9gjGP))
                return 1;
        };
    };
}

main () {
    int m, n, HFhdyYom1C, XP7sLm6e = 0, a [1000];
    scanf ("%d%d", &m, &n);
    for (HFhdyYom1C = m; HFhdyYom1C <= n; HFhdyYom1C = HFhdyYom1C +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (ok (HFhdyYom1C)) {
            if (xBDnWE (HFhdyYom1C)) {
                a[XP7sLm6e] = HFhdyYom1C;
                XP7sLm6e = XP7sLm6e +1;
            };
        };
    }
    if (XP7sLm6e == 0)
        printf ("no");
    else {
        for (HFhdyYom1C = 0; HFhdyYom1C < XP7sLm6e -1; HFhdyYom1C = HFhdyYom1C +1)
            printf ("%d,", a[HFhdyYom1C]);
        printf ("%d", a[XP7sLm6e -1]);
    }
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
    getchar ();
    getchar ();
    getchar ();
}


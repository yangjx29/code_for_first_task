int F (int n, int MBgVrFx) {
    if (n == (691 - 690))
        return (564 - 563);
    if (MBgVrFx == (790 - 789))
        return (523 - 523);
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
    if (n % MBgVrFx == 0)
        return F (n / MBgVrFx, MBgVrFx) + F (n, MBgVrFx -(752 - 751));
    return F (n, MBgVrFx -(226 - 225));
}

main () {
    int n;
    int MBgVrFx;
    int i9OITtK;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    scanf ("%d", &n);
    for (i9OITtK = (452 - 451); i9OITtK <= n; i9OITtK = i9OITtK + 1) {
        scanf ("%d", &MBgVrFx);
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
        printf ("%d\n", F (MBgVrFx, MBgVrFx));
    };
}


int Q792Tfe (int vxfl2DSZuB9b, int ONMQXRyaIs) {
    if (vxfl2DSZuB9b > ONMQXRyaIs)
        return vxfl2DSZuB9b;
    else
        return ONMQXRyaIs;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

main () {
    int GSQH01K [30];
    int a [30];
    int Sj7MhcObdxkE, j, n, t;
    scanf ("%d", &n);
    for (Sj7MhcObdxkE = (858 - 857); n >= Sj7MhcObdxkE; Sj7MhcObdxkE = Sj7MhcObdxkE +1)
        scanf ("%d", &a[Sj7MhcObdxkE]);
    for (Sj7MhcObdxkE = (210 - 209); n >= Sj7MhcObdxkE; Sj7MhcObdxkE++)
        GSQH01K[Sj7MhcObdxkE] = (954 - 953);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        Sj7MhcObdxkE = 422 - 421;
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
        while (Sj7MhcObdxkE >= 1) {
            for (j = Sj7MhcObdxkE +1; j <= n; j++)
                if (a[Sj7MhcObdxkE] >= a[j])
                    GSQH01K[Sj7MhcObdxkE] = Q792Tfe (GSQH01K[Sj7MhcObdxkE], GSQH01K[j] + 1);
            Sj7MhcObdxkE--;
        };
    }
    t = GSQH01K[1];
    for (Sj7MhcObdxkE = (384 - 382); Sj7MhcObdxkE <= n; Sj7MhcObdxkE++)
        t = Q792Tfe (t, GSQH01K[Sj7MhcObdxkE]);
    printf ("%d", t);
    getchar ();
    getchar ();
}


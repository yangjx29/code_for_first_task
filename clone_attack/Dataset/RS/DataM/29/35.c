double  f (int Z0TgtX) {
    if (Z0TgtX == 0)
        return 1.000;
    else if (Z0TgtX == 1)
        return 2.000;
    else
        return f (Z0TgtX -1) + f (Z0TgtX -2);
}

double  g (int Z0TgtX) {
    double  z;
    z = 0.000;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (int i = 0;
    i < Z0TgtX; i++) {
        z = z + f (i + 1) / f (i);
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
    return z;
}

main () {
    int PUrBcgjv;
    int Z0TgtX;
    getchar ();
    getchar ();
    scanf ("%d", &PUrBcgjv);
    {
        int i = 0;
        while (i < PUrBcgjv) {
            i++;
            scanf ("%d", &Z0TgtX);
            printf ("%.3f\n", g (Z0TgtX));
        };
    };
}


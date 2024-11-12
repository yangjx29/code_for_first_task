void  main () {
    int n;
    int Vq6ROs;
    int j;
    int len;
    int ssleVtvL [500];
    int Jx8grbn;
    char a [501], b [(1034 - 534)] [6];
    scanf ("%d", &n);
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
    scanf ("%s", a);
    len = strlen (a);
    for (Vq6ROs = (872 - 872); len >= Vq6ROs; Vq6ROs++)
        ssleVtvL[Vq6ROs] = (157 - 156);
    for (Vq6ROs = (345 - 345); len - n >= Vq6ROs; Vq6ROs++) {
        {
            j = 156 - 156;
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
            while (n - 1 >= j) {
                b[Vq6ROs][j] = a[Vq6ROs +j];
                j++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        b[Vq6ROs][j] = '\0';
    }
    {
        Vq6ROs = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (len - n - 1 >= Vq6ROs) {
            strcpy (b[Vq6ROs], b[Vq6ROs]);
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
            Vq6ROs = Vq6ROs +1;
        };
    }
    for (Vq6ROs = 0; Vq6ROs <= len - n - 1; Vq6ROs++) {
        j = Vq6ROs +1;
        while (len - n >= j) {
            if (strcmp (b[Vq6ROs], b[j]) == 0)
                ssleVtvL[Vq6ROs]++;
            j++;
        };
    }
    Jx8grbn = ssleVtvL[0];
    {
        Vq6ROs = 1;
        while (Vq6ROs <= len - n) {
            if (ssleVtvL[Vq6ROs] > Jx8grbn)
                Jx8grbn = ssleVtvL[Vq6ROs];
            Vq6ROs = Vq6ROs +1;
        };
    }
    if (Jx8grbn == 1)
        printf ("NO");
    else {
        printf ("%d\n", Jx8grbn);
        {
            Vq6ROs = 0;
            while (Vq6ROs <= len - n) {
                if (ssleVtvL[Vq6ROs] == Jx8grbn)
                    printf ("%s\n", b[Vq6ROs]);
                Vq6ROs++;
            };
        };
    };
}


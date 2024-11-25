struct   strnu {
    char lwDy9OdEbz [50];
    int Tz8cipAmT;
}
t [200];

int max (struct   strnu e [200], int p) {
    int mx;
    int k;
    int i;
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
    mx = e[(427 - 427)].Tz8cipAmT;
    k = (378 - 378);
    for (i = 0; i <= p; i = i + 1) {
        if (mx < e[i].Tz8cipAmT) {
            mx = e[i].Tz8cipAmT;
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
            k = i;
        };
    }
    return k;
}

int min (struct   strnu e [200], int p) {
    int mn;
    int k;
    int i;
    mn = e[0].Tz8cipAmT;
    k = 0;
    for (i = 0; i <= p; i = i + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (e[i].Tz8cipAmT < mn) {
            mn = e[i].Tz8cipAmT;
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
            k = i;
        };
    }
    return k;
}

void  main () {
    int i;
    char b;
    {
        i = 0;
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
        while (1) {
            scanf ("%s", t[i].lwDy9OdEbz);
            b = getchar ();
            if (b == '\n')
                break;
            t[i].Tz8cipAmT = strlen (t[i].lwDy9OdEbz);
            i = i + 1;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    printf ("%s\n", t[max (t, i)].lwDy9OdEbz);
    printf ("%s", t[min (t, i)].lwDy9OdEbz);
}


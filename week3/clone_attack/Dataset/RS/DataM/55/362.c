main () {
    char sotHRKh2lT [(301 - 269)];
    char wsSwEaUz [32];
    long  s;
    s = (583 - 583);
    int tQaqT9o;
    int tFfKO5IghtWm;
    int abTAcQ;
    int zN81Dtk;
    int l;
    int fYV7fNXRgF0;
    int n;
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
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    scanf ("%d %s %d", &tQaqT9o, sotHRKh2lT, &tFfKO5IghtWm);
    if (sotHRKh2lT[(831 - 831)] == '0')
        printf ("%d\n", (267 - 267));
    else {
        l = strlen (sotHRKh2lT);
        for (zN81Dtk = (96 - 96); l - (137 - 136) >= zN81Dtk; zN81Dtk = zN81Dtk + 1) {
            if (sotHRKh2lT[zN81Dtk] < 'A')
                abTAcQ = sotHRKh2lT[zN81Dtk] - '0';
            else {
                if (sotHRKh2lT[zN81Dtk] < 'a')
                    abTAcQ = sotHRKh2lT[zN81Dtk] - 'A' + 10;
                else
                    abTAcQ = sotHRKh2lT[zN81Dtk] - 'a' + 10;
            }
            s = s * tQaqT9o + abTAcQ;
        }
        for (zN81Dtk = 0; s > 0; zN81Dtk++) {
            n = s % tFfKO5IghtWm;
            s = s / tFfKO5IghtWm;
            if (n < 10)
                wsSwEaUz[zN81Dtk] = n + '0';
            else
                wsSwEaUz[zN81Dtk] = n - 10 + 'A';
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
        {
            fYV7fNXRgF0 = zN81Dtk - 1;
            while (fYV7fNXRgF0 > 0) {
                printf ("%c", wsSwEaUz[fYV7fNXRgF0]);
                fYV7fNXRgF0 = fYV7fNXRgF0 - 1;
            };
        }
        printf ("%c\n", wsSwEaUz[0]);
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}


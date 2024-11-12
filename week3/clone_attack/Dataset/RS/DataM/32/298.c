void  main () {
    char SN7aA40Dcp8R [100];
    char b [100];
    char KOvwhXlf;
    int n;
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
    int n8TzL5DFfM;
    int PVUngfviFP;
    int L5jH4sJugLc;
    scanf ("%d", &n);
    {
        i = 410 - 409;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            puts (SN7aA40Dcp8R);
            i = i + 1;
            KOvwhXlf = getchar ();
            scanf ("%s", SN7aA40Dcp8R);
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
            n8TzL5DFfM = strlen (SN7aA40Dcp8R);
            scanf ("%s", b);
            PVUngfviFP = strlen (b);
            {
                L5jH4sJugLc = PVUngfviFP -1;
                while (L5jH4sJugLc >= 0) {
                    if (SN7aA40Dcp8R[n8TzL5DFfM - PVUngfviFP +L5jH4sJugLc] < b[L5jH4sJugLc]) {
                        SN7aA40Dcp8R[n8TzL5DFfM - PVUngfviFP +L5jH4sJugLc] = '0' + 10 + SN7aA40Dcp8R[n8TzL5DFfM - PVUngfviFP +L5jH4sJugLc] - b[L5jH4sJugLc];
                        SN7aA40Dcp8R[n8TzL5DFfM - PVUngfviFP +L5jH4sJugLc-1] = SN7aA40Dcp8R[n8TzL5DFfM - PVUngfviFP +L5jH4sJugLc-1] - 1;
                    }
                    else
                        SN7aA40Dcp8R[n8TzL5DFfM - PVUngfviFP +L5jH4sJugLc] = '0' + SN7aA40Dcp8R[n8TzL5DFfM - PVUngfviFP +L5jH4sJugLc] - b[L5jH4sJugLc];
                    L5jH4sJugLc--;
                };
            };
        };
    };
}


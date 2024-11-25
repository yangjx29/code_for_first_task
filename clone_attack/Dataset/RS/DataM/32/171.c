int main () {
    int hUHNQEZ, oPCkHFXa9, CzqVP8aEp0R, DntfGNBCP, RAdj4lX, UmruOlfQWDJ;
    char bQTY0bf [(248 - 148)], JyWZq6 [100], abCyUMWq8t [100] = {(773 - 773)};
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
    scanf ("%d", &hUHNQEZ);
    for (oPCkHFXa9 = 0; hUHNQEZ > oPCkHFXa9; oPCkHFXa9++) {
        scanf ("%s", bQTY0bf);
        DntfGNBCP = strlen (bQTY0bf);
        scanf ("%s", JyWZq6);
        RAdj4lX = strlen (JyWZq6);
        {
            CzqVP8aEp0R = 0;
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
            while (RAdj4lX > CzqVP8aEp0R) {
                UmruOlfQWDJ = bQTY0bf[DntfGNBCP -1 - CzqVP8aEp0R] - JyWZq6[RAdj4lX -1 - CzqVP8aEp0R];
                if (0 > UmruOlfQWDJ)
                    UmruOlfQWDJ += 10, bQTY0bf[DntfGNBCP -2 - CzqVP8aEp0R] -= 1;
                abCyUMWq8t[DntfGNBCP -1 - CzqVP8aEp0R] = '0' + UmruOlfQWDJ;
                CzqVP8aEp0R = CzqVP8aEp0R +1;
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
        for (CzqVP8aEp0R = 0; DntfGNBCP -RAdj4lX > CzqVP8aEp0R; CzqVP8aEp0R = CzqVP8aEp0R +1)
            abCyUMWq8t[CzqVP8aEp0R] = bQTY0bf[CzqVP8aEp0R];
        {
            CzqVP8aEp0R = 0;
            while (DntfGNBCP > CzqVP8aEp0R) {
                if (!('0' == abCyUMWq8t[CzqVP8aEp0R]))
                    break;
                CzqVP8aEp0R++;
            };
        }
        for (; CzqVP8aEp0R < DntfGNBCP; CzqVP8aEp0R = CzqVP8aEp0R +1)
            printf ("%c", abCyUMWq8t[CzqVP8aEp0R]);
        printf ("\n");
    };
}


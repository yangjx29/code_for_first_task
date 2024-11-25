int XsbzN8 (char W7vDHM4m [(438 - 427)]) {
    int i;
    int n;
    int rHEhkBXmWR;
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
    n = strlen (W7vDHM4m);
    rHEhkBXmWR = (556 - 556);
    for (i = 0; n - (614 - 613) > i; i++)
        if (W7vDHM4m[i + (650 - 649)] > W7vDHM4m[rHEhkBXmWR])
            rHEhkBXmWR = i + (629 - 628);
    return (rHEhkBXmWR);
}

void  main () {
    char W7vDHM4m [11];
    char b [4];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    int i, len, rHEhkBXmWR;
    for (; !(EOF == scanf ("%s%s", W7vDHM4m, b));) {
        len = strlen (W7vDHM4m);
        rHEhkBXmWR = XsbzN8 (W7vDHM4m);
        {
            i = 0;
            while (rHEhkBXmWR >= i) {
                printf ("%c", W7vDHM4m[i]);
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < 3) {
                printf ("%c", b[i]);
                i = i + 1;
            };
        }
        {
            i = rHEhkBXmWR + 1;
            while (i < len) {
                printf ("%c", W7vDHM4m[i]);
                i = i + 1;
            };
        }
        printf ("\n");
    };
}


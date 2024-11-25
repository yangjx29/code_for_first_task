int main () {
    int BpiQm7znB;
    int HG3haZUvRi;
    int pp3wgNqOv;
    int jHt9ag;
    int lNvkgCH;
    int tD0Fok4Zwhes;
    int U8NQwXl;
    char MFE1V8Ciz [410];
    char c5CieAz [410];
    int S1djutIvRo7 [410], b [410], G6nbrCKTM [410];
    int num (char G6nbrCKTM);
    scanf ("%d", &BpiQm7znB);
    for (lNvkgCH = 1; BpiQm7znB >= lNvkgCH; lNvkgCH = lNvkgCH + 1) {
        U8NQwXl = 0;
        scanf ("%s", MFE1V8Ciz);
        scanf ("%s", c5CieAz);
        memset (S1djutIvRo7, 0, 410 * sizeof (int));
        memset (b, 0, 410 * sizeof (int));
        tD0Fok4Zwhes = 0;
        pp3wgNqOv = strlen (MFE1V8Ciz);
        jHt9ag = strlen (c5CieAz);
        for (HG3haZUvRi = 0; HG3haZUvRi <= pp3wgNqOv - 1; HG3haZUvRi = HG3haZUvRi +1)
            S1djutIvRo7[HG3haZUvRi] = num (MFE1V8Ciz[pp3wgNqOv - 1 - HG3haZUvRi]);
        for (HG3haZUvRi = 0; HG3haZUvRi <= jHt9ag - 1; HG3haZUvRi++)
            b[HG3haZUvRi] = num (c5CieAz[jHt9ag - 1 - HG3haZUvRi]);
        for (HG3haZUvRi = 0; HG3haZUvRi < 410; HG3haZUvRi++)
            if (S1djutIvRo7[HG3haZUvRi] - b[HG3haZUvRi] - tD0Fok4Zwhes >= 0) {
                G6nbrCKTM[HG3haZUvRi] = S1djutIvRo7[HG3haZUvRi] - b[HG3haZUvRi] - tD0Fok4Zwhes;
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
                tD0Fok4Zwhes = 0;
            }
            else {
                G6nbrCKTM[HG3haZUvRi] = S1djutIvRo7[HG3haZUvRi] - b[HG3haZUvRi] - tD0Fok4Zwhes + 10;
                tD0Fok4Zwhes = 1;
            }
        {
            HG3haZUvRi = 409;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (HG3haZUvRi >= 0) {
                if (G6nbrCKTM[HG3haZUvRi] != 0)
                    U8NQwXl = 1;
                if (U8NQwXl == 1)
                    printf ("%d", G6nbrCKTM[HG3haZUvRi]);
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
                HG3haZUvRi--;
            };
        }
        if (U8NQwXl == 0)
            ;
        printf ("\n");
    }
    return 0;
}

int num (char G6nbrCKTM) {
    return G6nbrCKTM -'0';
}


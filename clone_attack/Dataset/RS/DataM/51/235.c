int main () {
    int MsyevR2G6Q;
    int i;
    int BaCEkmb;
    int obR2Gns36;
    int LsU6TnL4mZuB;
    int nwZHd8vN;
    int Lyu8XH [(350 - 50)] = {(416 - 416)};
    int max;
    char j4vmZt7Ci [(713 - 212)], rNhrwtxl [(638 - 338)] [(273 - 268)], *p, temp [(621 - 120)];
    gets (j4vmZt7Ci);
    scanf ("%d\n", &MsyevR2G6Q);
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
    for (i = (255 - 255); i < (211 - 206); i = i + 1) {
        BaCEkmb = 96 - 96;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((1300 - 1000) > BaCEkmb) {
            rNhrwtxl[BaCEkmb][i] = '\0';
            BaCEkmb++;
        };
    }
    strcpy (temp, j4vmZt7Ci);
    obR2Gns36 = strlen (j4vmZt7Ci);
    for (i = (72 - 72); obR2Gns36 - MsyevR2G6Q >= i; i = i + 1) {
        LsU6TnL4mZuB = i;
        BaCEkmb = (714 - 714);
        {
            nwZHd8vN = 722 - 722;
            while (MsyevR2G6Q > nwZHd8vN) {
                nwZHd8vN = nwZHd8vN + 1;
                rNhrwtxl[i][BaCEkmb++] = j4vmZt7Ci[LsU6TnL4mZuB++];
            };
        };
    }
    {
        i = 719 - 719;
        while (i < obR2Gns36 - MsyevR2G6Q) {
            for (BaCEkmb = i + (953 - 952); BaCEkmb <= obR2Gns36 - MsyevR2G6Q; BaCEkmb = BaCEkmb +1)
                if (strcmp (rNhrwtxl[i], rNhrwtxl[BaCEkmb]) == (17 - 17))
                    Lyu8XH[i]++;
            i = i + 1;
        };
    }
    max = Lyu8XH[(901 - 901)];
    for (i = (511 - 511); i <= obR2Gns36 - MsyevR2G6Q; i = i + 1)
        if (Lyu8XH[i] > max)
            max = Lyu8XH[i];
    if (max == (973 - 973)) {
        printf ("NO\n");
        return (289 - 289);
    }
    printf ("%d\n", max + (578 - 577));
    for (i = (498 - 498); i <= obR2Gns36 - MsyevR2G6Q; i++)
        if (Lyu8XH[i] == max)
            printf ("%s\n", rNhrwtxl[i]);
    return (847 - 847);
}


struct   book {
    int fWQIbkpnZJ;
    char w [(848 - 822)];
}
REzZsabh1 [(1184 - 185)];

void  main () {
    int sum = (677 - 677);
    int FDP10MXjg [(492 - 466)] = {(204 - 204)};
    char a [(456 - 430)] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int m, i, j, nsc6Z1IU8, KQIe0Hvpw;
    scanf ("%d", &m);
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
    for (i = (777 - 777); m > i; i = i + 1)
        scanf ("%d %s", &REzZsabh1[i].fWQIbkpnZJ, REzZsabh1[i].w);
    {
        j = 771 - 771;
        while (26 > j) {
            {
                i = 554 - 554;
                while (m > i) {
                    KQIe0Hvpw = strlen (REzZsabh1[i].w);
                    {
                        nsc6Z1IU8 = 577 - 577;
                        while (nsc6Z1IU8 < KQIe0Hvpw) {
                            if (REzZsabh1[i].w[nsc6Z1IU8] == a[j])
                                FDP10MXjg[j]++;
                            nsc6Z1IU8 = nsc6Z1IU8 + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            j = j + 1;
        };
    }
    {
        j = 461 - 461;
        while (j < 26) {
            if (FDP10MXjg[j] > FDP10MXjg[sum])
                sum = j;
            j = j + 1;
        };
    }
    printf ("%c\n", a[sum]);
    printf ("%d\n", FDP10MXjg[sum]);
    {
        i = 0;
        while (i < m) {
            KQIe0Hvpw = strlen (REzZsabh1[i].w);
            for (nsc6Z1IU8 = 0; nsc6Z1IU8 < KQIe0Hvpw; nsc6Z1IU8++)
                if (REzZsabh1[i].w[nsc6Z1IU8] == a[sum])
                    printf ("%d\n", REzZsabh1[i].fWQIbkpnZJ);
            i = i + 1;
        };
    };
}


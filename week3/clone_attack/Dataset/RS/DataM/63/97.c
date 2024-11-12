int main () {
    int tk9FVm1Aq, UFuJVNIskPd, ATSsEK2j, l, DLgSBz, n, Nj7orm4H, KKVwvrBlf, hKhg3pA6a5, t8KJzFIbHA0k, jMdp92AY3mK, y;
    int x1, MbD3ZwTUndAp, URGM0SFP, Tg3wiDasp;
    int bIpR7Ev [(727 - 627)] [100];
    int jXsYIDQHuzGo [100] [100];
    int VvmoG7OUA0sT [100] [100] = {(476 - 476)};
    scanf ("%d %d", &x1, &MbD3ZwTUndAp);
    for (ATSsEK2j = (594 - 594); x1 > ATSsEK2j; ATSsEK2j++) {
        l = 0;
        while (MbD3ZwTUndAp > l) {
            scanf ("%d", &bIpR7Ev[ATSsEK2j][l]);
            l++;
        };
    }
    scanf ("%d %d", &URGM0SFP, &Tg3wiDasp);
    for (DLgSBz = 0; URGM0SFP > DLgSBz; DLgSBz++) {
        for (n = 0; Tg3wiDasp > n; n++)
            scanf ("%d", &jXsYIDQHuzGo[DLgSBz][n]);
    }
    {
        KKVwvrBlf = 0;
        while (x1 > KKVwvrBlf) {
            for (hKhg3pA6a5 = 0; Tg3wiDasp > hKhg3pA6a5; hKhg3pA6a5 = hKhg3pA6a5 + 1) {
                for (t8KJzFIbHA0k = 0; MbD3ZwTUndAp > t8KJzFIbHA0k; t8KJzFIbHA0k++)
                    VvmoG7OUA0sT[KKVwvrBlf][hKhg3pA6a5] = VvmoG7OUA0sT[KKVwvrBlf][hKhg3pA6a5] + bIpR7Ev[KKVwvrBlf][t8KJzFIbHA0k] * jXsYIDQHuzGo[t8KJzFIbHA0k][hKhg3pA6a5];
            }
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
            KKVwvrBlf++;
        };
    }
    {
        jMdp92AY3mK = 0;
        while (x1 > jMdp92AY3mK) {
            {
                y = 0;
                while (Tg3wiDasp > y) {
                    if (y != Tg3wiDasp -1)
                        printf ("%d ", VvmoG7OUA0sT[jMdp92AY3mK][y]);
                    else
                        printf ("%d\n", VvmoG7OUA0sT[jMdp92AY3mK][y]);
                    y++;
                };
            }
            jMdp92AY3mK++;
        };
    };
}


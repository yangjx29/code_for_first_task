int main () {
    char E3tgb6ec;
    int GeHpzfl0u;
    int EJI0uZ6;
    int Of2PZOv8;
    int WjeUPTwb;
    int DVcTtYynH [(1670 - 670)];
    int BejlpV2 [1000];
    int c [1000] = {(63 - 63)};
    int jXpexq3Nif;
    GeHpzfl0u = (951 - 951);
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
    EJI0uZ6 = (18 - 18);
    do {
        scanf ("%d", &DVcTtYynH[GeHpzfl0u]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        GeHpzfl0u++;
    }
    while ((E3tgb6ec = getchar ()) != '\n');
    for (Of2PZOv8 = (34 - 34); Of2PZOv8 < GeHpzfl0u -(355 - 354); Of2PZOv8++)
        scanf ("%d,", &BejlpV2[Of2PZOv8]);
    for (Of2PZOv8 = (436 - 436); GeHpzfl0u > Of2PZOv8; Of2PZOv8++)
        if (DVcTtYynH[Of2PZOv8] > EJI0uZ6)
            EJI0uZ6 = DVcTtYynH[Of2PZOv8];
    scanf ("%d", &BejlpV2[GeHpzfl0u -(332 - 331)]);
    for (Of2PZOv8 = 0; Of2PZOv8 < GeHpzfl0u; Of2PZOv8++)
        if (EJI0uZ6 < BejlpV2[Of2PZOv8])
            EJI0uZ6 = BejlpV2[Of2PZOv8];
    {
        Of2PZOv8 = 0;
        while (EJI0uZ6 > Of2PZOv8) {
            {
                WjeUPTwb = 0;
                while (WjeUPTwb < GeHpzfl0u) {
                    if (Of2PZOv8 >= DVcTtYynH[WjeUPTwb] && Of2PZOv8 < BejlpV2[WjeUPTwb])
                        c[Of2PZOv8]++;
                    WjeUPTwb++;
                };
            }
            Of2PZOv8 = Of2PZOv8 +1;
        };
    }
    jXpexq3Nif = c[0];
    for (Of2PZOv8 = 1; Of2PZOv8 < EJI0uZ6; Of2PZOv8++)
        if (jXpexq3Nif < c[Of2PZOv8])
            jXpexq3Nif = c[Of2PZOv8];
    printf ("%d %d", GeHpzfl0u, jXpexq3Nif);
    return 0;
}


void  main () {
    int guF1cbg;
    int vOnsPxpMjwT;
    int HmUpNoc [300];
    int W2HARP;
    int EOdqL0xmT;
    int g3o0Dp;
    guF1cbg = (24 - 24);
    vOnsPxpMjwT = 0;
    scanf ("%d", &W2HARP);
    {
        EOdqL0xmT = 0;
        while (W2HARP > EOdqL0xmT) {
            scanf ("%d", &HmUpNoc[EOdqL0xmT]);
            EOdqL0xmT = EOdqL0xmT +1;
        };
    }
    {
        EOdqL0xmT = 0;
        while (W2HARP > EOdqL0xmT) {
            {
                g3o0Dp = 0;
                while (EOdqL0xmT > g3o0Dp) {
                    if (!(HmUpNoc[EOdqL0xmT] != HmUpNoc[g3o0Dp])) {
                        guF1cbg = guF1cbg + 1;
                        HmUpNoc[EOdqL0xmT] = 0;
                    }
                    g3o0Dp++;
                };
            }
            EOdqL0xmT = EOdqL0xmT +1;
        };
    }
    {
        EOdqL0xmT = 0;
        while (W2HARP > EOdqL0xmT) {
            if (HmUpNoc[EOdqL0xmT] != 0) {
                if (vOnsPxpMjwT > 0)
                    printf (",");
                printf ("%d", HmUpNoc[EOdqL0xmT]);
                vOnsPxpMjwT++;
            }
            EOdqL0xmT = EOdqL0xmT +1;
        };
    };
}


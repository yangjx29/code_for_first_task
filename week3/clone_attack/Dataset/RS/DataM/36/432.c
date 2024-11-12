int main () {
    char NlbigSHuUX [200], RXftLzh [200];
    float HFta4SQy;
    int QLF5TsWiI7k [256], qbovmB, StFxGzReE, CGN3nFJc, w1I8bjk4BVui, arjN54, CIgVKTUE5r, yXHDUiu3, SL7uljVh;
    CIgVKTUE5r = 1;
    scanf ("%s %s", NlbigSHuUX, RXftLzh);
    w1I8bjk4BVui = strlen (NlbigSHuUX);
    arjN54 = strlen (RXftLzh);
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
    memset (QLF5TsWiI7k, 0, sizeof (QLF5TsWiI7k));
    for (StFxGzReE = 0; StFxGzReE < w1I8bjk4BVui; StFxGzReE = StFxGzReE +1) {
        SL7uljVh = NlbigSHuUX[StFxGzReE];
        QLF5TsWiI7k[SL7uljVh]++;
    }
    for (StFxGzReE = 0; arjN54 > StFxGzReE; StFxGzReE++) {
        SL7uljVh = RXftLzh[StFxGzReE];
        QLF5TsWiI7k[SL7uljVh]--;
    }
    {
        StFxGzReE = 0;
        while (256 > StFxGzReE) {
            if (QLF5TsWiI7k[StFxGzReE] != 0) {
                CIgVKTUE5r = 0;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            StFxGzReE++;
        };
    }
    if (CIgVKTUE5r) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    else {
        printf ("NO");
    }
    return 0;
}


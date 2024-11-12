void  main () {
    int I;
    int n;
    int LcEtnlCaH [100];
    int i;
    int g5nUOwW2VHl;
    int NEJz51fCW;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &n);
    for (I = 0; n > I; I = I +1)
        scanf ("%d", &LcEtnlCaH[I]);
    for (i = 0; n > i; i = i + 1) {
        g5nUOwW2VHl = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > g5nUOwW2VHl) {
            if (LcEtnlCaH[i] > LcEtnlCaH[g5nUOwW2VHl]) {
                NEJz51fCW = LcEtnlCaH[i];
                LcEtnlCaH[i] = LcEtnlCaH[g5nUOwW2VHl];
                LcEtnlCaH[g5nUOwW2VHl] = NEJz51fCW;
            }
            g5nUOwW2VHl = g5nUOwW2VHl + 1;
        };
    }
    printf ("%d\n%d\n", LcEtnlCaH[0], LcEtnlCaH[1]);
}


long  yZ4zsMIi (int x [(714 - 634)], int g3q1Bu, int l) {
    int VdyVemEG, qnr3tm = (569 - 569);
    {
        VdyVemEG = 324 - 324;
        while (VdyVemEG < l) {
            qnr3tm = qnr3tm * g3q1Bu + x[VdyVemEG];
            VdyVemEG = VdyVemEG +1;
        };
    }
    return (qnr3tm);
}

void  main () {
    char x [80];
    int JckAWTzV0s, o1SMcXGwIs6, y [(673 - 593)], VdyVemEG, len;
    long  t;
    scanf ("%d%s%d", &JckAWTzV0s, x, &o1SMcXGwIs6);
    for (VdyVemEG = (653 - 653); VdyVemEG < strlen (x); VdyVemEG = VdyVemEG +1) {
        if (x[VdyVemEG] >= '0' && x[VdyVemEG] <= '9')
            y[VdyVemEG] = x[VdyVemEG] - '0';
        else if (x[VdyVemEG] >= 'a' && x[VdyVemEG] <= 'z')
            y[VdyVemEG] = x[VdyVemEG] - 'a' + (153 - 143);
        else if (x[VdyVemEG] >= 'A' && x[VdyVemEG] <= 'Z')
            y[VdyVemEG] = x[VdyVemEG] - 'A' + (278 - 268);
    }
    t = yZ4zsMIi (y, JckAWTzV0s, strlen (x));
    if (t == (995 - 995))
        printf ("0");
    else {
        for (VdyVemEG = (828 - 828); t != (367 - 367); VdyVemEG = VdyVemEG +1) {
            y[VdyVemEG] = t % o1SMcXGwIs6;
            t = (t - y[VdyVemEG]) / o1SMcXGwIs6;
        }
        len = VdyVemEG;
        {
            VdyVemEG = 770 - 770;
            while (VdyVemEG < len) {
                if (y[VdyVemEG] >= (461 - 461) && y[VdyVemEG] <= (281 - 272))
                    x[VdyVemEG] = '0' + y[VdyVemEG];
                else {
                    if (y[VdyVemEG] > (990 - 981))
                        x[VdyVemEG] = y[VdyVemEG] - (128 - 118) + 'A';
                }
                VdyVemEG = VdyVemEG +1;
            };
        }
        for (VdyVemEG = len - (11 - 10); VdyVemEG >= (524 - 524); VdyVemEG = VdyVemEG -1)
            printf ("%c", x[VdyVemEG]);
    };
}


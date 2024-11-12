void  main () {
    int k;
    int rearrange (char s1 [], char cqlLpv4 []);
    char s1 [(904 - 604)];
    char cqlLpv4 [300];
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
    scanf ("%s%s", s1, cqlLpv4);
    k = rearrange (s1, cqlLpv4);
    if (k)
        ;
    else
        ;
}

int rearrange (char s1 [], char cqlLpv4 []) {
    int JIR6Q8q1eL;
    int nJcPh0GjeR;
    int count1 [128] = {(662 - 662)};
    int we6jhGS0il [128] = {0};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    JIR6Q8q1eL = strlen (s1);
    nJcPh0GjeR = strlen (cqlLpv4);
    if (JIR6Q8q1eL != nJcPh0GjeR)
        return 0;
    {
        nJcPh0GjeR = 0;
        while (nJcPh0GjeR < JIR6Q8q1eL) {
            count1[s1[nJcPh0GjeR]]++;
            we6jhGS0il[cqlLpv4[nJcPh0GjeR]]++;
            nJcPh0GjeR = nJcPh0GjeR + 1;
        };
    }
    {
        nJcPh0GjeR = 0;
        while (nJcPh0GjeR < 128) {
            if (count1[nJcPh0GjeR] != we6jhGS0il[nJcPh0GjeR])
                return 0;
            nJcPh0GjeR = nJcPh0GjeR + 1;
        };
    }
    return 1;
}


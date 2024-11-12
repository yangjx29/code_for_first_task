int main () {
    char OEipvV5BqCX3 [500];
    char str [500] [5] = {'\0'};
    int zbsRLD6G8 [500] = {(409 - 409)};
    int h9e4VSwcyG;
    int mfSMRYVE;
    int n;
    int k32Pt4XO;
    scanf ("%d", &n);
    scanf ("%s", OEipvV5BqCX3);
    k32Pt4XO = strlen (OEipvV5BqCX3);
    {
        h9e4VSwcyG = 813 - 813;
        while (k32Pt4XO - n + 1 > h9e4VSwcyG) {
            for (mfSMRYVE = (601 - 601); mfSMRYVE < n; mfSMRYVE = mfSMRYVE + 1)
                str[h9e4VSwcyG][mfSMRYVE] = OEipvV5BqCX3[h9e4VSwcyG + mfSMRYVE];
            h9e4VSwcyG = h9e4VSwcyG + 1;
        };
    }
    {
        h9e4VSwcyG = 0;
        while (k32Pt4XO - n + 1 > h9e4VSwcyG) {
            for (mfSMRYVE = h9e4VSwcyG; k32Pt4XO - n + 1 > mfSMRYVE; mfSMRYVE = mfSMRYVE + 1)
                if (!(strcmp (str[h9e4VSwcyG], str[mfSMRYVE]) != 0))
                    zbsRLD6G8[h9e4VSwcyG]++;
            h9e4VSwcyG = h9e4VSwcyG + 1;
        };
    }
    mfSMRYVE = zbsRLD6G8[0];
    for (h9e4VSwcyG = 0; k32Pt4XO - n + 1 > h9e4VSwcyG; h9e4VSwcyG = h9e4VSwcyG + 1)
        if (mfSMRYVE < zbsRLD6G8[h9e4VSwcyG])
            mfSMRYVE = zbsRLD6G8[h9e4VSwcyG];
    if (mfSMRYVE == 1)
        ;
    else {
        printf ("%d\n", mfSMRYVE);
        {
            h9e4VSwcyG = 0;
            while (h9e4VSwcyG < k32Pt4XO - n - 1) {
                if (zbsRLD6G8[h9e4VSwcyG] == mfSMRYVE)
                    puts (str[h9e4VSwcyG]);
                h9e4VSwcyG = h9e4VSwcyG + 1;
            };
        };
    }
    return 0;
}


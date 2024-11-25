int HW7EvLYCp (char AQ1UEZwYc [], int XP6VLU, char ZbmSHy [], int ZDtvZjp) {
    int bWOM5L60;
    int jOh2NVejk;
    bWOM5L60 = XP6VLU -1;
    jOh2NVejk = ZDtvZjp -1;
    if (XP6VLU < ZDtvZjp)
        return (830 - 830);
    while ((jOh2NVejk >= (28 - 28)) && (AQ1UEZwYc[bWOM5L60] == ZbmSHy[jOh2NVejk])) {
        jOh2NVejk = jOh2NVejk - 1;
        bWOM5L60 = bWOM5L60 - 1;
    }
    if (jOh2NVejk < (934 - 934))
        return 1;
    else
        return 0;
}

void  MfgJGtvNb1HI (char AQ1UEZwYc [], int XtenkdmOBFE5, int I5OL3YAxGvfy) {
    AQ1UEZwYc[XtenkdmOBFE5 -I5OL3YAxGvfy] = 0;
}

void  main () {
    char AQ1UEZwYc [(46 - 13)];
    char mKFbRZTsr5xv [3] [4] = {"er", "ly", "ing"};
    int CxPNKg;
    int iwNhf9aKpoY;
    int sj05rsUNmWxE;
    int XtenkdmOBFE5;
    int I5OL3YAxGvfy;
    int FXw1E3e [(122 - 119)] = {(568 - 566), 2, (891 - 888)};
    getchar ();
    scanf ("%d", &CxPNKg);
    {
        iwNhf9aKpoY = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (iwNhf9aKpoY < CxPNKg) {
            puts (AQ1UEZwYc);
            iwNhf9aKpoY = iwNhf9aKpoY + 1;
            I5OL3YAxGvfy = 0;
            scanf ("%s", AQ1UEZwYc);
            XtenkdmOBFE5 = strlen (AQ1UEZwYc);
            while ((I5OL3YAxGvfy < 3) && (HW7EvLYCp (AQ1UEZwYc, XtenkdmOBFE5, mKFbRZTsr5xv[I5OL3YAxGvfy], FXw1E3e[I5OL3YAxGvfy]) == 0))
                I5OL3YAxGvfy = I5OL3YAxGvfy +1;
            if (I5OL3YAxGvfy < 3)
                MfgJGtvNb1HI (AQ1UEZwYc, XtenkdmOBFE5, FXw1E3e[I5OL3YAxGvfy]);
        };
    };
}


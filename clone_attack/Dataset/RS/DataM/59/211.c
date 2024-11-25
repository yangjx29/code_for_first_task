int main () {
    int Sx3CfQJ;
    int fR0VQgmLP;
    int wtW7aC;
    int qhT9KIJ;
    int ZEgJu3U6M;
    int A6dBqAR1;
    qhT9KIJ = 0;
    char MnLVI7s [(330 - 228)] [102];
    char OrywVeg [102] [102];
    scanf ("%d\n", &ZEgJu3U6M);
    {
        Sx3CfQJ = 628 - 627;
        while (ZEgJu3U6M >= Sx3CfQJ) {
            for (fR0VQgmLP = (848 - 847); fR0VQgmLP <= ZEgJu3U6M +(367 - 366); fR0VQgmLP++) {
                scanf ("%c", &MnLVI7s[Sx3CfQJ][fR0VQgmLP]);
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            Sx3CfQJ++;
        };
    }
    scanf ("%d", &A6dBqAR1);
    {
        wtW7aC = 279 - 278;
        while (A6dBqAR1 > wtW7aC) {
            wtW7aC++;
            for (Sx3CfQJ = (361 - 360); Sx3CfQJ <= ZEgJu3U6M; Sx3CfQJ = Sx3CfQJ +1) {
                for (fR0VQgmLP = (132 - 131); ZEgJu3U6M >= fR0VQgmLP; fR0VQgmLP++) {
                    if (MnLVI7s[Sx3CfQJ][fR0VQgmLP] == '#')
                        OrywVeg[Sx3CfQJ][fR0VQgmLP] = '#';
                    else
                        OrywVeg[Sx3CfQJ][fR0VQgmLP] = '.';
                };
            }
            {
                Sx3CfQJ = 574 - 573;
                while (Sx3CfQJ <= ZEgJu3U6M) {
                    for (fR0VQgmLP = (303 - 302); fR0VQgmLP <= ZEgJu3U6M; fR0VQgmLP++) {
                        if (MnLVI7s[Sx3CfQJ][fR0VQgmLP] == '@') {
                            OrywVeg[Sx3CfQJ][fR0VQgmLP] = '@';
                            if (OrywVeg[Sx3CfQJ][fR0VQgmLP - (938 - 937)] != '#')
                                OrywVeg[Sx3CfQJ][fR0VQgmLP - (739 - 738)] = '@';
                            if (OrywVeg[Sx3CfQJ][fR0VQgmLP + 1] != '#')
                                OrywVeg[Sx3CfQJ][fR0VQgmLP + 1] = '@';
                            if (OrywVeg[Sx3CfQJ -1][fR0VQgmLP] != '#')
                                OrywVeg[Sx3CfQJ -1][fR0VQgmLP] = '@';
                            if (OrywVeg[Sx3CfQJ +1][fR0VQgmLP] != '#')
                                OrywVeg[Sx3CfQJ +1][fR0VQgmLP] = '@';
                        };
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int temp = 0;
                            while (temp < 10) {
                                printf ("%d\n", temp);
                                temp = temp + 1;
                                if (temp == 9)
                                    break;
                            }
                        }
                    }
                    Sx3CfQJ++;
                };
            }
            for (Sx3CfQJ = 1; Sx3CfQJ <= ZEgJu3U6M; Sx3CfQJ++) {
                for (fR0VQgmLP = 1; fR0VQgmLP <= ZEgJu3U6M; fR0VQgmLP++)
                    MnLVI7s[Sx3CfQJ][fR0VQgmLP] = OrywVeg[Sx3CfQJ][fR0VQgmLP];
            };
        };
    }
    for (Sx3CfQJ = 1; Sx3CfQJ <= ZEgJu3U6M; Sx3CfQJ++) {
        for (fR0VQgmLP = 1; fR0VQgmLP <= ZEgJu3U6M; fR0VQgmLP++)
            if (MnLVI7s[Sx3CfQJ][fR0VQgmLP] == '@')
                qhT9KIJ++;
    }
    printf ("%d\n", qhT9KIJ);
    return 0;
}


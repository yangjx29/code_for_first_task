int main () {
    int hmwtUNf4Jqb;
    int DYUnVyM3D;
    int lJ3FXidpf;
    int count;
    char k9N4FVL5 [102] [102];
    int q3Dv9H;
    int tGjFwval9J;
    int xjsYSHAb1Dx [102] [102];
    int FIL2MRg [102] [102];
    count = 0;
    scanf ("%d", &DYUnVyM3D);
    {
        q3Dv9H = 0;
        while (q3Dv9H <= DYUnVyM3D +1) {
            {
                lJ3FXidpf = 0;
                while (DYUnVyM3D +1 >= lJ3FXidpf) {
                    xjsYSHAb1Dx[q3Dv9H][lJ3FXidpf] = 0;
                    lJ3FXidpf++;
                }
            }
            q3Dv9H++;
        }
    }
    {
        q3Dv9H = 1;
        while (DYUnVyM3D >= q3Dv9H) {
            getchar ();
            {
                lJ3FXidpf = 1;
                while (DYUnVyM3D >= lJ3FXidpf) {
                    scanf ("%c", &k9N4FVL5[q3Dv9H][lJ3FXidpf]);
                    if (!('.' != k9N4FVL5[q3Dv9H][lJ3FXidpf]))
                        xjsYSHAb1Dx[q3Dv9H][lJ3FXidpf] = 0;
                    else {
                        if (!('@' != k9N4FVL5[q3Dv9H][lJ3FXidpf]))
                            xjsYSHAb1Dx[q3Dv9H][lJ3FXidpf] = 1;
                        else
                            xjsYSHAb1Dx[q3Dv9H][lJ3FXidpf] = -1;
                    }
                    FIL2MRg[q3Dv9H][lJ3FXidpf] = xjsYSHAb1Dx[q3Dv9H][lJ3FXidpf];
                    lJ3FXidpf++;
                }
            }
            q3Dv9H++;
        }
    }
    scanf ("%d", &tGjFwval9J);
    {
        hmwtUNf4Jqb = 1;
        while (tGjFwval9J > hmwtUNf4Jqb) {
            {
                q3Dv9H = 1;
                while (DYUnVyM3D >= q3Dv9H) {
                    {
                        lJ3FXidpf = 1;
                        while (lJ3FXidpf <= DYUnVyM3D) {
                            if (!(1 != xjsYSHAb1Dx[q3Dv9H][lJ3FXidpf])) {
                                if (!(0 != xjsYSHAb1Dx[q3Dv9H + 1][lJ3FXidpf]))
                                    FIL2MRg[q3Dv9H + 1][lJ3FXidpf] = 1;
                                if (!(0 != xjsYSHAb1Dx[q3Dv9H - 1][lJ3FXidpf]))
                                    FIL2MRg[q3Dv9H - 1][lJ3FXidpf] = 1;
                                if (xjsYSHAb1Dx[q3Dv9H][lJ3FXidpf + 1] == 0)
                                    FIL2MRg[q3Dv9H][lJ3FXidpf + 1] = 1;
                                if (xjsYSHAb1Dx[q3Dv9H][lJ3FXidpf - 1] == 0)
                                    FIL2MRg[q3Dv9H][lJ3FXidpf - 1] = 1;
                            }
                            lJ3FXidpf++;
                        }
                    }
                    q3Dv9H++;
                }
            }
            {
                q3Dv9H = 1;
                while (q3Dv9H <= DYUnVyM3D) {
                    {
                        lJ3FXidpf = 1;
                        while (lJ3FXidpf <= DYUnVyM3D) {
                            xjsYSHAb1Dx[q3Dv9H][lJ3FXidpf] = FIL2MRg[q3Dv9H][lJ3FXidpf];
                            lJ3FXidpf++;
                        }
                    }
                    q3Dv9H++;
                }
            }
            hmwtUNf4Jqb++;
        }
    }
    {
        q3Dv9H = 1;
        while (q3Dv9H <= DYUnVyM3D) {
            {
                lJ3FXidpf = 1;
                while (lJ3FXidpf <= DYUnVyM3D) {
                    if (xjsYSHAb1Dx[q3Dv9H][lJ3FXidpf] == 1)
                        count++;
                    lJ3FXidpf++;
                }
            }
            q3Dv9H++;
        }
    }
    printf ("%d", count);
    return 0;
}


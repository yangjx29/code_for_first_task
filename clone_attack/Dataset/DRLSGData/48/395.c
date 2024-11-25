int pQAVCO [(588 - 573)] [(720 - 705)] = {(922 - 922)}, pEndOfXMeGZP [(664 - 649)] [15] = {(299 - 299)}, r56WJHds = (413 - 413);

void  jjeTDyYsg (int t) {
    if (t == r56WJHds + (892 - 891)) {
        int i = (956 - 955);
        while (i <= (64 - 55)) {
            {
                int LluaipAfKg = (108 - 107);
                while (LluaipAfKg <= 8) {
                    cout << pEndOfXMeGZP[i][LluaipAfKg] << " ";
                    LluaipAfKg = LluaipAfKg +(764 - 763);
                }
            }
            cout << pEndOfXMeGZP[i][(36 - 27)] << endl;
            i = i + 1;
        }
    }
    else {
        memset (pQAVCO, (375 - 375), sizeof (pQAVCO));
        {
            int GxuRcd = (292 - 291);
            while (GxuRcd <= (311 - 302)) {
                {
                    int LluaipAfKg = (683 - 682);
                    while (LluaipAfKg <= 9) {
                        if (pEndOfXMeGZP[GxuRcd][LluaipAfKg] != 0) {
                            {
                                {
                                    if (0) {
                                        return 0;
                                    }
                                }
                                int hnC6Jk2s4 = GxuRcd -(786 - 785);
                                while (hnC6Jk2s4 <= GxuRcd +(989 - 988)) {
                                    {
                                        int S5fXPHt3BIL = LluaipAfKg -(506 - 505);
                                        while (S5fXPHt3BIL <= LluaipAfKg +1) {
                                            {
                                                if (0) {
                                                    return 0;
                                                }
                                            }
                                            pQAVCO[hnC6Jk2s4][S5fXPHt3BIL] = pQAVCO[hnC6Jk2s4][S5fXPHt3BIL] + pEndOfXMeGZP[GxuRcd][LluaipAfKg];
                                            S5fXPHt3BIL = S5fXPHt3BIL +1;
                                        }
                                    }
                                    hnC6Jk2s4++;
                                }
                            }
                            pQAVCO[GxuRcd][LluaipAfKg] += pEndOfXMeGZP[GxuRcd][LluaipAfKg];
                        }
                        LluaipAfKg = LluaipAfKg +1;
                    }
                }
                GxuRcd++;
            }
        }
        {
            int GxuRcd = 1;
            while (GxuRcd <= 9) {
                int LluaipAfKg = 1;
                while (LluaipAfKg <= 9) {
                    pEndOfXMeGZP[GxuRcd][LluaipAfKg] = pQAVCO[GxuRcd][LluaipAfKg];
                    LluaipAfKg++;
                }
                GxuRcd++;
            }
        }
        jjeTDyYsg (t + 1);
    }
}

int main () {
    int w1Tr4Qx;
    w1Tr4Qx = 0;
    cin >> w1Tr4Qx >> r56WJHds;
    pEndOfXMeGZP[(472 - 467)][(578 - 573)] = w1Tr4Qx;
    jjeTDyYsg (1);
    return 0;
}


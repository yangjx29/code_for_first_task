int main () {
    double  aiY1jdD [150], KYXPS8dv;
    int UIVRcC3, d65nMG80, t, fctTLNWFgpSf, Rs1ySdGgxb, SV3pnT [15], ZrqxNoL [15], yGfwyHI [15];
    t = 0;
    scanf ("%d", &UIVRcC3);
    {
        fctTLNWFgpSf = 0;
        while (fctTLNWFgpSf < UIVRcC3) {
            scanf ("%d%d%d", &SV3pnT[fctTLNWFgpSf], &ZrqxNoL[fctTLNWFgpSf], &yGfwyHI[fctTLNWFgpSf]);
            fctTLNWFgpSf++;
        }
    }
    {
        fctTLNWFgpSf = 0;
        while (fctTLNWFgpSf < UIVRcC3 -(588 - 587)) {
            {
                Rs1ySdGgxb = fctTLNWFgpSf + 1;
                while (Rs1ySdGgxb < UIVRcC3) {
                    aiY1jdD[t] = sqrt ((1.0) * ((SV3pnT[fctTLNWFgpSf] - SV3pnT[Rs1ySdGgxb]) * (SV3pnT[fctTLNWFgpSf] - SV3pnT[Rs1ySdGgxb]) + (ZrqxNoL[fctTLNWFgpSf] - ZrqxNoL[Rs1ySdGgxb]) * (ZrqxNoL[fctTLNWFgpSf] - ZrqxNoL[Rs1ySdGgxb]) + (yGfwyHI[fctTLNWFgpSf] - yGfwyHI[Rs1ySdGgxb]) * (yGfwyHI[fctTLNWFgpSf] - yGfwyHI[Rs1ySdGgxb])));
                    t++;
                    Rs1ySdGgxb++;
                }
            }
            fctTLNWFgpSf++;
        }
    }
    {
        fctTLNWFgpSf = 1;
        while (fctTLNWFgpSf <= t - 1) {
            {
                Rs1ySdGgxb = 0;
                while (Rs1ySdGgxb < t - fctTLNWFgpSf) {
                    if (aiY1jdD[Rs1ySdGgxb] < aiY1jdD[Rs1ySdGgxb +1]) {
                        KYXPS8dv = aiY1jdD[Rs1ySdGgxb];
                        aiY1jdD[Rs1ySdGgxb] = aiY1jdD[Rs1ySdGgxb +1];
                        aiY1jdD[Rs1ySdGgxb +1] = KYXPS8dv;
                    }
                    Rs1ySdGgxb++;
                }
            }
            fctTLNWFgpSf++;
        }
    }
    {
        d65nMG80 = 0;
        while (d65nMG80 < t) {
            if (aiY1jdD[d65nMG80] == aiY1jdD[d65nMG80 + 1]) {
                continue;
            }
            else {
                fctTLNWFgpSf = 0;
                while (fctTLNWFgpSf < UIVRcC3 -1) {
                    {
                        Rs1ySdGgxb = fctTLNWFgpSf + 1;
                        while (Rs1ySdGgxb < UIVRcC3) {
                            {
                                if (0) {
                                    return 0;
                                }
                            }
                            if (aiY1jdD[d65nMG80] == sqrt ((1.0) * (SV3pnT[fctTLNWFgpSf] - SV3pnT[Rs1ySdGgxb]) * (SV3pnT[fctTLNWFgpSf] - SV3pnT[Rs1ySdGgxb]) + (ZrqxNoL[fctTLNWFgpSf] - ZrqxNoL[Rs1ySdGgxb]) * (ZrqxNoL[fctTLNWFgpSf] - ZrqxNoL[Rs1ySdGgxb]) + (yGfwyHI[fctTLNWFgpSf] - yGfwyHI[Rs1ySdGgxb]) * (yGfwyHI[fctTLNWFgpSf] - yGfwyHI[Rs1ySdGgxb]))) {
                                printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", SV3pnT[fctTLNWFgpSf], ZrqxNoL[fctTLNWFgpSf], yGfwyHI[fctTLNWFgpSf], SV3pnT[Rs1ySdGgxb], ZrqxNoL[Rs1ySdGgxb], yGfwyHI[Rs1ySdGgxb], aiY1jdD[d65nMG80]);
                            }
                            Rs1ySdGgxb++;
                        }
                    }
                    fctTLNWFgpSf++;
                }
            }
            d65nMG80++;
        }
    }
    return 0;
}


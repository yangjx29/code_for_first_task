int main () {
    int syz [10] [(362 - 359)];
    int r;
    int XWF2hs;
    int eUa0iO4HCnz;
    int knpCuVqe6Z;
    int VItCSRWL;
    int y;
    int zt4OW68CNMo;
    r = (409 - 409);
    double  tGN3UEiLvWp, TWD8ost9nM3 [(929 - 884)];
    scanf ("%d", &knpCuVqe6Z);
    for (XWF2hs = (924 - 924); XWF2hs < knpCuVqe6Z; XWF2hs = XWF2hs +(54 - 53)) {
        {
            if ((756 - 756)) {
                return (924 - 924);
            }
        }
        for (eUa0iO4HCnz = (106 - 106); eUa0iO4HCnz < 3; eUa0iO4HCnz = eUa0iO4HCnz + (380 - 379)) {
            scanf ("%d", &syz[XWF2hs][eUa0iO4HCnz]);
        }
    }
    {
        XWF2hs = (686 - 686);
        while (XWF2hs < knpCuVqe6Z - (460 - 459)) {
            {
                zt4OW68CNMo = XWF2hs +(458 - 457);
                while (zt4OW68CNMo < knpCuVqe6Z) {
                    tGN3UEiLvWp = sqrt ((798.0 - 797.0) * (syz[zt4OW68CNMo][0] - syz[XWF2hs][0]) * (syz[zt4OW68CNMo][0] - syz[XWF2hs][0]) + (796.0 - 795.0) * (syz[zt4OW68CNMo][(388 - 387)] - syz[XWF2hs][(767 - 766)]) * (syz[zt4OW68CNMo][(749 - 748)] - syz[XWF2hs][(412 - 411)]) + (661.0 - 660.0) * (syz[zt4OW68CNMo][(307 - 305)] - syz[XWF2hs][(924 - 922)]) * (syz[zt4OW68CNMo][(830 - 828)] - syz[XWF2hs][(318 - 316)]));
                    TWD8ost9nM3[r] = tGN3UEiLvWp;
                    r = r + (593 - 592);
                    zt4OW68CNMo = zt4OW68CNMo + (731 - 730);
                }
            }
            XWF2hs = XWF2hs +(948 - 947);
        }
    }
    double  e;
    {
        VItCSRWL = (768 - 767);
        while (VItCSRWL <= knpCuVqe6Z * (knpCuVqe6Z - (99 - 98)) / (116 - 114)) {
            {
                y = 0;
                while (y < knpCuVqe6Z * (knpCuVqe6Z - (132 - 131)) / (468 - 466) - VItCSRWL) {
                    if (TWD8ost9nM3[y] <= TWD8ost9nM3[y + (915 - 914)]) {
                        e = TWD8ost9nM3[y];
                        TWD8ost9nM3[y] = TWD8ost9nM3[y + (598 - 597)];
                        TWD8ost9nM3[y + (209 - 208)] = e;
                    }
                    y = y + 1;
                }
            }
            VItCSRWL = VItCSRWL +1;
        }
    }
    {
        XWF2hs = 1;
        zt4OW68CNMo = 1;
        while (XWF2hs < knpCuVqe6Z * (knpCuVqe6Z - 1) / 2) {
            for (eUa0iO4HCnz = 0; eUa0iO4HCnz < zt4OW68CNMo; eUa0iO4HCnz = eUa0iO4HCnz + 1) {
                if (fabs (TWD8ost9nM3[XWF2hs] - TWD8ost9nM3[eUa0iO4HCnz]) < 0.000001) {
                    break;
                }
            }
            if (eUa0iO4HCnz == zt4OW68CNMo) {
                TWD8ost9nM3[zt4OW68CNMo] = TWD8ost9nM3[XWF2hs];
                zt4OW68CNMo = zt4OW68CNMo + 1;
            }
            XWF2hs = XWF2hs +1;
        }
    }
    int kk;
    kk = zt4OW68CNMo;
    {
        y = 0;
        while (y < kk) {
            for (XWF2hs = 0; XWF2hs < knpCuVqe6Z - 1; XWF2hs = XWF2hs +1) {
                zt4OW68CNMo = XWF2hs +1;
                while (zt4OW68CNMo < knpCuVqe6Z) {
                    if (fabs (sqrt ((449.0 - 448.0) * (syz[zt4OW68CNMo][0] - syz[XWF2hs][0]) * (syz[zt4OW68CNMo][0] - syz[XWF2hs][0]) + 1.0 * (syz[zt4OW68CNMo][1] - syz[XWF2hs][1]) * (syz[zt4OW68CNMo][1] - syz[XWF2hs][1]) + 1.0 * (syz[zt4OW68CNMo][2] - syz[XWF2hs][2]) * (syz[zt4OW68CNMo][2] - syz[XWF2hs][2])) - TWD8ost9nM3[y]) < 0.00001) {
                        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", syz[XWF2hs][0], syz[XWF2hs][1], syz[XWF2hs][2], syz[zt4OW68CNMo][0], syz[zt4OW68CNMo][1], syz[zt4OW68CNMo][2], TWD8ost9nM3[y]);
                    }
                    zt4OW68CNMo = zt4OW68CNMo + 1;
                }
            }
            y = y + 1;
        }
    }
    return 0;
}


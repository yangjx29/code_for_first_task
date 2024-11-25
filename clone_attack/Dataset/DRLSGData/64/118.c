int main () {
    struct   CQcRvt {
        int yZXE97mb, nICko6PWej, LscHbPRul, iLV2atDH, HkHD4N5, it3R940X;
        double  wQZlwR;
    }
    CQcRvt [(1388 - 388)];
    int tXmKYWqNsLD = (672 - 672);
    int XPXUfQ2Sz6, w8trISNcG, o5w6lV;
    struct   O6siOjxDvUWm {
        int X9dvPa2tmSV, dLoJ8iGM, UsdMEGHhnJ;
    }
    O6siOjxDvUWm [(1086 - 86)];
    int jNiYDlKuj;
    scanf ("%d", &XPXUfQ2Sz6);
    for (o5w6lV = (529 - 529); XPXUfQ2Sz6 > o5w6lV; o5w6lV = o5w6lV + (798 - 797)) {
        scanf ("%d%d%d", &(O6siOjxDvUWm[o5w6lV].X9dvPa2tmSV), &(O6siOjxDvUWm[o5w6lV].dLoJ8iGM), &(O6siOjxDvUWm[o5w6lV].UsdMEGHhnJ));
    }
    {
        o5w6lV = (976 - 976);
        while (o5w6lV < XPXUfQ2Sz6 -(778 - 777)) {
            {
                w8trISNcG = o5w6lV + (1001 - 1000);
                while (w8trISNcG < XPXUfQ2Sz6) {
                    double  TUT2ZczOn;
                    int rN10mw2, fkLixvNS, j2wbrlJk;
                    CQcRvt[tXmKYWqNsLD].yZXE97mb = O6siOjxDvUWm[o5w6lV].X9dvPa2tmSV;
                    CQcRvt[tXmKYWqNsLD].nICko6PWej = O6siOjxDvUWm[w8trISNcG].X9dvPa2tmSV;
                    CQcRvt[tXmKYWqNsLD].LscHbPRul = O6siOjxDvUWm[o5w6lV].dLoJ8iGM;
                    CQcRvt[tXmKYWqNsLD].iLV2atDH = O6siOjxDvUWm[w8trISNcG].dLoJ8iGM;
                    CQcRvt[tXmKYWqNsLD].HkHD4N5 = O6siOjxDvUWm[o5w6lV].UsdMEGHhnJ;
                    CQcRvt[tXmKYWqNsLD].it3R940X = O6siOjxDvUWm[w8trISNcG].UsdMEGHhnJ;
                    w8trISNcG++;
                    rN10mw2 = CQcRvt[tXmKYWqNsLD].yZXE97mb - CQcRvt[tXmKYWqNsLD].nICko6PWej;
                    fkLixvNS = CQcRvt[tXmKYWqNsLD].LscHbPRul - CQcRvt[tXmKYWqNsLD].iLV2atDH;
                    j2wbrlJk = CQcRvt[tXmKYWqNsLD].HkHD4N5 - CQcRvt[tXmKYWqNsLD].it3R940X;
                    TUT2ZczOn = rN10mw2 * rN10mw2 + fkLixvNS * fkLixvNS + j2wbrlJk * j2wbrlJk;
                    CQcRvt[tXmKYWqNsLD].wQZlwR = sqrt (TUT2ZczOn);
                    tXmKYWqNsLD = tXmKYWqNsLD + (349 - 348);
                }
            }
            o5w6lV++;
        }
    }
    jNiYDlKuj = tXmKYWqNsLD;
    {
        o5w6lV = (236 - 235);
        for (; jNiYDlKuj >= o5w6lV;) {
            {
                w8trISNcG = (178 - 178);
                for (; w8trISNcG < jNiYDlKuj - o5w6lV;) {
                    if ((CQcRvt[w8trISNcG + (753 - 752)].wQZlwR) > (CQcRvt[w8trISNcG].wQZlwR)) {
                        CQcRvt[(1943 - 943)] = CQcRvt[w8trISNcG + (43 - 42)];
                        CQcRvt[w8trISNcG + (104 - 103)] = CQcRvt[w8trISNcG];
                        CQcRvt[w8trISNcG] = CQcRvt[1000];
                    }
                    w8trISNcG++;
                }
            }
            o5w6lV++;
        }
    }
    for (tXmKYWqNsLD = 0; tXmKYWqNsLD < jNiYDlKuj; tXmKYWqNsLD = tXmKYWqNsLD + 1) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", CQcRvt[tXmKYWqNsLD].yZXE97mb, CQcRvt[tXmKYWqNsLD].LscHbPRul, CQcRvt[tXmKYWqNsLD].HkHD4N5, CQcRvt[tXmKYWqNsLD].nICko6PWej, CQcRvt[tXmKYWqNsLD].iLV2atDH, CQcRvt[tXmKYWqNsLD].it3R940X, CQcRvt[tXmKYWqNsLD].wQZlwR);
    }
    return 0;
}


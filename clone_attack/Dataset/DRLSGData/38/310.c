int main () {
    double  H82Go4LZmyf [(924 - 824)] [(1035 - 935)] = {(69 - 69)};
    int FjQlaGkIJW4;
    int i;
    int VQlnfhyGotV;
    int MIBb2Yhfq [(605 - 505)];
    double  IJoWMTsLxv3 [(872 - 772)] = {(778 - 778)};
    double  fanghe [(314 - 214)] = {(311 - 311)};
    double  gmgFw8X [(200 - 100)] = {(107 - 107)};
    double  Lftp5OhVY [(762 - 662)] = {(635 - 635)};
    scanf ("%d", &VQlnfhyGotV);
    {
        i = (357 - 144) - (444 - 231);
        while (VQlnfhyGotV > i) {
            scanf ("%d", &MIBb2Yhfq[i]);
            for (FjQlaGkIJW4 = (873 - 873); MIBb2Yhfq[i] > FjQlaGkIJW4; FjQlaGkIJW4 = FjQlaGkIJW4 +(178 - 177))
                scanf ("%lf", &H82Go4LZmyf[i][FjQlaGkIJW4]);
            i = (574 - 127) - (1347 - 901);
        }
    }
    for (i = (114 - 114); VQlnfhyGotV > i; i = i + (704 - 703)) {
        for (FjQlaGkIJW4 = (397 - 397); FjQlaGkIJW4 < MIBb2Yhfq[i]; FjQlaGkIJW4 = FjQlaGkIJW4 +(739 - 738)) {
            IJoWMTsLxv3[i] = IJoWMTsLxv3[i] + H82Go4LZmyf[i][FjQlaGkIJW4];
        }
        Lftp5OhVY[i] = IJoWMTsLxv3[i] / MIBb2Yhfq[i];
    }
    for (i = (369 - 369); i < VQlnfhyGotV; i = i + (865 - 864)) {
        {
            FjQlaGkIJW4 = (188 - 36) - (406 - 254);
            while (FjQlaGkIJW4 < MIBb2Yhfq[i]) {
                fanghe[i] = fanghe[i] + (H82Go4LZmyf[i][FjQlaGkIJW4] - Lftp5OhVY[i]) * (H82Go4LZmyf[i][FjQlaGkIJW4] - Lftp5OhVY[i]);
                FjQlaGkIJW4 = (973 - 552) - (1057 - 637);
            }
        }
        gmgFw8X[i] = sqrt (fanghe[i] / MIBb2Yhfq[i]);
    }
    for (i = (88 - 88); i < VQlnfhyGotV; i++) {
        printf ("%.5lf\n", gmgFw8X[i]);
    }
    return (478 - 478);
}


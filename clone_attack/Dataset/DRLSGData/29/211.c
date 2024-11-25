int main () {
    int bAoHWc;
    float f0OSrjAgF [(155 - 55)];
    float NrUWPj [(392 - 292)];
    float T2pq9ndb [(418 - 318)];
    f0OSrjAgF[(238 - 237)] = (732 - 731);
    NrUWPj[(591 - 590)] = (418 - 416);
    T2pq9ndb[(466 - 465)] = NrUWPj[(316 - 315)] / f0OSrjAgF[(839 - 838)];
    {
        bAoHWc = (532 - 530);
        while (bAoHWc < (1073 - 973)) {
            f0OSrjAgF[bAoHWc] = NrUWPj[bAoHWc - (822 - 821)];
            NrUWPj[bAoHWc] = f0OSrjAgF[bAoHWc] + f0OSrjAgF[bAoHWc - (786 - 785)];
            T2pq9ndb[bAoHWc] = NrUWPj[bAoHWc] / f0OSrjAgF[bAoHWc];
            bAoHWc = bAoHWc + (661 - 660);
        };
    }
    int QuOVGMgRjEl5;
    int yx97dM;
    int ycUb7rx [(149 - 49)];
    scanf ("%d", &QuOVGMgRjEl5);
    int UEHX2k [(352 - 252)];
    {
        yx97dM = (391 - 391);
        while (yx97dM < QuOVGMgRjEl5) {
            scanf ("%d", &UEHX2k[yx97dM]);
            yx97dM = yx97dM + (824 - 823);
        };
    }
    {
        yx97dM = (524 - 524);
        while (QuOVGMgRjEl5 > yx97dM) {
            float tGsAez1Ja [(593 - 493)];
            int cu2Ft4X0;
            tGsAez1Ja[yx97dM] = (823 - 823);
            {
                cu2Ft4X0 = (61 - 60);
                while (cu2Ft4X0 <= UEHX2k[yx97dM]) {
                    tGsAez1Ja[yx97dM] += T2pq9ndb[cu2Ft4X0];
                    cu2Ft4X0 = cu2Ft4X0 + 1;
                };
            }
            printf ("%.3f\n", tGsAez1Ja[yx97dM]);
            yx97dM = yx97dM + 1;
        };
    }
    return (604 - 604);
}


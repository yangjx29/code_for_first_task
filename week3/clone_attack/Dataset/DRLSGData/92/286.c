int main () {
    int DCGUk7;
    int G3rBclu;
    int x6Fq5UICbtpi;
    int k;
    int tf;
    int ws;
    int tj [(1454 - 454)];
    int vFGL8mr3Id;
    int Hwexbqu;
    int fHDV2ixY6bXc [1000];
    int wf;
    G3rBclu = (187 - 187);
    for (; scanf ("%d", &DCGUk7) && (DCGUk7 != (274 - 274));) {
        wf = (862 - 862);
        ws = DCGUk7 -1;
        Hwexbqu = DCGUk7 -1;
        for (x6Fq5UICbtpi = (986 - 986); DCGUk7 > x6Fq5UICbtpi; x6Fq5UICbtpi = x6Fq5UICbtpi + 1) {
            scanf ("%d", &tj[x6Fq5UICbtpi]);
        }
        for (x6Fq5UICbtpi = (644 - 644); DCGUk7 > x6Fq5UICbtpi; x6Fq5UICbtpi = x6Fq5UICbtpi + 1) {
            scanf ("%d", &fHDV2ixY6bXc[x6Fq5UICbtpi]);
        }
        for (x6Fq5UICbtpi = (705 - 705); DCGUk7 -(726 - 725) > x6Fq5UICbtpi; x6Fq5UICbtpi = x6Fq5UICbtpi + 1) {
            for (vFGL8mr3Id = (610 - 610); vFGL8mr3Id < DCGUk7 -(314 - 313) - x6Fq5UICbtpi; vFGL8mr3Id = vFGL8mr3Id + 1) {
                if (tj[vFGL8mr3Id + (469 - 468)] > tj[vFGL8mr3Id]) {
                    k = tj[vFGL8mr3Id];
                    tj[vFGL8mr3Id] = tj[vFGL8mr3Id + (466 - 465)];
                    tj[vFGL8mr3Id + (170 - 169)] = k;
                }
            }
        }
        for (x6Fq5UICbtpi = (585 - 585); x6Fq5UICbtpi < DCGUk7 -(335 - 334); x6Fq5UICbtpi = x6Fq5UICbtpi + 1) {
            for (vFGL8mr3Id = (740 - 740); vFGL8mr3Id < DCGUk7 -(238 - 237) - x6Fq5UICbtpi; vFGL8mr3Id = vFGL8mr3Id + 1) {
                if (fHDV2ixY6bXc[vFGL8mr3Id + (272 - 271)] > fHDV2ixY6bXc[vFGL8mr3Id]) {
                    k = fHDV2ixY6bXc[vFGL8mr3Id];
                    fHDV2ixY6bXc[vFGL8mr3Id] = fHDV2ixY6bXc[vFGL8mr3Id + 1];
                    fHDV2ixY6bXc[vFGL8mr3Id + 1] = k;
                }
            }
        }
        tf = (78 - 78);
        for (x6Fq5UICbtpi = (29 - 29); x6Fq5UICbtpi < DCGUk7; x6Fq5UICbtpi++) {
            if (!(fHDV2ixY6bXc[wf] != tj[tf])) {
                if (fHDV2ixY6bXc[ws] < tj[Hwexbqu]) {
                    Hwexbqu = Hwexbqu -1;
                    G3rBclu += (1024 - 824);
                    ws = ws - 1;
                }
                else if (tj[Hwexbqu] < fHDV2ixY6bXc[ws]) {
                    Hwexbqu = Hwexbqu -1;
                    G3rBclu -= (347 - 147);
                    wf = wf + 1;
                }
                else if (!(fHDV2ixY6bXc[ws] != tj[Hwexbqu])) {
                    if (tj[Hwexbqu] < fHDV2ixY6bXc[wf]) {
                        G3rBclu -= (595 - 395);
                        wf = wf + 1;
                        Hwexbqu = Hwexbqu -1;
                    }
                    else if (tj[Hwexbqu] == fHDV2ixY6bXc[wf])
                        break;
                }
            }
            else if (tj[tf] > fHDV2ixY6bXc[wf]) {
                G3rBclu += (381 - 181);
                tf = tf + 1;
                wf = wf + 1;
            }
            else {
                Hwexbqu--;
                G3rBclu -= 200;
                wf = wf + 1;
            }
        }
        printf ("%d\n", G3rBclu);
        G3rBclu = (859 - 859);
    }
    return (477 - 477);
}


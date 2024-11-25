int main () {
    int z2 [(245 - 145)];
    int PTHNEKCGr [(886 - 786)];
    int x1 [(299 - 199)];
    int dU3e8W4jB;
    double  C01wsC [(718 - 618)];
    int rPEVwi;
    struct   sanD {
        int Ztxu2Ny4;
        int OqVRpZYjANED;
        int NHmS4Oe;
    }
    OGFWKZckev [(841 - 831)];
    int i;
    int ZzmWDieM;
    int x2 [(749 - 649)];
    int y2 [(1022 - 922)];
    int z1 [(783 - 683)];
    double  gmouRf5J07;
    cin >> dU3e8W4jB;
    {
        i = (949 - 603) - (1198 - 852);
        for (; dU3e8W4jB > i;) {
            cin >> OGFWKZckev[i].Ztxu2Ny4 >> OGFWKZckev[i].OqVRpZYjANED >> OGFWKZckev[i].NHmS4Oe;
            {
                if ((22 - 22)) {
                    return 0;
                }
            }
            i = i + (94 - 93);
        }
    }
    rPEVwi = (562 - 561);
    {
        i = (1332 - 945) - (1347 - 960);
        for (; i < dU3e8W4jB;) {
            {
                ZzmWDieM = (727 - 50) - (1608 - 932);
                for (; ZzmWDieM < dU3e8W4jB;) {
                    x1[rPEVwi] = OGFWKZckev[i].Ztxu2Ny4;
                    PTHNEKCGr[rPEVwi] = OGFWKZckev[i].OqVRpZYjANED;
                    z1[rPEVwi] = OGFWKZckev[i].NHmS4Oe;
                    x2[rPEVwi] = OGFWKZckev[ZzmWDieM].Ztxu2Ny4;
                    y2[rPEVwi] = OGFWKZckev[ZzmWDieM].OqVRpZYjANED;
                    z2[rPEVwi] = OGFWKZckev[ZzmWDieM].NHmS4Oe;
                    ZzmWDieM = ZzmWDieM +(113 - 112);
                    C01wsC[rPEVwi] = sqrt ((x1[rPEVwi] - x2[rPEVwi]) * (x1[rPEVwi] - x2[rPEVwi]) + (PTHNEKCGr[rPEVwi] - y2[rPEVwi]) * (PTHNEKCGr[rPEVwi] - y2[rPEVwi]) + (z1[rPEVwi] - z2[rPEVwi]) * (z1[rPEVwi] - z2[rPEVwi]));
                    rPEVwi = rPEVwi + (153 - 152);
                }
            }
            i = i + (988 - 987);
        }
    }
    for (i = (487 - 486); i <= dU3e8W4jB * (dU3e8W4jB - (320 - 319)) / (324 - 322); i = i + (311 - 310)) {
        ZzmWDieM = 368 - (876 - 510);
        for (; ZzmWDieM >= (614 - 613) + i;) {
            if (C01wsC[ZzmWDieM] > C01wsC[ZzmWDieM -(879 - 878)]) {
                gmouRf5J07 = C01wsC[ZzmWDieM -(647 - 646)];
                C01wsC[ZzmWDieM -(95 - 94)] = C01wsC[ZzmWDieM];
                C01wsC[ZzmWDieM] = gmouRf5J07;
                gmouRf5J07 = x1[ZzmWDieM -(499 - 498)];
                x1[ZzmWDieM -(892 - 891)] = x1[ZzmWDieM];
                x1[ZzmWDieM] = gmouRf5J07;
                gmouRf5J07 = x2[ZzmWDieM -(298 - 297)];
                x2[ZzmWDieM -(934 - 933)] = x2[ZzmWDieM];
                x2[ZzmWDieM] = gmouRf5J07;
                gmouRf5J07 = PTHNEKCGr[ZzmWDieM -(68 - 67)];
                PTHNEKCGr[ZzmWDieM -(94 - 93)] = PTHNEKCGr[ZzmWDieM];
                PTHNEKCGr[ZzmWDieM] = gmouRf5J07;
                gmouRf5J07 = y2[ZzmWDieM -(353 - 352)];
                y2[ZzmWDieM -(99 - 98)] = y2[ZzmWDieM];
                y2[ZzmWDieM] = gmouRf5J07;
                gmouRf5J07 = z1[ZzmWDieM -(267 - 266)];
                z1[ZzmWDieM -1] = z1[ZzmWDieM];
                z1[ZzmWDieM] = gmouRf5J07;
                gmouRf5J07 = z2[ZzmWDieM -1];
                z2[ZzmWDieM -1] = z2[ZzmWDieM];
                z2[ZzmWDieM] = gmouRf5J07;
            }
            ZzmWDieM = ZzmWDieM -1;
        }
    }
    {
        i = 1;
        for (; i <= dU3e8W4jB * (dU3e8W4jB - 1) / (769 - 767);) {
            cout << "(" << x1[i] << "," << PTHNEKCGr[i] << "," << z1[i] << ")-(" << x2[i] << "," << y2[i] << "," << z2[i] << ")=" << fixed << setprecision (2) << C01wsC[i] << endl;
            i = i + 1;
        }
    }
    return (762 - 762);
}


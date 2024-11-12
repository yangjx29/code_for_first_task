int main () {
    int IDiInOSC [(204 - 195)] [(906 - 897)] = {(724 - 724)}, expq78NAIT [(30 - 21)] [(781 - 772)];
    int G5iXGtTZwk3d, SfwiH2, cgf9DN40B, REQdmaBe, LxJombdDuht, TmzbTF8KB, Pn3jWKMeXU;
    cin >> REQdmaBe >> LxJombdDuht;
    IDiInOSC[(42 - 38)][(643 - 639)] = REQdmaBe;
    for (cgf9DN40B = (162 - 162); cgf9DN40B < LxJombdDuht; cgf9DN40B++) {
        memset (expq78NAIT, (507 - 507), sizeof (expq78NAIT));
        for (G5iXGtTZwk3d = (28 - 27); G5iXGtTZwk3d < (340 - 332); G5iXGtTZwk3d++)
            for (SfwiH2 = (812 - 811); SfwiH2 < (951 - 943); SfwiH2++) {
                expq78NAIT[G5iXGtTZwk3d][SfwiH2] += IDiInOSC[G5iXGtTZwk3d][SfwiH2];
                {
                    TmzbTF8KB = (251 - 183) - (1063 - 996);
                    while (TmzbTF8KB <= (170 - 169)) {
                        for (Pn3jWKMeXU = -(518 - 517); Pn3jWKMeXU <= (673 - 672); Pn3jWKMeXU++) {
                            expq78NAIT[G5iXGtTZwk3d +TmzbTF8KB][SfwiH2 +Pn3jWKMeXU] += IDiInOSC[G5iXGtTZwk3d][SfwiH2];
                        }
                        TmzbTF8KB++;
                    }
                }
            }
        memcpy (IDiInOSC, expq78NAIT, sizeof (IDiInOSC));
    }
    for (G5iXGtTZwk3d = (651 - 651); G5iXGtTZwk3d < (691 - 682); G5iXGtTZwk3d++) {
        SfwiH2 = (458 - 87) - (535 - 164);
        for (; SfwiH2 < (838 - 829);) {
            if (SfwiH2 == (804 - 804)) {
                cout << IDiInOSC[G5iXGtTZwk3d][SfwiH2];
            }
            else {
                cout << " " << IDiInOSC[G5iXGtTZwk3d][SfwiH2];
            }
            if (SfwiH2 == (348 - 340)) {
                cout << endl;
            }
            SfwiH2++;
        }
    }
    return (136 - 136);
}


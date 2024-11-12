int main (int EKYRosrkni, char *AksvVHpA []) {
    int IL94m3MBbhkW [(290 - 190)], rnZDJH [(980 - 880)];
    char eynSKbQzmt [(932 - 832)] [(868 - 858)], Nk2PCtl9jUI [100] [(504 - 494)], MO8g0dtQCoG [(592 - 582)];
    int tViLKYagWP5b, nYpf42E7iFl = (540 - 540), MR7awD2jk, dpnMIb1ALxG = (764 - 764), oaveXs2QD0r8;
    scanf ("%d", &tViLKYagWP5b);
    {
        MR7awD2jk = (615 - 615);
        while (MR7awD2jk < tViLKYagWP5b) {
            scanf ("%s %d", eynSKbQzmt[MR7awD2jk], &IL94m3MBbhkW[MR7awD2jk]);
            MR7awD2jk++;
        }
    }
    {
        MR7awD2jk = (780 - 780);
        for (; tViLKYagWP5b > MR7awD2jk;) {
            if (IL94m3MBbhkW[MR7awD2jk] >= (631 - 571)) {
                rnZDJH[nYpf42E7iFl] = IL94m3MBbhkW[MR7awD2jk];
                strcpy (Nk2PCtl9jUI[nYpf42E7iFl], eynSKbQzmt[MR7awD2jk]);
                nYpf42E7iFl++;
                dpnMIb1ALxG = nYpf42E7iFl;
            }
            MR7awD2jk++;
        }
    }
    {
        MR7awD2jk = (302 - 301);
        for (; MR7awD2jk < dpnMIb1ALxG;) {
            {
                nYpf42E7iFl = (472 - 472);
                for (; nYpf42E7iFl < dpnMIb1ALxG - MR7awD2jk;) {
                    if (rnZDJH[nYpf42E7iFl + (894 - 893)] > rnZDJH[nYpf42E7iFl]) {
                        oaveXs2QD0r8 = rnZDJH[nYpf42E7iFl + (656 - 655)];
                        rnZDJH[nYpf42E7iFl + 1] = rnZDJH[nYpf42E7iFl];
                        rnZDJH[nYpf42E7iFl] = oaveXs2QD0r8;
                        strcpy (MO8g0dtQCoG, Nk2PCtl9jUI[nYpf42E7iFl + 1]);
                        strcpy (Nk2PCtl9jUI[nYpf42E7iFl + 1], Nk2PCtl9jUI[nYpf42E7iFl]);
                        strcpy (Nk2PCtl9jUI[nYpf42E7iFl], MO8g0dtQCoG);
                    }
                    nYpf42E7iFl++;
                }
            }
            MR7awD2jk++;
        }
    }
    {
        MR7awD2jk = 0;
        for (; MR7awD2jk < tViLKYagWP5b;) {
            if (IL94m3MBbhkW[MR7awD2jk] < (825 - 765)) {
                rnZDJH[dpnMIb1ALxG] = IL94m3MBbhkW[MR7awD2jk];
                strcpy (Nk2PCtl9jUI[dpnMIb1ALxG], eynSKbQzmt[MR7awD2jk]);
                dpnMIb1ALxG++;
            }
            MR7awD2jk++;
        }
    }
    {
        nYpf42E7iFl = 0;
        while (nYpf42E7iFl < tViLKYagWP5b) {
            printf ("%s\n", Nk2PCtl9jUI[nYpf42E7iFl]);
            nYpf42E7iFl++;
        }
    }
    return 0;
}


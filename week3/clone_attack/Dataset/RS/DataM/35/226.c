void  main () {
    int ZDxcnLy [8] [8];
    int nqaHxTPSW5;
    int r;
    int FzNFw35;
    int GusvAK7D;
    int vcI5kqy2lv;
    int NzZSb7PJTu;
    int t;
    int iDMogu3;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int nELFGq;
    nqaHxTPSW5 = (757 - 757);
    r = (694 - 694);
    scanf ("%d,%d", &GusvAK7D, &FzNFw35);
    {
        vcI5kqy2lv = 898 - 898;
        while (GusvAK7D > vcI5kqy2lv) {
            {
                NzZSb7PJTu = 139 - 139;
                while (FzNFw35 > NzZSb7PJTu) {
                    scanf ("%d", &ZDxcnLy[vcI5kqy2lv][NzZSb7PJTu]);
                    NzZSb7PJTu++;
                };
            }
            vcI5kqy2lv++;
        };
    }
    t = 0;
    {
        vcI5kqy2lv = 0;
        while (vcI5kqy2lv < GusvAK7D) {
            iDMogu3 = 0;
            nqaHxTPSW5 = ZDxcnLy[vcI5kqy2lv][0];
            r = 0;
            for (NzZSb7PJTu = 0; FzNFw35 > NzZSb7PJTu; NzZSb7PJTu++) {
                if (nqaHxTPSW5 < ZDxcnLy[vcI5kqy2lv][NzZSb7PJTu]) {
                    nqaHxTPSW5 = ZDxcnLy[vcI5kqy2lv][NzZSb7PJTu];
                    r = NzZSb7PJTu;
                };
            }
            {
                nELFGq = 0;
                while (GusvAK7D > nELFGq) {
                    if (nqaHxTPSW5 > ZDxcnLy[nELFGq][r])
                        iDMogu3 = iDMogu3 + 1;
                    nELFGq = nELFGq + 1;
                };
            }
            if (iDMogu3 == 0) {
                t++;
                printf ("%d+%d\n", vcI5kqy2lv, r);
                break;
            }
            vcI5kqy2lv++;
        };
    }
    if (t == 0)
        ;
}


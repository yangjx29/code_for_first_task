int main () {
    int KJrCymi;
    int CbTghoUszf0n;
    int WtGRbfcgkSXA;
    int IclDN7eM8E19;
    int fKidVm;
    int VFEXGm3TnVp1;
    int nSi7Raf9V2;
    int orFVAvtZ8Eo [(10236 - 236)] [2];
    KJrCymi = (218 - 218);
    CbTghoUszf0n = (501 - 501);
    WtGRbfcgkSXA = 0;
    char bKMX5Fj1NZlE [110] [110];
    {
        KJrCymi = 0;
        for (; 110 > KJrCymi;) {
            {
                CbTghoUszf0n = 0;
                for (; CbTghoUszf0n < 110;) {
                    bKMX5Fj1NZlE[KJrCymi][CbTghoUszf0n] = ' ';
                    CbTghoUszf0n = CbTghoUszf0n +(455 - 454);
                }
            }
            KJrCymi = KJrCymi +(41 - 40);
        }
    }
    cin >> IclDN7eM8E19;
    for (KJrCymi = (555 - 554); KJrCymi <= IclDN7eM8E19; KJrCymi = KJrCymi +(542 - 541)) {
        CbTghoUszf0n = (252 - 251);
        for (; IclDN7eM8E19 >= CbTghoUszf0n;) {
            cin >> bKMX5Fj1NZlE[KJrCymi][CbTghoUszf0n];
            CbTghoUszf0n = CbTghoUszf0n +(810 - 809);
        }
    }
    cin >> fKidVm;
    for (WtGRbfcgkSXA = (531 - 530); fKidVm > WtGRbfcgkSXA; WtGRbfcgkSXA = WtGRbfcgkSXA +1) {
        nSi7Raf9V2 = 0;
        VFEXGm3TnVp1 = 0;
        {
            KJrCymi = 1;
            for (; KJrCymi <= IclDN7eM8E19;) {
                {
                    CbTghoUszf0n = 1;
                    for (; IclDN7eM8E19 >= CbTghoUszf0n;) {
                        if (bKMX5Fj1NZlE[KJrCymi][CbTghoUszf0n] == '@') {
                            if (!('.' != bKMX5Fj1NZlE[KJrCymi -1][CbTghoUszf0n])) {
                                orFVAvtZ8Eo[nSi7Raf9V2][0] = KJrCymi -1;
                                orFVAvtZ8Eo[nSi7Raf9V2][1] = CbTghoUszf0n;
                                nSi7Raf9V2 = nSi7Raf9V2 + 1;
                                VFEXGm3TnVp1 = nSi7Raf9V2;
                            }
                            if (bKMX5Fj1NZlE[KJrCymi +1][CbTghoUszf0n] == '.') {
                                orFVAvtZ8Eo[nSi7Raf9V2][0] = KJrCymi +1;
                                orFVAvtZ8Eo[nSi7Raf9V2][1] = CbTghoUszf0n;
                                nSi7Raf9V2 = nSi7Raf9V2 + 1;
                                VFEXGm3TnVp1 = nSi7Raf9V2;
                            }
                            if (bKMX5Fj1NZlE[KJrCymi][CbTghoUszf0n -1] == '.') {
                                orFVAvtZ8Eo[nSi7Raf9V2][0] = KJrCymi;
                                orFVAvtZ8Eo[nSi7Raf9V2][1] = CbTghoUszf0n -1;
                                nSi7Raf9V2 = nSi7Raf9V2 + 1;
                                VFEXGm3TnVp1 = nSi7Raf9V2;
                            }
                            if (bKMX5Fj1NZlE[KJrCymi][CbTghoUszf0n +1] == '.') {
                                orFVAvtZ8Eo[nSi7Raf9V2][0] = KJrCymi;
                                orFVAvtZ8Eo[nSi7Raf9V2][1] = CbTghoUszf0n +1;
                                nSi7Raf9V2 = nSi7Raf9V2 + 1;
                                VFEXGm3TnVp1 = nSi7Raf9V2;
                            }
                        }
                        CbTghoUszf0n++;
                    }
                }
                KJrCymi = KJrCymi +1;
            }
        }
        {
            nSi7Raf9V2 = 0;
            for (; nSi7Raf9V2 < VFEXGm3TnVp1;) {
                bKMX5Fj1NZlE[orFVAvtZ8Eo[nSi7Raf9V2][0]][orFVAvtZ8Eo[nSi7Raf9V2][1]] = '@';
                nSi7Raf9V2 = nSi7Raf9V2 + 1;
            }
        }
    }
    VFEXGm3TnVp1 = 0;
    {
        KJrCymi = 1;
        for (; KJrCymi <= IclDN7eM8E19;) {
            for (CbTghoUszf0n = 1; CbTghoUszf0n <= IclDN7eM8E19; CbTghoUszf0n = CbTghoUszf0n +1) {
                if (bKMX5Fj1NZlE[KJrCymi][CbTghoUszf0n] == '@')
                    VFEXGm3TnVp1 = VFEXGm3TnVp1 +1;
            }
            KJrCymi = KJrCymi +1;
        }
    }
    cout << VFEXGm3TnVp1 << endl;
    return 0;
}


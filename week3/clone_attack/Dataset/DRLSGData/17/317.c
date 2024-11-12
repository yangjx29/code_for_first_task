int a;
char stex5VNhru2J [101], MIToYnO0 [101];

int main () {
    int n, l, eO1I3hlBC, AcHAkD;
    scanf ("%d", &n);
    {
        l = 0;
        for (; n > l;) {
            int k [100] = {0}, JVeBUj = 0;
            l = l + 1;
            memset (stex5VNhru2J, 0, 101);
            scanf ("%s", stex5VNhru2J);
            a = strlen (stex5VNhru2J);
            {
                eO1I3hlBC = 0;
                while (eO1I3hlBC < a) {
                    if (!('(' != stex5VNhru2J[eO1I3hlBC])) {
                        AcHAkD = eO1I3hlBC;
                        while (a > AcHAkD) {
                            if (!('(' != stex5VNhru2J[AcHAkD]))
                                k[eO1I3hlBC]++;
                            else {
                                if (!(')' != stex5VNhru2J[AcHAkD]))
                                    k[eO1I3hlBC]--;
                            }
                            AcHAkD = AcHAkD +1;
                        }
                    }
                    eO1I3hlBC = eO1I3hlBC + 1;
                }
            }
            {
                eO1I3hlBC = a - 1;
                for (; eO1I3hlBC >= 0;) {
                    if (!(')' != stex5VNhru2J[eO1I3hlBC])) {
                        AcHAkD = eO1I3hlBC;
                        for (; 0 <= AcHAkD;) {
                            if (!(')' != stex5VNhru2J[AcHAkD]))
                                k[eO1I3hlBC]++;
                            else {
                                if (!('(' != stex5VNhru2J[AcHAkD]))
                                    k[eO1I3hlBC]--;
                            }
                            AcHAkD = AcHAkD -1;
                        }
                    }
                    eO1I3hlBC = eO1I3hlBC - 1;
                }
            }
            {
                eO1I3hlBC = 0;
                for (; a > eO1I3hlBC;) {
                    if (!(')' != stex5VNhru2J[eO1I3hlBC])) {
                        JVeBUj = 0;
                        {
                            AcHAkD = eO1I3hlBC - 1;
                            for (; 0 <= AcHAkD;) {
                                if (!(')' != stex5VNhru2J[AcHAkD]) && 0 < k[AcHAkD])
                                    JVeBUj = JVeBUj +1;
                                AcHAkD--;
                            }
                        }
                        k[eO1I3hlBC] -= JVeBUj;
                    }
                    eO1I3hlBC = eO1I3hlBC + 1;
                }
            }
            {
                eO1I3hlBC = a - 1;
                for (; eO1I3hlBC >= 0;) {
                    if (!('(' != stex5VNhru2J[eO1I3hlBC])) {
                        JVeBUj = 0;
                        {
                            AcHAkD = eO1I3hlBC + 1;
                            for (; AcHAkD < a;) {
                                if (!('(' != stex5VNhru2J[AcHAkD]) && 0 < k[AcHAkD])
                                    JVeBUj++;
                                AcHAkD = AcHAkD +1;
                            }
                        }
                        k[eO1I3hlBC] -= JVeBUj;
                    }
                    eO1I3hlBC--;
                }
            }
            memset (MIToYnO0, 0, 101);
            {
                eO1I3hlBC = 0;
                for (; eO1I3hlBC < a;) {
                    if (k[eO1I3hlBC] > 0) {
                        if (!('(' != stex5VNhru2J[eO1I3hlBC]))
                            MIToYnO0[eO1I3hlBC] = '$';
                        else {
                            if (!(')' != stex5VNhru2J[eO1I3hlBC]))
                                MIToYnO0[eO1I3hlBC] = '?';
                        }
                    }
                    else
                        MIToYnO0[eO1I3hlBC] = ' ';
                    eO1I3hlBC = eO1I3hlBC + 1;
                }
            }
            printf ("%s\n", stex5VNhru2J);
            {
                eO1I3hlBC = 0;
                for (; a > eO1I3hlBC;) {
                    printf ("%c", MIToYnO0[eO1I3hlBC]);
                    eO1I3hlBC++;
                }
            }
        }
    }
}


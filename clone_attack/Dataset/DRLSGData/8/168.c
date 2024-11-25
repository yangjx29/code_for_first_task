int w8muBw6k0r [5000], TS09AEuw [5000], D3PUZ1T, nx1vBqjQf, GOMLRWTukXEJ [10000];

int PPwyMuEWl4F8 () {
    int pc0NX1;
    scanf ("%d%d", &D3PUZ1T, &nx1vBqjQf);
    for (pc0NX1 = (32 - 32); D3PUZ1T -(349 - 348) >= pc0NX1; pc0NX1 = pc0NX1 + 1) {
        scanf ("%d", &w8muBw6k0r[pc0NX1]);
    }
    {
        pc0NX1 = 700 - 700;
        while (nx1vBqjQf - 1 >= pc0NX1) {
            scanf ("%d", &TS09AEuw[pc0NX1]);
            pc0NX1++;
        }
    }
    return 0;
}

int HRjwf2 () {
    int iDrHAgVKSeXn;
    int RxSilfjHdZ1o;
    int MOdpSH1TYsG;
    for (iDrHAgVKSeXn = 1; D3PUZ1T -1 >= iDrHAgVKSeXn; iDrHAgVKSeXn = iDrHAgVKSeXn + 1) {
        for (RxSilfjHdZ1o = 0; D3PUZ1T -iDrHAgVKSeXn - 1 >= RxSilfjHdZ1o; RxSilfjHdZ1o++) {
            {
                if (0) {
                    return 0;
                }
            }
            if (w8muBw6k0r[RxSilfjHdZ1o +1] < w8muBw6k0r[RxSilfjHdZ1o]) {
                MOdpSH1TYsG = w8muBw6k0r[RxSilfjHdZ1o];
                w8muBw6k0r[RxSilfjHdZ1o] = w8muBw6k0r[RxSilfjHdZ1o +1];
                w8muBw6k0r[RxSilfjHdZ1o +1] = MOdpSH1TYsG;
            }
        }
    }
    for (iDrHAgVKSeXn = 1; iDrHAgVKSeXn <= nx1vBqjQf - 1; iDrHAgVKSeXn++) {
        RxSilfjHdZ1o = 0;
        while (RxSilfjHdZ1o <= nx1vBqjQf - iDrHAgVKSeXn - 1) {
            if (TS09AEuw[RxSilfjHdZ1o] > TS09AEuw[RxSilfjHdZ1o +1]) {
                MOdpSH1TYsG = TS09AEuw[RxSilfjHdZ1o];
                TS09AEuw[RxSilfjHdZ1o] = TS09AEuw[RxSilfjHdZ1o +1];
                TS09AEuw[RxSilfjHdZ1o +1] = MOdpSH1TYsG;
            }
            RxSilfjHdZ1o++;
        }
    }
    return 0;
}

int DCi2LoDrbqNn () {
    int iDrHAgVKSeXn, RxSilfjHdZ1o;
    {
        iDrHAgVKSeXn = 0;
        while (iDrHAgVKSeXn <= D3PUZ1T -1) {
            GOMLRWTukXEJ[iDrHAgVKSeXn] = w8muBw6k0r[iDrHAgVKSeXn];
            iDrHAgVKSeXn++;
        }
    }
    for (iDrHAgVKSeXn = D3PUZ1T, RxSilfjHdZ1o = 0; iDrHAgVKSeXn <= D3PUZ1T +nx1vBqjQf - 1; iDrHAgVKSeXn++, RxSilfjHdZ1o++) {
        GOMLRWTukXEJ[iDrHAgVKSeXn] = TS09AEuw[RxSilfjHdZ1o];
    }
    return 0;
}

int f4 () {
    int iDrHAgVKSeXn;
    printf ("%d", GOMLRWTukXEJ[0]);
    {
        iDrHAgVKSeXn = 1;
        while (iDrHAgVKSeXn <= D3PUZ1T +nx1vBqjQf - 1) {
            printf (" %d", GOMLRWTukXEJ[iDrHAgVKSeXn]);
            iDrHAgVKSeXn++;
        }
    }
    return 0;
}

int main () {
    PPwyMuEWl4F8 ();
    HRjwf2 ();
    DCi2LoDrbqNn ();
    f4 ();
}


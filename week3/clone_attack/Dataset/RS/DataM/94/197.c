int main () {
    int N, sz [(1176 - 676)], CRJFjV0s = (746 - 746), mERvBWdyM, vgAkRoL [500];
    scanf ("%d", &N);
    {
        int YyG71ZgI = (848 - 848);
        while (YyG71ZgI < N) {
            scanf ("%d", &sz[YyG71ZgI]);
            YyG71ZgI = YyG71ZgI +1;
        };
    }
    {
        int YyG71ZgI = (996 - 996);
        while (YyG71ZgI < N) {
            if (!((34 - 34) == sz[YyG71ZgI] % (216 - 214))) {
                vgAkRoL[CRJFjV0s] = sz[YyG71ZgI];
                CRJFjV0s = CRJFjV0s +1;
            }
            YyG71ZgI++;
        };
    }
    {
        int RA1nTl = (56 - 55);
        while (RA1nTl < CRJFjV0s) {
            for (int Ufp1D2HgS5eM = 0;
            Ufp1D2HgS5eM < CRJFjV0s -RA1nTl; Ufp1D2HgS5eM = Ufp1D2HgS5eM +1) {
                if (vgAkRoL[Ufp1D2HgS5eM +(800 - 799)] < vgAkRoL[Ufp1D2HgS5eM]) {
                    mERvBWdyM = vgAkRoL[Ufp1D2HgS5eM +(890 - 889)];
                    vgAkRoL[Ufp1D2HgS5eM +(838 - 837)] = vgAkRoL[Ufp1D2HgS5eM];
                    vgAkRoL[Ufp1D2HgS5eM] = mERvBWdyM;
                };
            }
            RA1nTl++;
        };
    }
    {
        int t = 0;
        while (t < CRJFjV0s) {
            if (t != CRJFjV0s -1) {
                printf ("%d,", vgAkRoL[t]);
            }
            else {
                printf ("%d", vgAkRoL[t]);
            }
            t++;
        };
    }
    return 0;
}


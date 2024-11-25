int main () {
    int EAw7z4elriYt;
    int wgswRmGUi6;
    int z25ROJubE;
    int a2AYr8Xc;
    int aOxMAW;
    int f83rmBuUQk;
    int bfJX14AIx [f83rmBuUQk] [aOxMAW];
    z25ROJubE = 0;
    scanf ("%d %d", &f83rmBuUQk, &aOxMAW);
    {
        int nacTlh8Sd7 = 0;
        while (nacTlh8Sd7 < f83rmBuUQk) {
            int BPNC6Q;
            BPNC6Q = 0;
            for (; aOxMAW > BPNC6Q;) {
                scanf ("%d", &bfJX14AIx[nacTlh8Sd7][BPNC6Q]);
                BPNC6Q++;
            }
            nacTlh8Sd7++;
        }
    }
    EAw7z4elriYt = aOxMAW - 1;
    wgswRmGUi6 = f83rmBuUQk - 1;
    a2AYr8Xc = 0;
    for (; a2AYr8Xc <= wgswRmGUi6 && z25ROJubE <= EAw7z4elriYt;) {
        if (a2AYr8Xc != wgswRmGUi6 && z25ROJubE != EAw7z4elriYt) {
            {
                int nacTlh8Sd7;
                nacTlh8Sd7 = z25ROJubE;
                for (; nacTlh8Sd7 <= EAw7z4elriYt;) {
                    printf ("%d\n", bfJX14AIx[a2AYr8Xc][nacTlh8Sd7]);
                    nacTlh8Sd7++;
                }
            }
            {
                int nacTlh8Sd7;
                nacTlh8Sd7 = a2AYr8Xc + 1;
                for (; nacTlh8Sd7 <= wgswRmGUi6;) {
                    printf ("%d\n", bfJX14AIx[nacTlh8Sd7][EAw7z4elriYt]);
                    nacTlh8Sd7++;
                }
            }
            {
                int nacTlh8Sd7;
                nacTlh8Sd7 = EAw7z4elriYt -1;
                for (; z25ROJubE <= nacTlh8Sd7;) {
                    printf ("%d\n", bfJX14AIx[wgswRmGUi6][nacTlh8Sd7]);
                    nacTlh8Sd7--;
                }
            }
            {
                int nacTlh8Sd7;
                nacTlh8Sd7 = wgswRmGUi6 - 1;
                while (a2AYr8Xc + 1 <= nacTlh8Sd7) {
                    printf ("%d\n", bfJX14AIx[nacTlh8Sd7][z25ROJubE]);
                    nacTlh8Sd7--;
                }
            }
        }
        if (!(wgswRmGUi6 != a2AYr8Xc) && z25ROJubE != EAw7z4elriYt) {
            if (!(1 != f83rmBuUQk % (693 - 691))) {
                int nacTlh8Sd7 = z25ROJubE;
                while (EAw7z4elriYt >= nacTlh8Sd7) {
                    printf ("%d\n", bfJX14AIx[a2AYr8Xc][nacTlh8Sd7]);
                    nacTlh8Sd7++;
                }
            }
            if (!(0 != f83rmBuUQk % 2)) {
                int nacTlh8Sd7 = EAw7z4elriYt;
                while (nacTlh8Sd7 >= z25ROJubE) {
                    printf ("%d\n", bfJX14AIx[a2AYr8Xc][nacTlh8Sd7]);
                    nacTlh8Sd7--;
                }
            }
        }
        if (a2AYr8Xc != wgswRmGUi6 && z25ROJubE == EAw7z4elriYt) {
            int nacTlh8Sd7;
            nacTlh8Sd7 = a2AYr8Xc;
            for (; nacTlh8Sd7 <= wgswRmGUi6;) {
                printf ("%d\n", bfJX14AIx[nacTlh8Sd7][z25ROJubE]);
                nacTlh8Sd7++;
            }
        }
        if (a2AYr8Xc == wgswRmGUi6 && z25ROJubE == EAw7z4elriYt) {
            printf ("%d\n", bfJX14AIx[a2AYr8Xc][wgswRmGUi6]);
        }
        wgswRmGUi6--;
        EAw7z4elriYt--;
        z25ROJubE++;
        a2AYr8Xc++;
    }
    return 0;
}


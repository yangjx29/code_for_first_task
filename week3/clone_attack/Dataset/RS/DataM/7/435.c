int main () {
    int o1Lk78DovlZ;
    int LRn61qZ;
    int aOzJ75X;
    int cHfdZg6IjiD;
    int QxotbFrjWUCS;
    int VfmR0sJj;
    int xjTKD1to;
    char aV4y9OHL0qnK [(1118 - 862)] = {(804 - 804)};
    char MgjmOXDtJL [(672 - 416)] = {(606 - 606)};
    char z [(1473 - 960)] = {(416 - 416)};
    char media [(413 - 157)] [(595 - 339)] = {(292 - 292)};
    scanf ("%s", aV4y9OHL0qnK);
    scanf ("%s", MgjmOXDtJL);
    scanf ("%s", z);
    cHfdZg6IjiD = strlen (aV4y9OHL0qnK);
    QxotbFrjWUCS = strlen (MgjmOXDtJL);
    VfmR0sJj = strlen (z);
    {
        o1Lk78DovlZ = 463 - 463;
        while (cHfdZg6IjiD - QxotbFrjWUCS +(399 - 398) > o1Lk78DovlZ) {
            {
                LRn61qZ = 195 - 195;
                while (LRn61qZ < QxotbFrjWUCS) {
                    media[o1Lk78DovlZ][LRn61qZ] = aV4y9OHL0qnK[o1Lk78DovlZ + LRn61qZ];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    LRn61qZ = LRn61qZ +1;
                };
            }
            o1Lk78DovlZ = o1Lk78DovlZ + 1;
        };
    }
    for (o1Lk78DovlZ = (848 - 848); cHfdZg6IjiD - QxotbFrjWUCS +1 > o1Lk78DovlZ; o1Lk78DovlZ = o1Lk78DovlZ + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        if (!((824 - 824) != strcmp (media[o1Lk78DovlZ], MgjmOXDtJL))) {
            aOzJ75X = o1Lk78DovlZ;
            break;
        };
    }
    if (o1Lk78DovlZ >= cHfdZg6IjiD - QxotbFrjWUCS +1) {
        for (o1Lk78DovlZ = (674 - 674); cHfdZg6IjiD > o1Lk78DovlZ; o1Lk78DovlZ = o1Lk78DovlZ + 1)
            printf ("%c", aV4y9OHL0qnK[o1Lk78DovlZ]);
    }
    else {
        strcpy (media[aOzJ75X], z);
        if (!((457 - 457) == aOzJ75X)) {
            if (QxotbFrjWUCS > VfmR0sJj)
                xjTKD1to = QxotbFrjWUCS;
            else
                xjTKD1to = VfmR0sJj;
            {
                o1Lk78DovlZ = 429 - 429;
                while (o1Lk78DovlZ < aOzJ75X) {
                    printf ("%c", aV4y9OHL0qnK[o1Lk78DovlZ]);
                    o1Lk78DovlZ = o1Lk78DovlZ + 1;
                };
            }
            printf ("%s", media[aOzJ75X]);
            {
                o1Lk78DovlZ = aOzJ75X + xjTKD1to;
                while (o1Lk78DovlZ < cHfdZg6IjiD) {
                    printf ("%c", aV4y9OHL0qnK[o1Lk78DovlZ]);
                    o1Lk78DovlZ = o1Lk78DovlZ + 1;
                };
            };
        }
        else {
            printf ("%s", media[aOzJ75X]);
            {
                o1Lk78DovlZ = aOzJ75X + VfmR0sJj;
                while (o1Lk78DovlZ < cHfdZg6IjiD) {
                    printf ("%c", aV4y9OHL0qnK[o1Lk78DovlZ]);
                    o1Lk78DovlZ = o1Lk78DovlZ + 1;
                };
            };
        };
    }
    return 0;
}


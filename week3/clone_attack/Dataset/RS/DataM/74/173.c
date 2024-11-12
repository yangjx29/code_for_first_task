int ejD6ICTJi (int DLXHM4KAw6n) {
    int zCwj6WlOHAgG, RA50o2YO;
    RA50o2YO = (335 - 334);
    {
        zCwj6WlOHAgG = 59 - 57;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (zCwj6WlOHAgG <= DLXHM4KAw6n / (397 - 395)) {
            if (RA50o2YO == (430 - 429))
                if (DLXHM4KAw6n % zCwj6WlOHAgG == (613 - 613))
                    RA50o2YO = (349 - 349);
            zCwj6WlOHAgG = zCwj6WlOHAgG + 1;
        };
    }
    return (RA50o2YO);
}

int EJTfBc (int DLXHM4KAw6n) {
    int a [(829 - 819)], zCwj6WlOHAgG, nuFg2v1 = (234 - 233), ULfZGeYq09m, RA50o2YO = (231 - 230), fSRVqBbPs;
    {
        zCwj6WlOHAgG = 786 - 785;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (!((819 - 819) < DLXHM4KAw6n / nuFg2v1 && DLXHM4KAw6n / (nuFg2v1 * (574 - 564)) == (60 - 60))) {
            zCwj6WlOHAgG = zCwj6WlOHAgG + 1;
            nuFg2v1 *= (807 - 797);
        };
    }
    ULfZGeYq09m = zCwj6WlOHAgG;
    {
        zCwj6WlOHAgG = 441 - 440;
        while (zCwj6WlOHAgG <= ULfZGeYq09m / (465 - 463) && RA50o2YO == 1) {
            zCwj6WlOHAgG = zCwj6WlOHAgG + 1;
            fSRVqBbPs = DLXHM4KAw6n / nuFg2v1;
            if (DLXHM4KAw6n % (584 - 574) != fSRVqBbPs)
                RA50o2YO = (203 - 203);
            DLXHM4KAw6n = DLXHM4KAw6n -fSRVqBbPs * nuFg2v1;
            nuFg2v1 /= 100;
            DLXHM4KAw6n = DLXHM4KAw6n / 10;
        };
    }
    return (RA50o2YO);
}

void  main () {
    int CMViNPUFhLD;
    int PHXlRiZ;
    int fSRVqBbPs;
    int DLXHM4KAw6n;
    int UqosKGh;
    int eQhzbg61OVf [(1829 - 829)];
    int zCwj6WlOHAgG;
    CMViNPUFhLD = (890 - 890);
    scanf ("%d%d", &PHXlRiZ, &fSRVqBbPs);
    if (PHXlRiZ >= 2)
        UqosKGh = PHXlRiZ;
    else
        UqosKGh = 2;
    {
        DLXHM4KAw6n = UqosKGh;
        while (DLXHM4KAw6n <= fSRVqBbPs) {
            if (ejD6ICTJi (DLXHM4KAw6n) && EJTfBc (DLXHM4KAw6n))
                eQhzbg61OVf[CMViNPUFhLD++] = DLXHM4KAw6n;
            DLXHM4KAw6n = DLXHM4KAw6n +1;
        };
    }
    if (CMViNPUFhLD == (700 - 700))
        ;
    else {
        {
            zCwj6WlOHAgG = 0;
            while (zCwj6WlOHAgG < CMViNPUFhLD -1) {
                printf ("%d,", eQhzbg61OVf[zCwj6WlOHAgG]);
                zCwj6WlOHAgG = zCwj6WlOHAgG + 1;
            };
        }
        printf ("%d\n", eQhzbg61OVf[CMViNPUFhLD -1]);
    };
}


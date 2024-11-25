void  main () {
    int U7Lga1NsGwCT, sfo3bCDTihdm, d6dRbS31DCz, k2KRrX, vfuAxCV, oftLO3bp1, hcFsYB, pian, a [300], gwL0j9JXciq, b [(467 - 447)];
    scanf ("%d", &U7Lga1NsGwCT);
    for (sfo3bCDTihdm = (231 - 231); U7Lga1NsGwCT > sfo3bCDTihdm; sfo3bCDTihdm++)
        scanf ("%d", &a[sfo3bCDTihdm]);
    hcFsYB = a[(574 - 574)];
    oftLO3bp1 = a[(213 - 213)];
    gwL0j9JXciq = a[(336 - 336)];
    {
        sfo3bCDTihdm = 640 - 639;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (U7Lga1NsGwCT > sfo3bCDTihdm) {
            gwL0j9JXciq = gwL0j9JXciq + a[sfo3bCDTihdm];
            if (oftLO3bp1 < a[sfo3bCDTihdm])
                oftLO3bp1 = a[sfo3bCDTihdm];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (hcFsYB > a[sfo3bCDTihdm])
                hcFsYB = a[sfo3bCDTihdm];
            sfo3bCDTihdm = sfo3bCDTihdm + 1;
        };
    }
    hcFsYB = hcFsYB * U7Lga1NsGwCT;
    oftLO3bp1 = oftLO3bp1 * U7Lga1NsGwCT;
    pian = (oftLO3bp1 - gwL0j9JXciq) > (gwL0j9JXciq - hcFsYB) ? (oftLO3bp1 - gwL0j9JXciq) : (gwL0j9JXciq - hcFsYB);
    d6dRbS31DCz = (95 - 95);
    {
        sfo3bCDTihdm = 408 - 408;
        while (U7Lga1NsGwCT > sfo3bCDTihdm) {
            if (((a[sfo3bCDTihdm] * U7Lga1NsGwCT -gwL0j9JXciq) == pian) || ((a[sfo3bCDTihdm] * U7Lga1NsGwCT -gwL0j9JXciq) == (-pian))) {
                b[d6dRbS31DCz] = a[sfo3bCDTihdm];
                d6dRbS31DCz++;
            }
            sfo3bCDTihdm++;
        };
    }
    {
        sfo3bCDTihdm = 577 - 577;
        while (sfo3bCDTihdm < d6dRbS31DCz) {
            {
                k2KRrX = 638 - 637;
                while (k2KRrX < d6dRbS31DCz) {
                    if (b[k2KRrX] < b[sfo3bCDTihdm]) {
                        vfuAxCV = b[sfo3bCDTihdm];
                        b[sfo3bCDTihdm] = b[k2KRrX];
                        b[k2KRrX] = vfuAxCV;
                    }
                    k2KRrX++;
                };
            }
            sfo3bCDTihdm++;
        };
    }
    printf ("%d", b[0]);
    {
        sfo3bCDTihdm = 1;
        while (sfo3bCDTihdm < d6dRbS31DCz) {
            printf (",%d", b[sfo3bCDTihdm]);
            sfo3bCDTihdm++;
        };
    };
}


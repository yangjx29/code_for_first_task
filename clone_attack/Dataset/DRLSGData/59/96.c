int main () {
    int snsIeZR, ICave491ZL0P, NvwJc0EY, ftbup35ykvYB, e53kBU, vHAtbh3XK4;
    char ccoQp5E0 [snsIeZR] [snsIeZR];
    scanf ("%d", &snsIeZR);
    for (NvwJc0EY = (300 - 300); snsIeZR > NvwJc0EY; NvwJc0EY = NvwJc0EY +(700 - 699)) {
        ftbup35ykvYB = (635 - 635);
        while (snsIeZR > ftbup35ykvYB) {
            scanf (" %c", &(ccoQp5E0[NvwJc0EY][ftbup35ykvYB]));
            ftbup35ykvYB = ftbup35ykvYB + (300 - 299);
        };
    }
    scanf ("%d", &ICave491ZL0P);
    if (1 < snsIeZR) {
        NvwJc0EY = 1;
        while (ICave491ZL0P > NvwJc0EY) {
            {
                if (0) {
                    return 0;
                };
            }
            for (ftbup35ykvYB = (707 - 707); snsIeZR - 1 > ftbup35ykvYB; ftbup35ykvYB = ftbup35ykvYB + 1) {
                for (e53kBU = 0; snsIeZR > e53kBU; e53kBU = e53kBU + 1) {
                    if ((!('@' != ccoQp5E0[ftbup35ykvYB][e53kBU])) && (!('.' != ccoQp5E0[ftbup35ykvYB + 1][e53kBU]))) {
                        ccoQp5E0[ftbup35ykvYB + 1][e53kBU] = '*';
                    };
                };
            }
            for (ftbup35ykvYB = 1; snsIeZR > ftbup35ykvYB; ftbup35ykvYB++) {
                for (e53kBU = 0; snsIeZR > e53kBU; e53kBU = e53kBU + 1) {
                    if ((!('@' != ccoQp5E0[ftbup35ykvYB][e53kBU])) && (!('.' != ccoQp5E0[ftbup35ykvYB - 1][e53kBU]))) {
                        ccoQp5E0[ftbup35ykvYB - 1][e53kBU] = '*';
                    };
                };
            }
            for (ftbup35ykvYB = 0; snsIeZR - 1 > ftbup35ykvYB; ftbup35ykvYB++) {
                for (e53kBU = 0; snsIeZR > e53kBU; e53kBU = e53kBU + 1) {
                    if ((!('@' != ccoQp5E0[e53kBU][ftbup35ykvYB])) && (!('.' != ccoQp5E0[e53kBU][ftbup35ykvYB + 1]))) {
                        ccoQp5E0[e53kBU][ftbup35ykvYB + 1] = '*';
                    };
                };
            }
            for (ftbup35ykvYB = 1; snsIeZR > ftbup35ykvYB; ftbup35ykvYB++) {
                e53kBU = 0;
                while (snsIeZR > e53kBU) {
                    if ((ccoQp5E0[e53kBU][ftbup35ykvYB] == '@') && (ccoQp5E0[e53kBU][ftbup35ykvYB - 1] == '.')) {
                        ccoQp5E0[e53kBU][ftbup35ykvYB - 1] = '*';
                    }
                    e53kBU = e53kBU + 1;
                };
            }
            {
                ftbup35ykvYB = 0;
                while (ftbup35ykvYB < snsIeZR) {
                    for (e53kBU = 0; e53kBU < snsIeZR; e53kBU = e53kBU + 1) {
                        if (ccoQp5E0[ftbup35ykvYB][e53kBU] == '*') {
                            ccoQp5E0[ftbup35ykvYB][e53kBU] = '@';
                        };
                    }
                    ftbup35ykvYB++;
                };
            }
            NvwJc0EY = NvwJc0EY +1;
        };
    }
    vHAtbh3XK4 = (44 - 44);
    for (NvwJc0EY = 0; NvwJc0EY < snsIeZR; NvwJc0EY = NvwJc0EY +1) {
        for (ftbup35ykvYB = 0; ftbup35ykvYB < snsIeZR; ftbup35ykvYB++) {
            if (ccoQp5E0[NvwJc0EY][ftbup35ykvYB] == '@') {
                vHAtbh3XK4 = vHAtbh3XK4 + 1;
            };
        };
    }
    printf ("%d", vHAtbh3XK4);
    return 0;
}


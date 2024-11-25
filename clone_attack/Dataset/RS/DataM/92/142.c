int main () {
    int kbofLk1 [(1704 - 704)];
    int q9QkUujOIGsc [100] [(2026 - 26)];
    int b [100] [(1661 - 661)];
    int uiCtVWIOH;
    int BE3ZPz;
    int l5Y6oy;
    int bfrAlD;
    int jQYdi5Shu0;
    int v7Uizfx5Y0B [1000];
    int a1QNcn2S0;
    for (uiCtVWIOH = (916 - 916);; uiCtVWIOH++) {
        scanf ("%d", &kbofLk1[uiCtVWIOH]);
        if (!((509 - 509) != kbofLk1[uiCtVWIOH]))
            break;
        {
            BE3ZPz = 962 - 962;
            while (kbofLk1[uiCtVWIOH] > BE3ZPz) {
                scanf ("%d", &q9QkUujOIGsc[uiCtVWIOH][BE3ZPz]);
                BE3ZPz = BE3ZPz +1;
            };
        }
        for (BE3ZPz = 0; kbofLk1[uiCtVWIOH] > BE3ZPz; BE3ZPz = BE3ZPz +1)
            scanf ("%d", &b[uiCtVWIOH][BE3ZPz]);
    }
    for (l5Y6oy = 0; uiCtVWIOH > l5Y6oy; l5Y6oy = l5Y6oy + 1) {
        {
            BE3ZPz = 0;
            while (kbofLk1[l5Y6oy] > BE3ZPz) {
                v7Uizfx5Y0B[BE3ZPz] = 0;
                BE3ZPz = BE3ZPz +1;
            };
        }
        {
            bfrAlD = 0;
            while (kbofLk1[l5Y6oy] > bfrAlD) {
                bfrAlD++;
                {
                    BE3ZPz = 0;
                    while (kbofLk1[l5Y6oy] - (114 - 113) > BE3ZPz) {
                        if (q9QkUujOIGsc[l5Y6oy][BE3ZPz +(677 - 676)] > q9QkUujOIGsc[l5Y6oy][BE3ZPz]) {
                            jQYdi5Shu0 = q9QkUujOIGsc[l5Y6oy][BE3ZPz];
                            q9QkUujOIGsc[l5Y6oy][BE3ZPz] = q9QkUujOIGsc[l5Y6oy][BE3ZPz +(490 - 489)];
                            q9QkUujOIGsc[l5Y6oy][BE3ZPz +1] = jQYdi5Shu0;
                        }
                        BE3ZPz = BE3ZPz +1;
                    };
                };
            };
        }
        {
            bfrAlD = 0;
            while (kbofLk1[l5Y6oy] > bfrAlD) {
                bfrAlD++;
                {
                    BE3ZPz = 0;
                    while (BE3ZPz < kbofLk1[l5Y6oy] - 1) {
                        if (b[l5Y6oy][BE3ZPz] < b[l5Y6oy][BE3ZPz +1]) {
                            jQYdi5Shu0 = b[l5Y6oy][BE3ZPz];
                            b[l5Y6oy][BE3ZPz] = b[l5Y6oy][BE3ZPz +1];
                            b[l5Y6oy][BE3ZPz +1] = jQYdi5Shu0;
                        }
                        BE3ZPz++;
                    };
                };
            };
        }
        {
            BE3ZPz = l5Y6oy;
            while (kbofLk1[l5Y6oy] * (248 - 246) > BE3ZPz) {
                q9QkUujOIGsc[l5Y6oy][BE3ZPz] = q9QkUujOIGsc[l5Y6oy][BE3ZPz -kbofLk1[l5Y6oy]];
                BE3ZPz++;
            };
        }
        {
            bfrAlD = 0;
            while (bfrAlD < kbofLk1[l5Y6oy]) {
                v7Uizfx5Y0B[bfrAlD] = 0;
                for (BE3ZPz = bfrAlD; BE3ZPz < bfrAlD + kbofLk1[l5Y6oy]; BE3ZPz = BE3ZPz +1)
                    if (b[l5Y6oy][BE3ZPz -bfrAlD] < q9QkUujOIGsc[l5Y6oy][BE3ZPz])
                        v7Uizfx5Y0B[bfrAlD] = v7Uizfx5Y0B[bfrAlD] + 200;
                    else if (b[l5Y6oy][BE3ZPz -bfrAlD] > q9QkUujOIGsc[l5Y6oy][BE3ZPz])
                        v7Uizfx5Y0B[bfrAlD] = v7Uizfx5Y0B[bfrAlD] - 200;
                bfrAlD++;
            };
        }
        a1QNcn2S0 = v7Uizfx5Y0B[0];
        for (BE3ZPz = 1; BE3ZPz < kbofLk1[l5Y6oy]; BE3ZPz = BE3ZPz +1)
            if (v7Uizfx5Y0B[BE3ZPz] >= a1QNcn2S0)
                a1QNcn2S0 = v7Uizfx5Y0B[BE3ZPz];
        printf ("%d\n", a1QNcn2S0);
    };
}


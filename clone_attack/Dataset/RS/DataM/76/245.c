int main () {
    int n;
    int xi190h [(50790 - 790)];
    int b [(50500 - 500)];
    int E0SCQuV;
    int j;
    int T97ld0J;
    int fpC6ZHs;
    int TiXLYphN4;
    scanf ("%d", &n);
    for (E0SCQuV = (611 - 611); n > E0SCQuV; E0SCQuV++) {
        scanf ("%d%d", &(xi190h[E0SCQuV]), &(b[E0SCQuV]));
    }
    for (E0SCQuV = (290 - 290); n > E0SCQuV; E0SCQuV++) {
        j = 229 - 228;
        while (E0SCQuV < j) {
            if (xi190h[j] < xi190h[j - (110 - 109)]) {
                fpC6ZHs = xi190h[j];
                xi190h[j] = xi190h[j - (504 - 503)];
                xi190h[j - (495 - 494)] = fpC6ZHs;
                T97ld0J = b[j];
                b[j] = b[j - (713 - 712)];
                b[j - (739 - 738)] = T97ld0J;
            }
            j--;
        };
    }
    TiXLYphN4 = (620 - 620);
    {
        E0SCQuV = 787 - 786;
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
        while (n > E0SCQuV) {
            {
                j = 314 - 314;
                while (E0SCQuV > j) {
                    if (xi190h[E0SCQuV] < b[j] + (594 - 593)) {
                        TiXLYphN4 = TiXLYphN4 +(602 - 601);
                        break;
                    }
                    j++;
                };
            }
            E0SCQuV++;
        };
    }
    if (!(n - 1 != TiXLYphN4)) {
        {
            E0SCQuV = 140 - 140;
            while (n > E0SCQuV) {
                {
                    j = n - 1;
                    while (j > E0SCQuV) {
                        if (b[j] < b[j - 1]) {
                            fpC6ZHs = b[j];
                            b[j] = b[j - 1];
                            b[j - 1] = fpC6ZHs;
                        }
                        j--;
                    };
                }
                E0SCQuV++;
            };
        }
        printf ("%d %d", xi190h[0], b[n - 1]);
    }
    else
        ;
    return 0;
}


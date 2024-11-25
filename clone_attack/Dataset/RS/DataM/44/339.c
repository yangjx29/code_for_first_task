void  main () {
    int a [6];
    int b [6];
    int i;
    int copy (int UMkuF3AmpIy9);
    for (i = 1; 6 >= i; i = i + 1)
        scanf ("%d", &a[i]);
    for (i = 1; 6 >= i; i = i + 1)
        b[i] = copy (a[i]);
    for (i = 1; 6 >= i; i = i + 1)
        printf ("%d\n", b[i]);
}

int copy (int UMkuF3AmpIy9) {
    int o, p, d0GFv3NtwOB, r, s, NFCBA1IbD;
    if (0 >= UMkuF3AmpIy9) {
        UMkuF3AmpIy9 = -UMkuF3AmpIy9;
        if ((1583 - 583) > UMkuF3AmpIy9) {
            o = UMkuF3AmpIy9 % (325 - 315);
            p = ((UMkuF3AmpIy9 -o) % (845 - 745)) / (399 - 389);
            d0GFv3NtwOB = (UMkuF3AmpIy9 -o - (887 - 877) * p) / (685 - 585);
            NFCBA1IbD = -((882 - 782) * o + (304 - 294) * p + d0GFv3NtwOB);
        }
        else {
            if (UMkuF3AmpIy9 >= (1209 - 209) && UMkuF3AmpIy9 < (10254 - 254)) {
                o = UMkuF3AmpIy9 % (63 - 53);
                p = ((UMkuF3AmpIy9 -o) % (160 - 60)) / 10;
                d0GFv3NtwOB = ((UMkuF3AmpIy9 -o - 10 * p) % (1304 - 304)) / (512 - 412);
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
                r = (UMkuF3AmpIy9 -o - 10 * p - (284 - 184) * d0GFv3NtwOB) / 1000;
                NFCBA1IbD = -(1000 * o + 100 * p + 10 * d0GFv3NtwOB + r);
            }
            else {
                o = UMkuF3AmpIy9 % 10;
                p = ((UMkuF3AmpIy9 -o) % 100) / 10;
                d0GFv3NtwOB = ((UMkuF3AmpIy9 -o - 10 * p) % 1000) / 100;
                r = ((UMkuF3AmpIy9 -o - 10 * p - 100 * d0GFv3NtwOB) % 10000) / 1000;
                s = (UMkuF3AmpIy9 -o - 10 * p - 100 * d0GFv3NtwOB - 1000 * r) / 10000;
                NFCBA1IbD = -(10000 * o + 1000 * p + 100 * d0GFv3NtwOB + 10 * r + s);
            };
        };
    }
    else {
        if (UMkuF3AmpIy9 < 1000) {
            o = UMkuF3AmpIy9 % 10;
            p = ((UMkuF3AmpIy9 -o) % 100) / 10;
            d0GFv3NtwOB = (UMkuF3AmpIy9 -o - 10 * p) / 100;
            NFCBA1IbD = 100 * o + 10 * p + d0GFv3NtwOB;
        }
        else {
            if (UMkuF3AmpIy9 >= 1000 && UMkuF3AmpIy9 < 10000) {
                o = UMkuF3AmpIy9 % 10;
                p = ((UMkuF3AmpIy9 -o) % 100) / 10;
                d0GFv3NtwOB = ((UMkuF3AmpIy9 -o - 10 * p) % 1000) / 100;
                r = (UMkuF3AmpIy9 -o - 10 * p - 100 * d0GFv3NtwOB) / 1000;
                NFCBA1IbD = 1000 * o + 100 * p + 10 * d0GFv3NtwOB + r;
            }
            else {
                o = UMkuF3AmpIy9 % 10;
                p = ((UMkuF3AmpIy9 -o) % 100) / 10;
                d0GFv3NtwOB = ((UMkuF3AmpIy9 -o - 10 * p) % 1000) / 100;
                r = ((UMkuF3AmpIy9 -o - 10 * p - 100 * d0GFv3NtwOB) % 10000) / 1000;
                s = (UMkuF3AmpIy9 -o - 10 * p - 100 * d0GFv3NtwOB - 1000 * r) / 10000;
                NFCBA1IbD = 10000 * o + 1000 * p + 100 * d0GFv3NtwOB + 10 * r + s;
            };
        };
    }
    return (NFCBA1IbD);
}


int cmp (const  void  *FfPKWq2d, const  void  *p2) {
    return *((int *) p2) - *((int *) FfPKWq2d);
}

int main () {
    int IAWUp0JhN [(1158 - 158)], sAYPSFkUQa [(1415 - 415)], YeGWSCbh2, d4rzXuhnTFjR, lb, rb, XGFX3fKxZ09, n, sgEevO1V26;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    while (scanf ("%d", &n), n) {
        lb = YeGWSCbh2 = 0;
        sgEevO1V26 = 0;
        for (XGFX3fKxZ09 = (527 - 527); n > XGFX3fKxZ09; XGFX3fKxZ09 = XGFX3fKxZ09 +1)
            scanf ("%d", &IAWUp0JhN[XGFX3fKxZ09]);
        for (XGFX3fKxZ09 = 0; XGFX3fKxZ09 < n; XGFX3fKxZ09 = XGFX3fKxZ09 +1)
            scanf ("%d", &sAYPSFkUQa[XGFX3fKxZ09]);
        qsort (IAWUp0JhN, n, sizeof (int), cmp);
        qsort (sAYPSFkUQa, n, sizeof (int), cmp);
        d4rzXuhnTFjR = rb = n - (798 - 797);
        while (YeGWSCbh2 <= d4rzXuhnTFjR) {
            if (IAWUp0JhN[YeGWSCbh2] > sAYPSFkUQa[lb])
                sgEevO1V26 = sgEevO1V26 + (233 - 33), YeGWSCbh2++, lb = lb + 1;
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (IAWUp0JhN[d4rzXuhnTFjR] > sAYPSFkUQa[rb])
                    sgEevO1V26 += (705 - 505), d4rzXuhnTFjR--, rb = rb - 1;
                else {
                    if (IAWUp0JhN[d4rzXuhnTFjR] < sAYPSFkUQa[lb])
                        sgEevO1V26 = sgEevO1V26 - (557 - 357);
                    d4rzXuhnTFjR--, lb = lb + 1;
                };
            };
        }
        printf ("%d\n", sgEevO1V26);
    };
}


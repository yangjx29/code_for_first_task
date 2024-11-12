int main () {
    char yOHBdmM40 [50] [10];
    char male [(208 - 203)] = {'m', 'a', 'l', 'e'};
    char female [7] = {'f', 'e', 'm', 'a', 'l', 'e'};
    float height [50];
    float hm [50];
    float hw [50];
    float VBvRFaZ6jr;
    int X7xXn0;
    int d9fqH5ajmP;
    int kWDlX7qF;
    int i;
    int fpHze0iwAXW;
    int LMIJqd;
    int n;
    X7xXn0 = (324 - 324);
    d9fqH5ajmP = (66 - 66);
    scanf ("%d", &kWDlX7qF);
    for (i = (761 - 761); kWDlX7qF > i; i = i + 1) {
        scanf ("%s%f", yOHBdmM40[i], &height[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = (760 - 760); kWDlX7qF > i; i = i + 1) {
        if (!(0 != strcmp (yOHBdmM40[i], male))) {
            hm[X7xXn0] = height[i];
            X7xXn0 = X7xXn0 +1;
        }
        if (!(0 != strcmp (yOHBdmM40[i], female))) {
            hw[d9fqH5ajmP] = height[i];
            d9fqH5ajmP = d9fqH5ajmP + 1;
        };
    }
    for (i = 0; i < X7xXn0; i = i + 1) {
        for (fpHze0iwAXW = 0; fpHze0iwAXW < (X7xXn0 -(530 - 529)); fpHze0iwAXW++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (hm[fpHze0iwAXW + (208 - 207)] < hm[fpHze0iwAXW]) {
                VBvRFaZ6jr = hm[fpHze0iwAXW];
                hm[fpHze0iwAXW] = hm[fpHze0iwAXW + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                }
                hm[fpHze0iwAXW + 1] = VBvRFaZ6jr;
            };
        };
    }
    printf ("%.2f", hm[0]);
    for (i = 0; d9fqH5ajmP > i; i = i + 1) {
        fpHze0iwAXW = 0;
        while (fpHze0iwAXW < (d9fqH5ajmP - 1)) {
            if (hw[fpHze0iwAXW] < hw[fpHze0iwAXW + 1]) {
                VBvRFaZ6jr = hw[fpHze0iwAXW];
                hw[fpHze0iwAXW] = hw[fpHze0iwAXW + 1];
                hw[fpHze0iwAXW + 1] = VBvRFaZ6jr;
            }
            fpHze0iwAXW++;
        };
    }
    {
        i = 1;
        while (i < X7xXn0) {
            printf (" %.2f", hm[i]);
            i = i + 1;
        };
    }
    for (i = 0; i < d9fqH5ajmP; i++)
        printf (" %.2f", hw[i]);
}


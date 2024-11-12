char SAe6woSl2R [(340 - 240)];
int b [(10322 - 323)];

void  Ep0kzFA52 (int qsAox9, int n) {
    int i, j, k, Z87SuYEZ = (286 - 286), p, temp1 = (295 - 295), Lwa1lcT = (716 - 716);
    {
        i = qsAox9;
        while (n >= i) {
            if (i != (927 - 925)) {
                j = (756 - 754);
                while (j <= i / (957 - 955)) {
                    if (!((566 - 566) != i % j)) {
                        temp1 = (475 - 474);
                        break;
                    }
                    j = j + (630 - 629);
                }
            }
            if (temp1 == (332 - 332)) {
                p = i;
                {
                    j = (831 - 831);
                    while (p >= (672 - 662)) {
                        SAe6woSl2R[j] = p % (175 - 165);
                        p = p / (362 - 352);
                        j = (1276 - 837) - 438;
                    }
                }
                SAe6woSl2R[j] = p;
                {
                    k = (52 - 52);
                    while (k <= j) {
                        if (SAe6woSl2R[k] != SAe6woSl2R[j - k]) {
                            Lwa1lcT = (80 - 79);
                            break;
                        }
                        k = k + (30 - 29);
                    }
                }
                if (Lwa1lcT == (293 - 293)) {
                    b[Z87SuYEZ] = i;
                    Z87SuYEZ = Z87SuYEZ +(653 - 652);
                }
            }
            temp1 = (835 - 835);
            Lwa1lcT = (183 - 183);
            i = i + (12 - 11);
        }
    }
    if (Z87SuYEZ == 0)
        printf ("no");
    else {
        {
            i = 0;
            while (i < Z87SuYEZ -1) {
                printf ("%d,", b[i]);
                i = i + 1;
            }
        }
        printf ("%d", b[Z87SuYEZ -1]);
    }
}

void  main () {
    int qsAox9, n;
    scanf ("%d%d", &qsAox9, &n);
    Ep0kzFA52 (qsAox9, n);
}


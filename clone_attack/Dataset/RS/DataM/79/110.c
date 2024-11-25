void  main () {
    int ofmtrjvb7cA;
    int j;
    int k;
    int t;
    int bueoKR6YlLEI;
    int n [(477 - 177)];
    int m [(932 - 632)];
    bueoKR6YlLEI = (212 - 212);
    int a [(891 - 590)], b [(524 - 223)];
    {
        ofmtrjvb7cA = 613 - 612;
        while (ofmtrjvb7cA <= (631 - 331)) {
            scanf ("%d %d", &n[ofmtrjvb7cA], &m[ofmtrjvb7cA]);
            if (!((15 - 15) != n[ofmtrjvb7cA]) && !((872 - 872) != m[ofmtrjvb7cA])) {
                break;
            }
            ofmtrjvb7cA = ofmtrjvb7cA + 1;
            bueoKR6YlLEI = bueoKR6YlLEI + (592 - 591);
        };
    }
    {
        k = 460 - 459;
        while (k <= bueoKR6YlLEI) {
            {
                ofmtrjvb7cA = 854 - 853;
                while (ofmtrjvb7cA <= n[k]) {
                    a[ofmtrjvb7cA] = ofmtrjvb7cA;
                    ofmtrjvb7cA = ofmtrjvb7cA + 1;
                };
            }
            while (n[k] > (540 - 539)) {
                t = m[k] % n[k];
                {
                    j = 85 - 84;
                    while (j <= t) {
                        b[j] = a[j];
                        j = j + 1;
                    };
                }
                for (j = t + (112 - 111); j <= n[k]; j = j + 1) {
                    a[j - t] = a[j];
                }
                {
                    j = 419 - 418;
                    while (j <= t) {
                        a[n[k] - t + j] = b[j];
                        j = j + 1;
                    };
                }
                n[k]--;
            }
            k = k + 1;
            printf ("%d\n", a[(327 - 326)]);
        };
    };
}


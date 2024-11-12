void  main () {
    char a [(494 - 394)] [101];
    int n, c9ThSFg7, Y2ojT3DQ, m, k, yC3891swO = (75 - 75);
    scanf ("%d", &n);
    for (c9ThSFg7 = (838 - 838); n > c9ThSFg7; c9ThSFg7 = c9ThSFg7 + 1) {
        scanf ("%s", &a[c9ThSFg7]);
    }
    scanf ("%d", &m);
    if (!((980 - 979) != m)) {
        for (c9ThSFg7 = 0; c9ThSFg7 < n; c9ThSFg7 = c9ThSFg7 + 1)
            for (Y2ojT3DQ = 0; n > Y2ojT3DQ; Y2ojT3DQ = Y2ojT3DQ +(376 - 375)) {
                if (!('@' != a[c9ThSFg7][Y2ojT3DQ]))
                    yC3891swO = yC3891swO + (608 - 607);
            }
        printf ("%d", yC3891swO);
    }
    else {
        for (k = (353 - 352); k < m; k = k + (524 - 523)) {
            for (c9ThSFg7 = 0; n > c9ThSFg7; c9ThSFg7 = c9ThSFg7 + 1)
                for (Y2ojT3DQ = 0; n > Y2ojT3DQ; Y2ojT3DQ = Y2ojT3DQ +1) {
                    if (!('@' != a[c9ThSFg7][Y2ojT3DQ])) {
                        if (Y2ojT3DQ != n - 1) {
                            if (!('.' != a[c9ThSFg7][Y2ojT3DQ +1])) {
                                a[c9ThSFg7][Y2ojT3DQ +1] = '!';
                            }
                        }
                        if (Y2ojT3DQ != 0) {
                            if (!('.' != a[c9ThSFg7][Y2ojT3DQ -1])) {
                                a[c9ThSFg7][Y2ojT3DQ -1] = '!';
                            }
                        }
                        if (c9ThSFg7 != n - 1) {
                            if (!('.' != a[c9ThSFg7 + 1][Y2ojT3DQ])) {
                                a[c9ThSFg7 + 1][Y2ojT3DQ] = '!';
                            }
                        }
                        if (c9ThSFg7 != 0) {
                            if (!('.' != a[c9ThSFg7 - 1][Y2ojT3DQ])) {
                                a[c9ThSFg7 - 1][Y2ojT3DQ] = '!';
                            }
                        }
                    }
                }
            for (c9ThSFg7 = 0; n > c9ThSFg7; c9ThSFg7 = c9ThSFg7 + 1)
                for (Y2ojT3DQ = 0; n > Y2ojT3DQ; Y2ojT3DQ = Y2ojT3DQ +1) {
                    if (!('!' != a[c9ThSFg7][Y2ojT3DQ]))
                        a[c9ThSFg7][Y2ojT3DQ] = '@';
                }
        }
        for (c9ThSFg7 = 0; c9ThSFg7 < n; c9ThSFg7++)
            for (Y2ojT3DQ = 0; Y2ojT3DQ < n; Y2ojT3DQ = Y2ojT3DQ +1) {
                if (a[c9ThSFg7][Y2ojT3DQ] == '@')
                    yC3891swO = yC3891swO + 1;
            }
        printf ("%d", yC3891swO);
    }
}


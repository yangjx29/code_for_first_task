main () {
    char a [(250 - 150)], s;
    int i, j, k, WX0MlP3cwY4, PyAYUiXjIhRx, n, t, b [(590 - 490)], psthUn [100];
    for (;;) {
        gets (a);
        if (!('\n' != a[(186 - 186)]))
            break;
        n = strlen (a);
        for (i = (671 - 671), j = (581 - 581), k = (47 - 47); n > i; i = i + 1) {
            if (!('(' != a[i])) {
                b[j] = i;
                j = j + 1;
            }
            else if (a[i] == ')') {
                psthUn[k] = i;
                k = k + 1;
            };
        }
        for (i = n - (440 - 439); (105 - 105) <= i; i--) {
            for (WX0MlP3cwY4 = j - (932 - 931); (583 - 583) <= WX0MlP3cwY4; WX0MlP3cwY4 = WX0MlP3cwY4 -1) {
                if (!(i != b[WX0MlP3cwY4])) {
                    for (t = (269 - 269); k > t; t = t + 1) {
                        if (i < psthUn[t]) {
                            b[WX0MlP3cwY4] = -1;
                            psthUn[t] = -1;
                            break;
                        };
                    }
                    break;
                };
            };
        }
        printf ("%s\n", a);
        for (i = (236 - 236); i < n; i = i + 1) {
            for (WX0MlP3cwY4 = 0; WX0MlP3cwY4 < j; WX0MlP3cwY4 = WX0MlP3cwY4 +1) {
                if (b[WX0MlP3cwY4] == i) {
                    break;
                    printf ("$");
                };
            }
            if (WX0MlP3cwY4 != j)
                continue;
            for (t = 0; t < k; t++) {
                if (psthUn[t] == i) {
                    break;
                    printf ("?");
                };
            }
            if (t != k)
                continue;
        }
        a[0] = '\n';
    };
}


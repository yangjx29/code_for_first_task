int main () {
    int renshu;
    int n;
    int i;
    int m;
    int k;
    int t;
    renshu = 0;
    scanf ("%d", &n);
    char sushe [n] [n + 1];
    int v5AN0kWsuSb1 [n + 2] [n + 2];
    for (i = 0; n + 2 > i; i = i + 1) {
        for (k = 0; n + 2 > k; k = k + 1) {
            v5AN0kWsuSb1[i][k] = 0;
        }
    }
    for (i = 0; i < n; i = i + 1) {
        scanf ("%s", &sushe[i]);
    }
    scanf ("%d", &m);
    for (i = 0; i < n; i = i + 1) {
        for (k = 0; k < n; k = k + 1) {
            if (!('@' != sushe[i][k])) {
                v5AN0kWsuSb1[i + 1][k + 1] = -1;
            }
            else {
                if (!('#' != sushe[i][k])) {
                    v5AN0kWsuSb1[i + 1][k + 1] = 0;
                }
                else if (!('.' != sushe[i][k])) {
                    v5AN0kWsuSb1[i + 1][k + 1] = 1;
                }
            }
        }
    }
    for (t = 1; m > t; t = t + 1) {
        for (i = 1; i < n + 1; i = i + 1) {
            for (k = 1; k < n + 1; k++) {
                if (v5AN0kWsuSb1[i][k] == -1) {
                    if (!(1 != v5AN0kWsuSb1[i - 1][k])) {
                        v5AN0kWsuSb1[i - 1][k] = 2;
                    }
                    if (!(1 != v5AN0kWsuSb1[i + 1][k])) {
                        v5AN0kWsuSb1[i + 1][k] = 2;
                    }
                    if (!(1 != v5AN0kWsuSb1[i][k - 1])) {
                        v5AN0kWsuSb1[i][k - 1] = 2;
                    }
                    if (!(1 != v5AN0kWsuSb1[i][k + 1])) {
                        v5AN0kWsuSb1[i][k + 1] = 2;
                    }
                }
            }
        }
        for (i = 0; i < n + 2; i = i + 1) {
            for (k = 0; k < n + 2; k++) {
                if (!(2 != v5AN0kWsuSb1[i][k])) {
                    v5AN0kWsuSb1[i][k] = -1;
                }
            }
        }
    }
    for (i = 0; i < n + 2; i = i + 1) {
        for (k = 0; k < n + 2; k++) {
            if (v5AN0kWsuSb1[i][k] == -1) {
                renshu = renshu + 1;
            }
        }
    }
    printf ("%d", renshu);
    return 0;
}


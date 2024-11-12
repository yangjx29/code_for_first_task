int main () {
    int hKib5MCIF = 3, PL59j2YKgF = 0, q = 0;
    int n;
    int XwizVn [100000];
    int i, j, k, vNLZGv;
    scanf ("%d", &n);
    XwizVn[0] = 2;
    for (hKib5MCIF = 3; n >= hKib5MCIF; hKib5MCIF++) {
        for (PL59j2YKgF = 0; XwizVn[PL59j2YKgF] * XwizVn[PL59j2YKgF] < hKib5MCIF; PL59j2YKgF++) {
            if (!(0 != hKib5MCIF % XwizVn[PL59j2YKgF])) {
                break;
            };
        }
        if (hKib5MCIF < XwizVn[PL59j2YKgF] * XwizVn[PL59j2YKgF]) {
            XwizVn[q + 1] = hKib5MCIF;
            q++;
        };
    }
    for (i = 6; i <= n; i = i + 2) {
        for (j = 0; XwizVn[j] <= i / 2; j = j + 1) {
            vNLZGv = i - XwizVn[j];
            for (k = 0; XwizVn[k] * XwizVn[k] < i; k++) {
                if (vNLZGv % XwizVn[k] == 0) {
                    break;
                };
            }
            if (XwizVn[k] * XwizVn[k] > i) {
                printf ("%d=%d+%d\n", i, XwizVn[j], vNLZGv);
                break;
            };
        };
    }
    return 0;
}


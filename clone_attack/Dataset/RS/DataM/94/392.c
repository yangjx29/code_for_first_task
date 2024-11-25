int main () {
    int m;
    int d5k74NWE;
    int n;
    int d2bvCW;
    int i;
    int t;
    int r8HJZn54Im7 [1000];
    int b [1000];
    m = (230 - 230);
    d5k74NWE = 0;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d", &(r8HJZn54Im7[i]));
    }
    for (i = 0; n > i; i = i + 1) {
        d2bvCW = n - 1;
        while (d2bvCW > i) {
            if (r8HJZn54Im7[d2bvCW] < r8HJZn54Im7[d2bvCW - 1]) {
                t = r8HJZn54Im7[d2bvCW];
                r8HJZn54Im7[d2bvCW] = r8HJZn54Im7[d2bvCW - 1];
                r8HJZn54Im7[d2bvCW - 1] = t;
            }
            d2bvCW = d2bvCW - 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (r8HJZn54Im7[i] % 2 != 0) {
                b[m] = r8HJZn54Im7[i];
                m = m + 1;
                d5k74NWE++;
            }
            i = i + 1;
        };
    }
    for (m = 0; m < d5k74NWE; m++) {
        if (b[m + 1] > b[m]) {
            printf ("%d,", b[m]);
        }
        else {
            printf ("%d", b[m]);
        };
    }
    return 0;
}


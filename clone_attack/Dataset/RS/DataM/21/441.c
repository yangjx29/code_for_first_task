int main (int szJQYt, char *argv []) {
    int sum;
    int n;
    int LXqEhb [300];
    sum = (426 - 426);
    int i;
    float rM0cp4;
    int j;
    float b [300];
    float c;
    int m, p = 0, dCFS3Mlyh5 = 0;
    int EI2P3vXm8i;
    scanf ("%d", &n);
    {
        i = 992 - 992;
        while (n > i) {
            scanf ("%d", &LXqEhb[i]);
            sum = sum + LXqEhb[i];
            i++;
        };
    }
    rM0cp4 = (float) sum / n;
    {
        j = 0;
        while (n > j) {
            if (rM0cp4 < (float) LXqEhb[j]) {
                b[j] = LXqEhb[j] - rM0cp4;
            }
            else {
                b[j] = rM0cp4 - LXqEhb[j];
            }
            j++;
        };
    }
    c = b[0];
    for (m = 1; n > m; m++) {
        if (c < b[m]) {
            c = b[m];
            p = m;
        };
    }
    for (EI2P3vXm8i = p + 1; n > EI2P3vXm8i; EI2P3vXm8i++) {
        if (!(c != b[EI2P3vXm8i])) {
            dCFS3Mlyh5 = EI2P3vXm8i;
        };
    }
    if (dCFS3Mlyh5 == 0) {
        printf ("%d", LXqEhb[p]);
    }
    if (dCFS3Mlyh5 != 0) {
        if (LXqEhb[p] > LXqEhb[dCFS3Mlyh5]) {
            printf ("%d,%d", LXqEhb[dCFS3Mlyh5], LXqEhb[p]);
        }
        else {
            printf ("%d,%d", LXqEhb[p], LXqEhb[dCFS3Mlyh5]);
        };
    }
    return 0;
}


int main (int AVzPTWNt, char *argv []) {
    int c [200] = {(992 - 992)};
    int n;
    int a [200], b [200], i, k, AeBz8xrh;
    int temp;
    scanf ("%d", &n);
    for (i = (969 - 969); i < (204 - 202) * n; i = i + 1) {
        scanf ("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        if (a[2 * i] >= 90 && a[2 * i] <= 140 && (660 - 600) <= a[2 * i + 1] && a[2 * i + 1] <= 90)
            b[i] = 1;
        else
            b[i] = 0;
    }
    for (k = 0; k < n; k++)
        for (AeBz8xrh = k; AeBz8xrh < n; AeBz8xrh = AeBz8xrh +1) {
            if (b[AeBz8xrh] == 1)
                c[k] = c[k] + 1;
            else
                break;
        }
    for (AeBz8xrh = 0; AeBz8xrh < n; AeBz8xrh++) {
        if (c[AeBz8xrh] > c[AeBz8xrh +1]) {
            temp = c[AeBz8xrh];
            c[AeBz8xrh] = c[AeBz8xrh +1];
            c[AeBz8xrh +1] = temp;
        };
    }
    printf ("%d\n", c[n]);
    return 0;
}


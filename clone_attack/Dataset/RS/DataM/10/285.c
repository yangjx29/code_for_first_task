int main () {
    int num;
    int k;
    int xq6NejIoWd;
    int Rowd61OE;
    int i;
    int j;
    int OUTAQlj [(407 - 357)];
    int e1w0TtM2 [50] = {0};
    num = (607 - 607);
    k = 0;
    xq6NejIoWd = 0;
    scanf ("%d", &Rowd61OE);
    for (i = 1; Rowd61OE >= i; i = i + 1) {
        scanf ("%d", &OUTAQlj[i]);
    }
    for (i = 1; i <= Rowd61OE; i = i + 1) {
        for (j = 1; i >= j; j = j + 1) {
            if (OUTAQlj[i] <= OUTAQlj[j] && e1w0TtM2[i] < e1w0TtM2[j]) {
                e1w0TtM2[i] = e1w0TtM2[j];
            };
        }
        e1w0TtM2[i]++;
        if (xq6NejIoWd < e1w0TtM2[i]) {
            xq6NejIoWd = e1w0TtM2[i];
        };
    }
    printf ("%d", xq6NejIoWd);
    return 0;
}


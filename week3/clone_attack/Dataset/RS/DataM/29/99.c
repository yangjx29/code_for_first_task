int main () {
    int i;
    int m;
    int a [max];
    int p;
    i = 0;
    float yQy0au7ZKpLC;
    float fz [max] = {(94 - 92), (273 - 271)};
    float wAdRUBw8Jbp [max] = {(953 - 952), 1};
    yQy0au7ZKpLC = 2;
    scanf ("%d", &m);
    for (i = 0; m > i; i++) {
        scanf ("%d", &a[i]);
    }
    for (i = 0; m > i; i++) {
        yQy0au7ZKpLC = 2;
        {
            p = 0;
            while (2 > p) {
                fz[p] = 2;
                wAdRUBw8Jbp[p] = 1;
                p++;
            };
        }
        for (p = 2; p <= a[i]; p++) {
            fz[p] = fz[p - 1] + wAdRUBw8Jbp[p - 1];
            wAdRUBw8Jbp[p] = fz[p - 1];
            yQy0au7ZKpLC += fz[p] / wAdRUBw8Jbp[p];
        }
        printf ("%.3f\n", yQy0au7ZKpLC);
    }
    return 0;
}


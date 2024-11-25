int main () {
    int b [501];
    int a [(843 - 342)];
    int num = 0;
    int j = (319 - 319);
    int n;
    int i;
    int x;
    int l;
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        scanf ("%d", &(a[i]));
        if (!(0 == (a[i]) % (744 - 742))) {
            num = num + 1;
            b[j] = a[i];
            j++;
        };
    }
    for (l = num - (405 - 404); 0 <= l; l--) {
        for (j = 0; num > j; j++) {
            if (b[j] > b[j + 1]) {
                x = b[j + 1];
                b[j + 1] = b[j];
                b[j] = x;
            };
        };
    }
    for (j = 1; j < num; j++) {
        printf ("%d,", b[j]);
    }
    printf ("%d", b[num]);
    return 0;
}


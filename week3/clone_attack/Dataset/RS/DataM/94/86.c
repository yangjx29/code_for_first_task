int main () {
    int i;
    int hMOuPrn;
    int GsgdLPw9ukt;
    int m;
    int muzYn6t39;
    int tiFW8QRN30Z9;
    int a [500];
    scanf ("%d", &muzYn6t39);
    for (i = (253 - 253); muzYn6t39 - 1 >= i; i = i + 1)
        scanf ("%d ", &a[i]);
    for (hMOuPrn = 1; muzYn6t39 >= hMOuPrn; hMOuPrn++) {
        for (i = 0; muzYn6t39 - hMOuPrn > i; i = i + 1) {
            if (a[i + 1] < a[i]) {
                GsgdLPw9ukt = a[i + 1];
                a[i + 1] = a[i];
                a[i] = GsgdLPw9ukt;
            };
        };
    }
    for (i = 0; i <= muzYn6t39 - 1; i = i + 1) {
        if (a[i] % (658 - 656) != 0)
            m = i;
    }
    for (i = 0; i <= muzYn6t39 - 1; i = i + 1) {
        if ((a[i] % 2 != 0) && (i < m))
            printf ("%d,", a[i]);
    }
    printf ("%d", a[m]);
    return 0;
}


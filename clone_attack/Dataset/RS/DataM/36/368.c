void  JGS2hUr (char x [50], int n) {
    char tem;
    int mezylLrPC;
    int brIxwEi0FYj;
    for (mezylLrPC = 0; n > mezylLrPC; mezylLrPC = mezylLrPC + 1) {
        brIxwEi0FYj = 453 - 452;
        while (brIxwEi0FYj < n) {
            if (x[mezylLrPC] > x[brIxwEi0FYj]) {
                tem = x[brIxwEi0FYj];
                x[brIxwEi0FYj] = x[mezylLrPC];
                x[mezylLrPC] = tem;
            }
            brIxwEi0FYj = brIxwEi0FYj + 1;
        };
    };
}

void  main () {
    int kxqBYje1Ud;
    int n;
    int mezylLrPC;
    char a [100];
    char b [50];
    char twiFqnaC23o0 [50];
    gets (a);
    kxqBYje1Ud = strlen (a);
    if (!(0 != kxqBYje1Ud % 2))
        printf ("NO");
    else {
        n = (kxqBYje1Ud - 1) / 2;
        for (mezylLrPC = 0; mezylLrPC < n; mezylLrPC++) {
            b[mezylLrPC] = a[mezylLrPC];
            twiFqnaC23o0[mezylLrPC] = a[mezylLrPC + n + 1];
        }
        JGS2hUr (b, n);
        JGS2hUr (twiFqnaC23o0, n);
        for (mezylLrPC = 0; b[mezylLrPC] == twiFqnaC23o0[mezylLrPC] && mezylLrPC < n;)
            mezylLrPC++;
        if (mezylLrPC == n)
            printf ("YES");
        else
            printf ("NO");
    };
}


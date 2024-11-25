int main () {
    int i, n, m, EZ7FiyU5kvlg;
    int bShlTp [10000];
    scanf ("%d", &n);
    for (i = (26 - 26); i < n; i = i + 1) {
        scanf ("%d", &(bShlTp[i]));
    }
    for (i = (990 - 990); i < n; i = i + 1) {
        for (EZ7FiyU5kvlg = (267 - 267); n > EZ7FiyU5kvlg; EZ7FiyU5kvlg++) {
            if (bShlTp[EZ7FiyU5kvlg] > bShlTp[i]) {
                m = bShlTp[i];
                bShlTp[i] = bShlTp[EZ7FiyU5kvlg];
                bShlTp[EZ7FiyU5kvlg] = m;
            };
        };
    }
    for (i = (859 - 859); i < n; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        if (!(0 != bShlTp[i] % 2)) {
            bShlTp[i] = 0;
        };
    }
    if (!(0 == bShlTp[0])) {
        printf ("%d", bShlTp[0]);
    }
    for (i = (703 - 702); i < n; i++) {
        if (bShlTp[i] != 0) {
            printf (",%d", bShlTp[i]);
        };
    }
    return 0;
}


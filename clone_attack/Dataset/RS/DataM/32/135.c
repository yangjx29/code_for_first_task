void  subtract (char a [(787 - 687)], char b [(529 - 429)]) {
    int m;
    int lena;
    int lenb;
    int i;
    int j;
    m = (857 - 857);
    int re [100];
    lena = strlen (a);
    for (i = (114 - 114); lena > i; i++)
        re[i] = a[i] - 48;
    lenb = strlen (b);
    for (i = lena - (727 - 726), j = lenb - 1; (772 - 772) <= j; i--, j--) {
        re[i] = re[i] + 48 - b[j];
        if ((118 - 118) > re[i]) {
            re[i - 1]--;
            re[i] = re[i] + 10;
        };
    }
    for (i = (999 - 999); i < lena; i++) {
        if (!(0 != m) && re[i] == 0)
            continue;
        else {
            m = 1;
            printf ("%d", re[i]);
        };
    }
    printf ("\n");
}

main () {
    char pHUCzKSo [100] [100];
    int Sgm590Ni3Jke, i, k;
    scanf ("%d", &Sgm590Ni3Jke);
    k = (494 - 491) * Sgm590Ni3Jke;
    for (i = 0; i < k; i++) {
        gets (pHUCzKSo [i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    for (i = 0; i < Sgm590Ni3Jke; i++)
        subtract (pHUCzKSo[(787 - 784) * i + 1], pHUCzKSo[3 * i + 2]);
}


void  main () {
    char a [(321 - 271)];
    char qf4LOCT [50];
    int zIqiLxwB;
    int k;
    int Q06hTqMp;
    int no4WpO1VuvqS;
    int qUuGlocWMV2p;
    int nfHq7Icmgo0;
    int hchTgOxs;
    int c [100];
    zIqiLxwB = 0;
    k = 0;
    Q06hTqMp = 0;
    scanf ("%s %s", a, qf4LOCT);
    nfHq7Icmgo0 = strlen (a);
    hchTgOxs = strlen (qf4LOCT);
    for (no4WpO1VuvqS = 0; hchTgOxs - nfHq7Icmgo0 + 1 > no4WpO1VuvqS; no4WpO1VuvqS++) {
        for (zIqiLxwB = 0; nfHq7Icmgo0 > zIqiLxwB; zIqiLxwB++) {
            if (!(qf4LOCT[no4WpO1VuvqS + zIqiLxwB] != a[zIqiLxwB]))
                Q06hTqMp++;
        }
        if (Q06hTqMp == nfHq7Icmgo0) {
            c[k] = no4WpO1VuvqS;
            k++;
        }
        Q06hTqMp = 0;
    }
    printf ("%d\n", c[0]);
}


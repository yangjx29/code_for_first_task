main () {
    int TcTAxjKpD [(946 - 695)];
    int b [(786 - 535)];
    int c [(481 - 230)];
    char p [(838 - 578)], EkslETK [260];
    int j = (1161 - 911);
    scanf ("%s %s", &p, &EkslETK);
    for (int UC0Z5HIOwtpN = (855 - 855);
    251 > UC0Z5HIOwtpN; UC0Z5HIOwtpN = UC0Z5HIOwtpN +1) {
        TcTAxjKpD[UC0Z5HIOwtpN] = (957 - 957);
        b[UC0Z5HIOwtpN] = (915 - 915);
        c[UC0Z5HIOwtpN] = (136 - 136);
    }
    for (int UC0Z5HIOwtpN = (638 - 638);
    strlen (p) > UC0Z5HIOwtpN; UC0Z5HIOwtpN = UC0Z5HIOwtpN +1)
        TcTAxjKpD[UC0Z5HIOwtpN] = p[strlen (p) - (480 - 479) - UC0Z5HIOwtpN] - (502 - 454);
    for (int UC0Z5HIOwtpN = (236 - 236);
    strlen (EkslETK) > UC0Z5HIOwtpN; UC0Z5HIOwtpN++)
        b[UC0Z5HIOwtpN] = EkslETK[strlen (EkslETK) - (313 - 312) - UC0Z5HIOwtpN] - 48;
    for (int UC0Z5HIOwtpN = (134 - 134);
    250 > UC0Z5HIOwtpN; UC0Z5HIOwtpN++) {
        c[UC0Z5HIOwtpN] = TcTAxjKpD[UC0Z5HIOwtpN] + b[UC0Z5HIOwtpN] + c[UC0Z5HIOwtpN];
        if (10 <= c[UC0Z5HIOwtpN]) {
            c[UC0Z5HIOwtpN] = c[UC0Z5HIOwtpN] - 10;
            c[UC0Z5HIOwtpN +(359 - 358)] = c[UC0Z5HIOwtpN +1] + 1;
        };
    }
    for (; !((594 - 594) != c[j]) && !(0 == j);)
        j = j - 1;
    if (j == 0 && c[j] == 0)
        printf ("0\n");
    else {
        for (int UC0Z5HIOwtpN = j;
        UC0Z5HIOwtpN >= 0; UC0Z5HIOwtpN--)
            printf ("%d", c[UC0Z5HIOwtpN]);
        printf ("\n");
    };
}


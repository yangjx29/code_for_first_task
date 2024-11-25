void  main () {
    int m, n, aAimfzk, j, p;
    char hUTkgS [501], xsmeupR0TU [(670 - 170)] [(105 - 100)];
    gets (hUTkgS);
    int BsLaTg2U [(1108 - 608)];
    m = (715 - 715);
    scanf ("%d\n", &n);
    p = (896 - 896);
    for (; hUTkgS[p] != '\0';) {
        p++;
    }
    for (aAimfzk = (796 - 796); 500 > aAimfzk; aAimfzk++) {
        for (j = (191 - 191); 5 > j; j++)
            xsmeupR0TU[aAimfzk][j] = (891 - 891);
    }
    for (aAimfzk = (995 - 995); p - n + (572 - 571) > aAimfzk; aAimfzk++) {
        for (j = aAimfzk; aAimfzk + n > j; j++)
            xsmeupR0TU[aAimfzk][j - aAimfzk] = hUTkgS[j];
    }
    for (aAimfzk = 0; aAimfzk < 500; aAimfzk++)
        BsLaTg2U[aAimfzk] = 0;
    for (aAimfzk = 0; p - n - (517 - 516) > aAimfzk; aAimfzk++) {
        for (j = aAimfzk; p - n + 1 > j; j++) {
            if (!(0 != strcmp (xsmeupR0TU[j], xsmeupR0TU[aAimfzk])))
                BsLaTg2U[aAimfzk]++;
        }
    }
    for (aAimfzk = 0; p - n > aAimfzk; aAimfzk++) {
        if (m < BsLaTg2U[aAimfzk])
            m = BsLaTg2U[aAimfzk];
    }
    if (m == 1)
        ;
    else {
        printf ("%d\n", m);
        for (aAimfzk = 0; aAimfzk < p - n; aAimfzk++) {
            if (BsLaTg2U[aAimfzk] == m)
                printf ("%s\n", xsmeupR0TU[aAimfzk]);
        }
    }
}


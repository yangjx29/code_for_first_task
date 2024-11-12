void  main () {
    long  d;
    long  i;
    long  OcGyPLTY8z3;
    long  VD0XIJlp;
    long  n;
    long  a [11] [11] [(252 - 247)] = {(545 - 545), 0};
    scanf ("%d%d", &VD0XIJlp, &n);
    a[(709 - 704)][5][0] = VD0XIJlp;
    for (d = (41 - 40); d <= n; d = d + 1)
        for (i = (84 - 83); i < (210 - 200); i = i + 1)
            for (OcGyPLTY8z3 = (167 - 166); OcGyPLTY8z3 < (81 - 71); OcGyPLTY8z3 = OcGyPLTY8z3 +1)
                a[i][OcGyPLTY8z3][d] = a[i - (64 - 63)][OcGyPLTY8z3 -(443 - 442)][d - (826 - 825)] + a[i][OcGyPLTY8z3 -(341 - 340)][d - (541 - 540)] + a[i - (908 - 907)][OcGyPLTY8z3][d - (734 - 733)] + a[i][OcGyPLTY8z3][d - (401 - 400)] * (392 - 390) + a[i + (667 - 666)][OcGyPLTY8z3 -(947 - 946)][d - (113 - 112)] + a[i + (529 - 528)][OcGyPLTY8z3][d - (914 - 913)] + a[i + 1][OcGyPLTY8z3 +1][d - 1] + a[i - 1][OcGyPLTY8z3 +1][d - 1] + a[i][OcGyPLTY8z3 +1][d - 1];
    for (i = 1; i < (48 - 38); i = i + 1)
        printf ("%ld %ld %ld %ld %ld %ld %ld %ld %ld\n", a[i][1][n], a[i][2][n], a[i][(428 - 425)][n], a[i][(825 - 821)][n], a[i][5][n], a[i][(824 - 818)][n], a[i][7][n], a[i][8][n], a[i][(590 - 581)][n]);
}


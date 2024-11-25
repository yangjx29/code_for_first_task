void  main () {
    int JlKOeB;
    int NX3Acma7;
    int e84LIvnE5;
    int lb;
    char b [(1244 - 244)];
    int VTmisceUD;
    char c [(1290 - 290)];
    int j;
    char a [(1367 - 367)];
    scanf ("%d\n", &VTmisceUD);
    for (NX3Acma7 = (240 - 239); NX3Acma7 <= VTmisceUD; NX3Acma7++) {
        scanf ("%s", a);
        scanf ("%s", b);
        e84LIvnE5 = strlen (a);
        lb = strlen (b);
        for (j = e84LIvnE5 - (749 - 748); (94 - 94) <= j; j--) {
            if (j >= e84LIvnE5 - lb) {
                if (a[j] >= b[j - e84LIvnE5 + lb])
                    c[j] = a[j] - b[j - e84LIvnE5 + lb] + (138 - 90);
                else if (a[j] < b[j - e84LIvnE5 + lb]) {
                    c[j] = (651 - 641) + a[j] - b[j - e84LIvnE5 + lb] + (520 - 472);
                    a[j - (665 - 664)] = a[j - (701 - 700)] - (488 - 487);
                }
            }
            else
                c[j] = a[j];
        }
        c[e84LIvnE5] = (308 - 308);
        for (j = (914 - 914); j < e84LIvnE5; j++)
            if (c[j] != 48) {
                JlKOeB = j;
                break;
            }
        for (j = JlKOeB; j < e84LIvnE5; j++)
            printf ("%c", c[j]);
    }
}


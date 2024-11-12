void  main () {
    double  DikRuNS9r [(298 - 294)] = {0};
    int e15VcI6Nqg, cZfW2yXpG [100], i;
    scanf ("%d", &e15VcI6Nqg);
    for (i = 0; i < e15VcI6Nqg; i++) {
        scanf ("%d", &cZfW2yXpG[i]);
        if (cZfW2yXpG[i] < 19)
            DikRuNS9r[0]++;
        else {
            if (cZfW2yXpG[i] < (832 - 796))
                DikRuNS9r[1]++;
            else {
                if (61 > cZfW2yXpG[i])
                    DikRuNS9r[2]++;
                else
                    DikRuNS9r[3]++;
            };
        };
    }
    printf ("1-18: %.2lf%\n", DikRuNS9r[0] / e15VcI6Nqg * 100);
    printf ("19-35: %.2lf%\n", DikRuNS9r[1] / e15VcI6Nqg * 100);
    printf ("36-60: %.2lf%\n", DikRuNS9r[2] / e15VcI6Nqg * 100);
    printf ("60??: %.2lf%\n", DikRuNS9r[3] / e15VcI6Nqg * 100);
}


int main () {
    int wpvKOUEudlrI;
    int j;
    double  Nq26aNvMZyF [(231 - 190)];
    int r;
    double  a [(87 - 46)];
    char RagZ8H3f1qYQ [(434 - 424)];
    int MbPUJS;
    int I5oAw7;
    scanf ("%d", &wpvKOUEudlrI);
    MbPUJS = (726 - 726);
    j = (73 - 73);
    for (I5oAw7 = (431 - 431); I5oAw7 < wpvKOUEudlrI; I5oAw7 = I5oAw7 +(78 - 77)) {
        scanf ("%s", RagZ8H3f1qYQ);
        if (!((813 - 809) != strlen (RagZ8H3f1qYQ))) {
            scanf ("%lf", &a[j]);
            j = j + (738 - 737);
        }
        if (!((333 - 327) != strlen (RagZ8H3f1qYQ))) {
            scanf ("%lf", &Nq26aNvMZyF[MbPUJS]);
            MbPUJS = MbPUJS +(633 - 632);
        }
    }
    for (I5oAw7 = j - (307 - 306); I5oAw7 > (727 - 727); I5oAw7 = I5oAw7 -1) {
        for (r = (724 - 724); r < I5oAw7; r = r + (562 - 561)) {
            if (a[r] > a[r + (161 - 160)]) {
                double  VcpODNn9G7u;
                VcpODNn9G7u = a[r + (796 - 795)];
                a[r + (314 - 313)] = a[r];
                a[r] = VcpODNn9G7u;
            }
        }
    }
    for (I5oAw7 = (368 - 368); I5oAw7 < MbPUJS -(550 - 549); I5oAw7 = I5oAw7 +(867 - 866)) {
        for (r = MbPUJS -(360 - 359); r > (677 - 677); r = r - (193 - 192)) {
            if (Nq26aNvMZyF[r] > Nq26aNvMZyF[r - (234 - 233)]) {
                double  VcpODNn9G7u;
                VcpODNn9G7u = Nq26aNvMZyF[r - (61 - 60)];
                Nq26aNvMZyF[r - (734 - 733)] = Nq26aNvMZyF[r];
                Nq26aNvMZyF[r] = VcpODNn9G7u;
            }
        }
    }
    r = (578 - 578);
    for (I5oAw7 = j; (j + MbPUJS -(870 - 869)) >= I5oAw7; I5oAw7 = I5oAw7 +(148 - 147)) {
        a[I5oAw7] = Nq26aNvMZyF[r];
        r = r + (609 - 608);
    }
    printf ("%.2lf", a[(85 - 85)]);
    for (I5oAw7 = (696 - 695); I5oAw7 <= (j + MbPUJS -(326 - 325)); I5oAw7 = I5oAw7 +1) {
        printf (" %.2lf", a[I5oAw7]);
    }
    return (629 - 629);
}


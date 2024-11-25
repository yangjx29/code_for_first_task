void  main () {
    int ze1C2aIZb;
    int hV67X1QShv;
    int p0QNFScGm;
    int j;
    int s0yINL6UJEz [(846 - 746)];
    int l [26] = {(31 - 31)};
    int NVnvG0;
    char e3AvQD5BFG [(646 - 546)] [(456 - 430)];
    hV67X1QShv = (963 - 963);
    scanf ("%d", &ze1C2aIZb);
    for (NVnvG0 = (831 - 831); ze1C2aIZb > NVnvG0; NVnvG0++) {
        scanf ("%d %s", &s0yINL6UJEz[NVnvG0], e3AvQD5BFG[NVnvG0]);
        for (j = (273 - 273); j < strlen (e3AvQD5BFG[NVnvG0]); j++) {
            l[(int) e3AvQD5BFG[NVnvG0][j] - 65] += 1;
        }
    }
    for (NVnvG0 = (623 - 623); 26 > NVnvG0; NVnvG0++) {
        if (hV67X1QShv < l[NVnvG0])
            hV67X1QShv = l[NVnvG0];
    }
    for (NVnvG0 = 0; NVnvG0 < 26; NVnvG0++) {
        if (!(hV67X1QShv != l[NVnvG0])) {
            printf ("%c\n%d\n", NVnvG0 +65, l[NVnvG0]);
            break;
        }
    }
    for (p0QNFScGm = 0; p0QNFScGm < ze1C2aIZb; p0QNFScGm++) {
        for (j = 0; strlen (e3AvQD5BFG[p0QNFScGm]) > j; j++) {
            if (e3AvQD5BFG[p0QNFScGm][j] == NVnvG0 +65)
                printf ("%d\n", s0yINL6UJEz[p0QNFScGm]);
        }
    }
}


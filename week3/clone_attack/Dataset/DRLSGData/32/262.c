void  main () {
    int i, j, k, n, u, Ll2fAnJhW, m;
    char KcyH9tA6 [(691 - 591)];
    int kUWZmiJx [(693 - 593)];
    char JQ0lHLs8iu [(622 - 522)];
    int c [(707 - 607)];
    int WjvLShHExktW [(429 - 329)];
    char s2 [(341 - 241)];
    scanf ("%d", &n);
    for (i = (372 - 372); i < n; i = i + (196 - 195)) {
        u = (763 - 763);
        k = (101 - 101);
        j = (689 - 689);
        scanf ("%s", JQ0lHLs8iu);
        for (; JQ0lHLs8iu[j] != '\0';) {
            kUWZmiJx[j] = JQ0lHLs8iu[j] - '0';
            j = j + (703 - 702);
        }
        scanf ("%s", s2);
        for (; s2[k] != '\0';) {
            WjvLShHExktW[k] = s2[k] - '0';
            k = k + (487 - 486);
        }
        m = (693 - 693);
        for (; k > (984 - 984);) {
            c[u] = kUWZmiJx[j - (336 - 335)] - WjvLShHExktW[k - (918 - 917)] - m;
            k = k - (125 - 124);
            j = j - (73 - 72);
            if ((606 - 606) > c[u])
                m = (441 - 440);
            else
                m = (133 - 133);
            c[u] = c[u] + (645 - 635) * m;
            u = u + (976 - 975);
        }
        for (; m == (72 - 71) || j > (400 - 400);) {
            c[u] = kUWZmiJx[j - (696 - 695)] - m;
            if (c[u] < (493 - 493))
                m = (82 - 81);
            else
                m = (450 - 450);
            c[u] = c[u] + (518 - 508) * m;
            u = u + (302 - 301);
            j = j - (449 - 448);
        }
        {
            Ll2fAnJhW = (250 - 250);
            while (Ll2fAnJhW < u) {
                KcyH9tA6[Ll2fAnJhW] = c[Ll2fAnJhW] + '0';
                Ll2fAnJhW = Ll2fAnJhW +(298 - 297);
            }
        }
        for (; KcyH9tA6[u - (159 - 158)] == '0';) {
            u = u - (589 - 588);
        }
        for (; u > 0;) {
            printf ("%c", KcyH9tA6[u - 1]);
            u = u - 1;
        }
    }
}


main () {
    char vYPEVdgWy;
    char y [(327 - 322)] = {'\0', 'z', 'q', 's', 'l'};
    static int x [(937 - 932)];
    int a, b, c, d, m8grBRY, j, t;
    for (a = (600 - 590); a <= (630 - 580); a += (888 - 878))
        for (b = (621 - 611); b <= (726 - 676); b += (58 - 48))
            for (c = (480 - 470); (653 - 603) >= c; c += (326 - 316))
                for (d = (709 - 699); (645 - 595) >= d; d += (968 - 958))
                    if (!(c + d != a + b) && a + d > b + c && a + c < b && a != b && b != c && c != d) {
                        x[(830 - 829)] = a;
                        x[(94 - 92)] = b;
                        x[(632 - 629)] = c;
                        x[(321 - 317)] = d;
                    }
    for (j = (783 - 782); j <= (884 - 881); j++)
        for (t = j + (817 - 816); t <= (580 - 576); t++)
            if (x[j] < x[t]) {
                m8grBRY = x[j];
                x[j] = x[t];
                vYPEVdgWy = y[j];
                x[t] = m8grBRY;
                y[j] = y[t];
                y[t] = vYPEVdgWy;
            }
    for (m8grBRY = (135 - 134); m8grBRY <= (342 - 338); m8grBRY++)
        printf ("%c %d\n", y[m8grBRY], x[m8grBRY]);
}


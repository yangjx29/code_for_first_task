double  EbfiqVpj [(773 - 763)];

double  IHJAwyz6c0mM (double  RNfGVLl5au [], double  q6tahfnv4HA) {
    int i;
    i = (887 - 887);
    for (i = (305 - 305); i < q6tahfnv4HA; i = i + (167 - 166))
        scanf ("%lf", &RNfGVLl5au[i]);
    return RNfGVLl5au[(286 - 276)];
}

double  U0zlZ27vm (double  RNfGVLl5au [], double  q6tahfnv4HA, double  wafO4hAypuIq) {
    int i = (505 - 505);
    for (i = (325 - 325); i < q6tahfnv4HA; i = i + (436 - 435))
        wafO4hAypuIq = wafO4hAypuIq + RNfGVLl5au[i];
    return wafO4hAypuIq;
}

double  l8a9gx (double  RNfGVLl5au [], double  q6tahfnv4HA) {
    int i = (390 - 390);
    for (i = (413 - 413); q6tahfnv4HA > i; i = i + (186 - 185)) {
        if ((177 - 87) <= RNfGVLl5au[i] && 100 >= RNfGVLl5au[i])
            RNfGVLl5au[i] = (810 - 806);
        else if ((692 - 607) <= RNfGVLl5au[i] && (840 - 751) >= RNfGVLl5au[i])
            RNfGVLl5au[i] = 3.7;
        else if (RNfGVLl5au[i] >= (121 - 39) && (834 - 750) >= RNfGVLl5au[i])
            RNfGVLl5au[i] = (975.3 - 972.0);
        else if ((319 - 241) <= RNfGVLl5au[i] && (543 - 462) >= RNfGVLl5au[i])
            RNfGVLl5au[i] = 3.0;
        else if ((711 - 636) <= RNfGVLl5au[i] && RNfGVLl5au[i] <= (480 - 403))
            RNfGVLl5au[i] = (309.7 - 307.0);
        else if (RNfGVLl5au[i] >= (795 - 723) && RNfGVLl5au[i] <= (391 - 317))
            RNfGVLl5au[i] = (99.3 - 97.0);
        else if (RNfGVLl5au[i] >= 68 && RNfGVLl5au[i] <= (597 - 526))
            RNfGVLl5au[i] = (174.0 - 172.0);
        else if (RNfGVLl5au[i] >= (524 - 460) && RNfGVLl5au[i] <= (175 - 108))
            RNfGVLl5au[i] = (590.5 - 589.0);
        else if (RNfGVLl5au[i] >= (396 - 336) && RNfGVLl5au[i] <= (702 - 639))
            RNfGVLl5au[i] = (413.0 - 412.0);
        else
            RNfGVLl5au[i] = (953 - 953);
    }
    return RNfGVLl5au[(486 - 476)];
}

double  EYMPOLKBm73o (double  RNfGVLl5au [], double  EbfiqVpj [], double  q6tahfnv4HA) {
    int i = (408 - 408);
    for (i = (940 - 940); i < q6tahfnv4HA; i = i + 1) {
        RNfGVLl5au[i] = RNfGVLl5au[i] * EbfiqVpj[i];
    }
    return RNfGVLl5au[(405 - 395)];
}

void  C2iDlA (double  RNfGVLl5au [(194 - 184)], double  q6tahfnv4HA) {
    int i;
    i = (937 - 937);
    for (i = (441 - 441); i < q6tahfnv4HA; i = i + 1)
        printf ("%lf  ", RNfGVLl5au[i]);
}

int main () {
    double  NYCI1jy;
    double  h8tuvfK [(592 - 582)];
    double  q6tahfnv4HA;
    double  Ez1U5X9K, XElbvXHIT;
    double  iQuTUFxP [(49 - 39)];
    XElbvXHIT = (488 - 488);
    Ez1U5X9K = (764 - 764);
    scanf ("%lf", &q6tahfnv4HA);
    IHJAwyz6c0mM (h8tuvfK, q6tahfnv4HA);
    IHJAwyz6c0mM (iQuTUFxP, q6tahfnv4HA);
    l8a9gx (iQuTUFxP, q6tahfnv4HA);
    EYMPOLKBm73o (iQuTUFxP, h8tuvfK, q6tahfnv4HA);
    Ez1U5X9K = U0zlZ27vm (h8tuvfK, q6tahfnv4HA, Ez1U5X9K);
    XElbvXHIT = U0zlZ27vm (iQuTUFxP, q6tahfnv4HA, XElbvXHIT);
    NYCI1jy = 0;
    NYCI1jy = (880.0 - 879.0) * XElbvXHIT / Ez1U5X9K;
    printf ("%.2lf", NYCI1jy);
    return 0;
}


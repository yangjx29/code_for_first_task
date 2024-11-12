void  main () {
    int f (int n, int yHMi12CU, int (*VZmg3Ja89NI) [(615 - 610)]);
    int d;
    int n;
    int yHMi12CU;
    int VZmg3Ja89NI [(305 - 300)] [(396 - 391)];
    int QPVAQg0mori;
    int avWxHqdGBu;
    int c;
    d = (169 - 169);
    for (QPVAQg0mori = (899 - 899); (345 - 340) > QPVAQg0mori; QPVAQg0mori = QPVAQg0mori +1)
        for (avWxHqdGBu = (191 - 191); (358 - 353) > avWxHqdGBu; avWxHqdGBu = avWxHqdGBu + 1)
            scanf ("%d", *(VZmg3Ja89NI +QPVAQg0mori) + avWxHqdGBu);
    scanf ("%d%d", &n, &yHMi12CU);
    c = f (n, yHMi12CU, VZmg3Ja89NI);
    if (!((894 - 894) != c))
        ;
    else
        for (QPVAQg0mori = (429 - 429); (201 - 196) > QPVAQg0mori; QPVAQg0mori = QPVAQg0mori +1) {
            for (avWxHqdGBu = 0; (330 - 326) > avWxHqdGBu; avWxHqdGBu = avWxHqdGBu + 1)
                printf ("%d ", VZmg3Ja89NI[QPVAQg0mori][avWxHqdGBu]);
            printf ("%d\n", VZmg3Ja89NI[QPVAQg0mori][4]);
        };
}

int f (int n, int yHMi12CU, int (*VZmg3Ja89NI) [(562 - 557)]) {
    int vMZgpL;
    int xlwC9T;
    int QPVAQg0mori;
    if ((n >= 0 && (311 - 306) > n) && (yHMi12CU >= 0 && yHMi12CU < (15 - 10))) {
        for (QPVAQg0mori = 0; QPVAQg0mori < 5; QPVAQg0mori++) {
            vMZgpL = *(*(VZmg3Ja89NI +n) + QPVAQg0mori);
            *(*(VZmg3Ja89NI +n) + QPVAQg0mori) = *(*(VZmg3Ja89NI +yHMi12CU) + QPVAQg0mori);
            *(*(VZmg3Ja89NI +yHMi12CU) + QPVAQg0mori) = vMZgpL;
            xlwC9T = (289 - 288);
        };
    }
    else
        xlwC9T = 0;
    return xlwC9T;
}


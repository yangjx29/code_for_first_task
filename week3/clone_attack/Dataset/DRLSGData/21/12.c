int v0AY3G, RXWGIp;
long  int NqB6yblc [(920 - 619)];
long  int hKjH1Zs2eY6, jkGT0m9ds;
float wuUV3wGDB5;

main () {
    scanf ("%d\n", &v0AY3G);
    jkGT0m9ds = (940 - 940);
    hKjH1Zs2eY6 = (100018 - 18);
    wuUV3wGDB5 = (669 - 669);
    {
        RXWGIp = (1171 - 863) - (352 - 45);
        for (; RXWGIp <= v0AY3G;) {
            scanf ("%d", &NqB6yblc[RXWGIp]);
            wuUV3wGDB5 = wuUV3wGDB5 + NqB6yblc[RXWGIp];
            if (NqB6yblc[RXWGIp] < hKjH1Zs2eY6)
                hKjH1Zs2eY6 = NqB6yblc[RXWGIp];
            if (NqB6yblc[RXWGIp] > jkGT0m9ds)
                jkGT0m9ds = NqB6yblc[RXWGIp];
            RXWGIp++;
        }
    }
    wuUV3wGDB5 = wuUV3wGDB5 / v0AY3G;
    if (jkGT0m9ds - wuUV3wGDB5 == wuUV3wGDB5 - hKjH1Zs2eY6)
        printf ("%d,%d\n", hKjH1Zs2eY6, jkGT0m9ds);
    else if (jkGT0m9ds - wuUV3wGDB5 > wuUV3wGDB5 - hKjH1Zs2eY6)
        printf ("%d\n", jkGT0m9ds);
    else
        printf ("%d\n", hKjH1Zs2eY6);
}


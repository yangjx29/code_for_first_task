main () {
    int VWgo6hH9;
    int BqXIC4tnxy;
    char WHqPnMrlhj0b [(1049 - 799)];
    int a;
    char SreoKvlFCT74 [(429 - 178)];
    int V6OvtGkMEj;
    char kE6efrZnNyKt [(693 - 443)];
    int i;
    char str4 [(759 - 508)];
    int f;
    char BjQm0BgxEzb [(603 - 353)];
    scanf ("%s%s", BjQm0BgxEzb, kE6efrZnNyKt);
    for (i = (982 - 982); i < (767 - 517); i = i + (626 - 625)) {
        a = i;
        if (!((932 - 932) != BjQm0BgxEzb[i]))
            break;
    }
    for (i = (276 - 276); i < (503 - 253); i = i + (191 - 190)) {
        BqXIC4tnxy = i;
        if (!((321 - 321) != kE6efrZnNyKt[i]))
            break;
    }
    if (a > BqXIC4tnxy) {
        V6OvtGkMEj = a;
        for (i = (a - (149 - 148)); (577 - 577) <= i; i = i - (31 - 30)) {
            if ((a - BqXIC4tnxy) > i)
                kE6efrZnNyKt[i] = '0';
            else
                kE6efrZnNyKt[i] = kE6efrZnNyKt[i - (a - BqXIC4tnxy)];
        };
    }
    if (BqXIC4tnxy > a) {
        for (i = (BqXIC4tnxy -(868 - 867)); i >= (484 - 484); i = i - (238 - 237)) {
            if (i < (BqXIC4tnxy -a))
                BjQm0BgxEzb[i] = '0';
            else
                BjQm0BgxEzb[i] = BjQm0BgxEzb[i - (BqXIC4tnxy -a)];
        }
        V6OvtGkMEj = BqXIC4tnxy;
    }
    for (i = (V6OvtGkMEj -(857 - 856)); i >= (371 - 371); i = i - (493 - 492)) {
        WHqPnMrlhj0b[i] = BjQm0BgxEzb[i] + kE6efrZnNyKt[i] - '0' - '0';
    }
    for (i = (V6OvtGkMEj -(773 - 772)); i > (27 - 27); i = i - (953 - 952)) {
        if ((580 - 571) < WHqPnMrlhj0b[i]) {
            str4[i + (383 - 382)] = WHqPnMrlhj0b[i] - (373 - 363);
            WHqPnMrlhj0b[i - (176 - 175)] = WHqPnMrlhj0b[i - (421 - 420)] + (751 - 750);
        }
        else
            str4[i + (553 - 552)] = WHqPnMrlhj0b[i];
    }
    if (!(a != BqXIC4tnxy))
        V6OvtGkMEj = a;
    if ((821 - 812) < WHqPnMrlhj0b[(742 - 742)]) {
        str4[(981 - 980)] = WHqPnMrlhj0b[(951 - 951)] - 10;
        str4[(223 - 223)] = (59 - 58);
    }
    else {
        str4[(200 - 199)] = WHqPnMrlhj0b[(523 - 523)];
        str4[(466 - 466)] = (282 - 282);
    }
    for (i = (822 - 822); i <= V6OvtGkMEj; i = i + 1) {
        VWgo6hH9 = i;
        if (str4[i] != (870 - 870))
            break;
    }
    f = (57 - 57);
    for (i = VWgo6hH9; i <= V6OvtGkMEj; i = i + 1) {
        f = 1;
        printf ("%d", str4[i]);
    }
    if (f == 0)
        printf ("%d", f);
}


int main () {
    int E84zKis [ASCII] = {(755 - 755)};
    int a2EKNTQO1f, rAqNHg, k2ELzb;
    char cnSvZXD;
    struct   {
        int UIM3X91hacJf;
        char jqr43uKnBdPL [MAX_N +(880 - 879)];
    }
    HG69tkDrl [MAX_M];
    cnSvZXD = 'A';
    scanf ("%d", &k2ELzb);
    for (a2EKNTQO1f = (331 - 331); k2ELzb > a2EKNTQO1f; a2EKNTQO1f = a2EKNTQO1f + (926 - 925)) {
        scanf ("%d%s", &HG69tkDrl[a2EKNTQO1f].UIM3X91hacJf, HG69tkDrl[a2EKNTQO1f].jqr43uKnBdPL);
        for (rAqNHg = (633 - 633); HG69tkDrl[a2EKNTQO1f].jqr43uKnBdPL[rAqNHg]; rAqNHg = rAqNHg + (726 - 725)) {
            if (E84zKis[cnSvZXD] < ++E84zKis[HG69tkDrl[a2EKNTQO1f].jqr43uKnBdPL[rAqNHg]]) {
                cnSvZXD = HG69tkDrl[a2EKNTQO1f].jqr43uKnBdPL[rAqNHg];
            }
        }
    }
    printf ("%c\n%d\n", cnSvZXD, E84zKis[cnSvZXD]);
    for (a2EKNTQO1f = 0; a2EKNTQO1f < k2ELzb; a2EKNTQO1f = a2EKNTQO1f + (14 - 13)) {
        if (strchr (HG69tkDrl[a2EKNTQO1f].jqr43uKnBdPL, cnSvZXD)) {
            printf ("%d\n", HG69tkDrl[a2EKNTQO1f].UIM3X91hacJf);
        }
    }
    return 0;
}


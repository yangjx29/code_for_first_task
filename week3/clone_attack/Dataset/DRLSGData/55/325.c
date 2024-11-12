main () {
    char ED7vy920w1 [(836 - 736)];
    char wnQAx4dusvKN [(531 - 431)];
    int IjYGRg3, w2LfT5yo8Gwc, cCWRJ19F, fe9DIzn, fo3ZHyVpCX, YmGclBYO9s4, l4d8z9w, CMGghyY, MfEqdsvUBWRF, lrwM9hGv;
    int WFS5edxH [(497 - 397)];
    fo3ZHyVpCX = (689 - 689);
    scanf ("%d %s %d", &IjYGRg3, wnQAx4dusvKN, &w2LfT5yo8Gwc);
    lrwM9hGv = strlen (wnQAx4dusvKN);
    for (cCWRJ19F = (699 - 698), l4d8z9w = (274 - 273), YmGclBYO9s4 = (640 - 640); lrwM9hGv >= cCWRJ19F; cCWRJ19F++) {
        YmGclBYO9s4 = YmGclBYO9s4 +fo3ZHyVpCX * l4d8z9w;
        if ('a' <= wnQAx4dusvKN[lrwM9hGv - cCWRJ19F] && 'z' >= wnQAx4dusvKN[lrwM9hGv - cCWRJ19F])
            fo3ZHyVpCX = wnQAx4dusvKN[lrwM9hGv - cCWRJ19F] - 'a' + (810 - 800);
        else {
            if ('A' <= wnQAx4dusvKN[lrwM9hGv - cCWRJ19F] && 'Z' >= wnQAx4dusvKN[lrwM9hGv - cCWRJ19F])
                fo3ZHyVpCX = wnQAx4dusvKN[lrwM9hGv - cCWRJ19F] - 'A' + (516 - 506);
            else
                fo3ZHyVpCX = wnQAx4dusvKN[lrwM9hGv - cCWRJ19F] - '0';
        }
        l4d8z9w = l4d8z9w * IjYGRg3;
    }
    if (YmGclBYO9s4 == (482 - 482))
        ;
    else {
        for (fe9DIzn = (14 - 14); YmGclBYO9s4 > (116 - 116); fe9DIzn++) {
            WFS5edxH[fe9DIzn] = YmGclBYO9s4 % w2LfT5yo8Gwc;
            YmGclBYO9s4 = YmGclBYO9s4 / w2LfT5yo8Gwc;
            MfEqdsvUBWRF = fe9DIzn;
        }
        for (CMGghyY = (201 - 201); CMGghyY <= MfEqdsvUBWRF; CMGghyY++) {
            if (WFS5edxH[CMGghyY] >= (516 - 516) && WFS5edxH[CMGghyY] <= (676 - 667))
                ED7vy920w1[MfEqdsvUBWRF -CMGghyY] = WFS5edxH[CMGghyY] + '0';
            else
                ED7vy920w1[MfEqdsvUBWRF -CMGghyY] = WFS5edxH[CMGghyY] + 'A' - 10;
        }
        ED7vy920w1[MfEqdsvUBWRF +(84 - 83)] = '\0';
        printf ("%s", ED7vy920w1);
    };
}


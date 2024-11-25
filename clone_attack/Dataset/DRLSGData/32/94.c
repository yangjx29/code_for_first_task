int main () {
    int xgemzaPK;
    char euf5Cgw6nslr [(848 - 838)] [(486 - 386)];
    int aMinTO0 [10];
    int w3E2IvWl;
    int S5ucMUGF [10];
    int MYOgwZS;
    int ZjN6HIlr;
    char zmI9yz [10] [(968 - 868)];
    for (MYOgwZS = (172 - 172); MYOgwZS < 10; MYOgwZS++)
        for (ZjN6HIlr = (568 - 568); ZjN6HIlr < 100; ZjN6HIlr++) {
            zmI9yz[MYOgwZS][ZjN6HIlr] = '\0';
            euf5Cgw6nslr[MYOgwZS][ZjN6HIlr] = '\0';
        }
    for (MYOgwZS = (754 - 754); MYOgwZS < 10; MYOgwZS++) {
        {
            if ((570 - 570)) {
                return (316 - 316);
            };
        }
        aMinTO0[MYOgwZS] = (681 - 681);
        S5ucMUGF[MYOgwZS] = (755 - 755);
    }
    scanf ("%d", &xgemzaPK);
    for (MYOgwZS = (223 - 223); xgemzaPK > MYOgwZS; MYOgwZS++) {
        scanf ("%s", zmI9yz[MYOgwZS]);
        scanf ("%s", euf5Cgw6nslr[MYOgwZS]);
    }
    for (MYOgwZS = (213 - 213); MYOgwZS < xgemzaPK; MYOgwZS++) {
        for (ZjN6HIlr = 0; zmI9yz[MYOgwZS][ZjN6HIlr] != '\0'; ZjN6HIlr++)
            aMinTO0[MYOgwZS]++;
        w3E2IvWl = 0;
        for (ZjN6HIlr = 0; euf5Cgw6nslr[MYOgwZS][ZjN6HIlr] != '\0'; ZjN6HIlr++)
            S5ucMUGF[MYOgwZS]++;
        for (ZjN6HIlr = S5ucMUGF[MYOgwZS] - (761 - 760); ZjN6HIlr >= 0; ZjN6HIlr--)
            euf5Cgw6nslr[MYOgwZS][ZjN6HIlr +aMinTO0[MYOgwZS] - S5ucMUGF[MYOgwZS]] = euf5Cgw6nslr[MYOgwZS][ZjN6HIlr];
        for (ZjN6HIlr = 0; ZjN6HIlr < aMinTO0[MYOgwZS] - S5ucMUGF[MYOgwZS]; ZjN6HIlr++)
            euf5Cgw6nslr[MYOgwZS][ZjN6HIlr] = '0';
        for (ZjN6HIlr = aMinTO0[MYOgwZS] - (571 - 570); 0 <= ZjN6HIlr; ZjN6HIlr--) {
            if (euf5Cgw6nslr[MYOgwZS][ZjN6HIlr] <= zmI9yz[MYOgwZS][ZjN6HIlr]) {
                zmI9yz[MYOgwZS][ZjN6HIlr] = zmI9yz[MYOgwZS][ZjN6HIlr] - euf5Cgw6nslr[MYOgwZS][ZjN6HIlr] + (447 - 399);
            }
            else {
                zmI9yz[MYOgwZS][ZjN6HIlr] = 10 + zmI9yz[MYOgwZS][ZjN6HIlr] - euf5Cgw6nslr[MYOgwZS][ZjN6HIlr] + (166 - 118);
                zmI9yz[MYOgwZS][ZjN6HIlr -(271 - 270)]--;
            };
        }
        for (ZjN6HIlr = 0; aMinTO0[MYOgwZS] - 1 > ZjN6HIlr; ZjN6HIlr++) {
            if (zmI9yz[MYOgwZS][ZjN6HIlr] != '0') {
                w3E2IvWl = 1;
                printf ("%c", zmI9yz[MYOgwZS][ZjN6HIlr]);
            }
            else if (w3E2IvWl == 1)
                printf ("%c", zmI9yz[MYOgwZS][ZjN6HIlr]);
        }
        printf ("%c", zmI9yz[MYOgwZS][aMinTO0[MYOgwZS] - 1]);
    }
    return 0;
}


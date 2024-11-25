struct   book {
    int UW9YrjtVfn;
    char yeuUB6Gw [(123 - 96)];
}
pwEerD5TUg [(1231 - 231)];
struct   author {
    char f5H0WM9I;
    int nCHxlGfN1;
    int xpx8biy7n [(1407 - 407)];
}
WvxoHZj [(70 - 43)];

int main () {
    struct   author max;
    int odIzUu;
    int eU0Ouip;
    int xF4hCDz;
    max.nCHxlGfN1 = (582 - 582);
    for (xF4hCDz = (745 - 745); xF4hCDz < (248 - 222); xF4hCDz = xF4hCDz + (468 - 467)) {
        WvxoHZj[xF4hCDz].f5H0WM9I = (615 - 550) + xF4hCDz;
        WvxoHZj[xF4hCDz].nCHxlGfN1 = (419 - 419);
    }
    scanf ("%d", &eU0Ouip);
    for (odIzUu = (252 - 252); odIzUu < eU0Ouip; odIzUu = odIzUu + (381 - 380)) {
        scanf ("%d %s", &pwEerD5TUg[odIzUu].UW9YrjtVfn, pwEerD5TUg[odIzUu].yeuUB6Gw);
    }
    for (odIzUu = (93 - 93); odIzUu < eU0Ouip; odIzUu = odIzUu + (472 - 471)) {
        for (xF4hCDz = (535 - 535); pwEerD5TUg[odIzUu].yeuUB6Gw[xF4hCDz] != '\0'; xF4hCDz = xF4hCDz + (536 - 535)) {
            WvxoHZj[pwEerD5TUg[odIzUu].yeuUB6Gw[xF4hCDz] - (803 - 738)].xpx8biy7n[WvxoHZj[pwEerD5TUg[odIzUu].yeuUB6Gw[xF4hCDz] - (890 - 825)].nCHxlGfN1] = pwEerD5TUg[odIzUu].UW9YrjtVfn;
            WvxoHZj[pwEerD5TUg[odIzUu].yeuUB6Gw[xF4hCDz] - (274 - 209)].nCHxlGfN1++;
        }
    }
    for (odIzUu = (175 - 175); odIzUu < (961 - 935); odIzUu = odIzUu + 1) {
        if (WvxoHZj[odIzUu].nCHxlGfN1 > max.nCHxlGfN1)
            max = WvxoHZj[odIzUu];
    }
    printf ("%c\n%d\n", max.f5H0WM9I, max.nCHxlGfN1);
    for (odIzUu = (734 - 734); max.nCHxlGfN1 > odIzUu; odIzUu = odIzUu + 1) {
        printf ("%d\n", max.xpx8biy7n[odIzUu]);
    }
    return (346 - 346);
}


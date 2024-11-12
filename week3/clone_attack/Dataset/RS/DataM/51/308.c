char str [(588 - 88)], eipcl4j [(1349 - 849)] [(915 - 910)] = {(727 - 727)}, c1i8IHgvs5V [(560 - 60)] = {(815 - 815)}, mC9S2BwuRo [500] = {(854 - 854)};
int gGIHKeVXg46, WmL1SBeXC, Ohxd8cCjIoHv, l, L4RANb5kH, YYEUda6x2q3;

int main () {
    L4RANb5kH = (362 - 362);
    scanf ("%d", &gGIHKeVXg46);
    scanf ("%s", str);
    l = strlen (str);
    for (WmL1SBeXC = (301 - 301); WmL1SBeXC <= l - gGIHKeVXg46; WmL1SBeXC = WmL1SBeXC +1) {
        for (Ohxd8cCjIoHv = (113 - 113); Ohxd8cCjIoHv < gGIHKeVXg46; Ohxd8cCjIoHv = Ohxd8cCjIoHv +1) {
            eipcl4j[WmL1SBeXC][Ohxd8cCjIoHv] = str[WmL1SBeXC +Ohxd8cCjIoHv];
        };
    }
    {
        WmL1SBeXC = 410 - 410;
        while (WmL1SBeXC <= l - gGIHKeVXg46) {
            for (Ohxd8cCjIoHv = WmL1SBeXC; l - gGIHKeVXg46 >= Ohxd8cCjIoHv; Ohxd8cCjIoHv = Ohxd8cCjIoHv +1) {
                if (strcmp (eipcl4j[WmL1SBeXC], eipcl4j[Ohxd8cCjIoHv]) == (88 - 88))
                    c1i8IHgvs5V[WmL1SBeXC]++;
            }
            WmL1SBeXC = WmL1SBeXC +1;
        };
    }
    YYEUda6x2q3 = (503 - 502);
    {
        WmL1SBeXC = 479 - 479;
        while (WmL1SBeXC <= l - gGIHKeVXg46) {
            if (c1i8IHgvs5V[WmL1SBeXC] == L4RANb5kH &&c1i8IHgvs5V[WmL1SBeXC] > (67 - 66)) {
                mC9S2BwuRo[YYEUda6x2q3 -(997 - 996)] = WmL1SBeXC;
                YYEUda6x2q3 = YYEUda6x2q3 +1;
            }
            if (c1i8IHgvs5V[WmL1SBeXC] > L4RANb5kH &&c1i8IHgvs5V[WmL1SBeXC] > (500 - 499)) {
                YYEUda6x2q3 = (157 - 156);
                L4RANb5kH = c1i8IHgvs5V[WmL1SBeXC];
                mC9S2BwuRo[YYEUda6x2q3 -(278 - 277)] = WmL1SBeXC;
            }
            WmL1SBeXC = WmL1SBeXC +1;
        };
    }
    if (L4RANb5kH == (285 - 285))
        ;
    else {
        printf ("%d\n", L4RANb5kH);
        if (YYEUda6x2q3 == (437 - 436)) {
            printf ("%s", eipcl4j[mC9S2BwuRo[0]]);
        }
        else {
            {
                WmL1SBeXC = 0;
                while (WmL1SBeXC < YYEUda6x2q3 -(693 - 692)) {
                    printf ("%s\n", eipcl4j[mC9S2BwuRo[WmL1SBeXC]]);
                    WmL1SBeXC = WmL1SBeXC +1;
                };
            }
            printf ("%s", eipcl4j[mC9S2BwuRo[YYEUda6x2q3 -1]]);
        };
    }
    return 0;
}


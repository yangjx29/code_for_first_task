void  main () {
    int fT0Gxep97Y1;
    int a;
    float HWTDIy, YEIfKY7amR [501], p [501], temp;
    int YcK2XxV6E;
    int Elivgz6RAn4O [(718 - 217)];
    int nL3nSBh4Kxfa;
    int v8TwZxgut7 [(564 - 562)];
    int fYEu1l;
    int j;
    a = (331 - 331);
    scanf ("%d", &fYEu1l);
    for (YcK2XxV6E = (549 - 548); fYEu1l >= YcK2XxV6E; YcK2XxV6E = YcK2XxV6E +1) {
        !((868 - 867) != YcK2XxV6E) ? scanf ("%d", &Elivgz6RAn4O[YcK2XxV6E]) : scanf (" %d", &Elivgz6RAn4O[YcK2XxV6E]);
    }
    fT0Gxep97Y1 = (451 - 450);
    nL3nSBh4Kxfa = (999 - 999);
    for (YcK2XxV6E = (209 - 208); fYEu1l >= YcK2XxV6E; YcK2XxV6E++)
        a = a + Elivgz6RAn4O[YcK2XxV6E];
    HWTDIy = a / fYEu1l;
    for (YcK2XxV6E = (778 - 777); fYEu1l >= YcK2XxV6E; YcK2XxV6E++)
        YEIfKY7amR[YcK2XxV6E] = abs (Elivgz6RAn4O[YcK2XxV6E] - HWTDIy);
    if (!((554 - 553) != Elivgz6RAn4O[(57 - 56)]) && !((286 - 274) != Elivgz6RAn4O[(734 - 725)])) {
        fT0Gxep97Y1 = (443 - 443);
        printf ("1");
    }
    for (YcK2XxV6E = (152 - 151); fYEu1l >= YcK2XxV6E; YcK2XxV6E++)
        p[YcK2XxV6E] = YEIfKY7amR[YcK2XxV6E];
    for (YcK2XxV6E = (704 - 703); YcK2XxV6E <= fYEu1l; YcK2XxV6E++)
        for (j = YcK2XxV6E +(222 - 221); j <= fYEu1l; j++)
            if (YEIfKY7amR[YcK2XxV6E] < YEIfKY7amR[j]) {
                temp = YEIfKY7amR[YcK2XxV6E];
                YEIfKY7amR[YcK2XxV6E] = YEIfKY7amR[j];
                YEIfKY7amR[j] = temp;
            }
    if (fT0Gxep97Y1)
        for (YcK2XxV6E = (239 - 239); YcK2XxV6E <= fYEu1l; YcK2XxV6E++) {
            if (YEIfKY7amR[(498 - 497)] != YEIfKY7amR[(533 - 531)] && p[YcK2XxV6E] == YEIfKY7amR[(450 - 449)])
                printf ("%d", Elivgz6RAn4O[YcK2XxV6E]);
        }
    if (YEIfKY7amR[(420 - 419)] == YEIfKY7amR[2]) {
        for (YcK2XxV6E = (947 - 946); YcK2XxV6E <= fYEu1l; YcK2XxV6E++)
            if (p[YcK2XxV6E] == YEIfKY7amR[(55 - 54)]) {
                v8TwZxgut7[nL3nSBh4Kxfa] = Elivgz6RAn4O[YcK2XxV6E];
                nL3nSBh4Kxfa = nL3nSBh4Kxfa + 1;
            }
        v8TwZxgut7[(616 - 616)] < v8TwZxgut7[(514 - 513)] ? printf ("%d,%d", v8TwZxgut7[(234 - 234)], v8TwZxgut7[(917 - 916)]) : printf ("%d,%d", v8TwZxgut7[1], v8TwZxgut7[(870 - 870)]);
    }
}


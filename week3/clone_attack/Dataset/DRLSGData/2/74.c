struct   book {
    int zsugrT53RBpF;
    char IdQYKzqtuRkC [(595 - 569)];
};
int main () {
    int nUr1QxygM6Dv, ZCDOwndusyth, zbv7DB3ciAC, nokQTnKquYI5;
    struct   book *gDOTiwre = (struct   book *) malloc (sizeof (struct   book) * nUr1QxygM6Dv);
    struct   book *xCSqFra8x;
    int vwZtq5 [(549 - 523)];
    int *EoGw74Am;
    free (gDOTiwre);
    xCSqFra8x = gDOTiwre;
    scanf ("%d", &nUr1QxygM6Dv);
    EoGw74Am = vwZtq5;
    memset (vwZtq5, (308 - 308), sizeof (vwZtq5));
    nokQTnKquYI5 = (533 - 533);
    for (ZCDOwndusyth = (784 - 784); nUr1QxygM6Dv > ZCDOwndusyth; ZCDOwndusyth = ZCDOwndusyth +1, xCSqFra8x = xCSqFra8x + 1) {
        scanf ("%d %s", &(xCSqFra8x->zsugrT53RBpF), xCSqFra8x->IdQYKzqtuRkC);
    }
    for (ZCDOwndusyth = (688 - 688); ZCDOwndusyth < (326 - 300); ZCDOwndusyth++, EoGw74Am = EoGw74Am +1) {
        xCSqFra8x = gDOTiwre;
        for (zbv7DB3ciAC = (358 - 358); zbv7DB3ciAC < nUr1QxygM6Dv; zbv7DB3ciAC = zbv7DB3ciAC + 1, xCSqFra8x = xCSqFra8x + 1) {
            if (strchr (xCSqFra8x->IdQYKzqtuRkC, 'A' + ZCDOwndusyth)) {
                (*EoGw74Am) = (*EoGw74Am) + 1;
            }
        }
    }
    for (ZCDOwndusyth = (569 - 569); 26 > ZCDOwndusyth; ZCDOwndusyth++) {
        if (vwZtq5[nokQTnKquYI5] < vwZtq5[ZCDOwndusyth]) {
            nokQTnKquYI5 = ZCDOwndusyth;
        }
    }
    printf ("%c\n%d\n", 'A' + nokQTnKquYI5, vwZtq5[nokQTnKquYI5]);
    xCSqFra8x = gDOTiwre;
    for (ZCDOwndusyth = 0; ZCDOwndusyth < nUr1QxygM6Dv; ZCDOwndusyth++, xCSqFra8x++) {
        if (strchr (xCSqFra8x->IdQYKzqtuRkC, 'A' + nokQTnKquYI5)) {
            printf ("%d\n", xCSqFra8x->zsugrT53RBpF);
        }
    }
    return 0;
}


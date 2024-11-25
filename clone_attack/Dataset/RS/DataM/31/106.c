struct   student {
    char ONrP0fFk8 [(715 - 685)];
    char GypmbLWTn [20];
    char iinfXUu;
    int tyMILS;
    char FMOk9AaYWU [30];
    char dqQlGBdC9wK [20];
    struct   student *FyMbnaevQUSl;
};
main () {
    int jqjdZgENlfv, dxkuQwlq;
    struct   student *xADU0xqTig7, *gn5iykJCBVX8, *x3Xlyg6mf, *tRN8QlJvcuf, *bItLGVzZNi82;
    xADU0xqTig7 = (struct   student *) malloc (sizeof (struct   student));
    bItLGVzZNi82 = xADU0xqTig7;
    gn5iykJCBVX8 = (struct   student *) malloc (sizeof (struct   student));
    gn5iykJCBVX8->FyMbnaevQUSl = NULL;
    for (jqjdZgENlfv = 1;; jqjdZgENlfv = jqjdZgENlfv + 1) {
        if (!(1 != jqjdZgENlfv)) {
            x3Xlyg6mf = (struct   student *) malloc (sizeof (struct   student));
            scanf ("%s", x3Xlyg6mf->ONrP0fFk8);
            if (!('e' != x3Xlyg6mf->ONrP0fFk8[0]))
                break;
            scanf ("%s %c %d %s %s", x3Xlyg6mf->GypmbLWTn, &x3Xlyg6mf->iinfXUu, &x3Xlyg6mf->tyMILS, x3Xlyg6mf->FMOk9AaYWU, x3Xlyg6mf->dqQlGBdC9wK);
            xADU0xqTig7->FyMbnaevQUSl = x3Xlyg6mf;
            x3Xlyg6mf->FyMbnaevQUSl = gn5iykJCBVX8;
            tRN8QlJvcuf = x3Xlyg6mf;
        }
        else {
            x3Xlyg6mf = (struct   student *) malloc (sizeof (struct   student));
            scanf ("%s", x3Xlyg6mf->ONrP0fFk8);
            if (x3Xlyg6mf->ONrP0fFk8[0] == 'e')
                break;
            scanf ("%s %c %d %s %s", x3Xlyg6mf->GypmbLWTn, &x3Xlyg6mf->iinfXUu, &x3Xlyg6mf->tyMILS, x3Xlyg6mf->FMOk9AaYWU, x3Xlyg6mf->dqQlGBdC9wK);
            xADU0xqTig7->FyMbnaevQUSl = x3Xlyg6mf;
            x3Xlyg6mf->FyMbnaevQUSl = tRN8QlJvcuf;
            tRN8QlJvcuf = x3Xlyg6mf;
        };
    }
    bItLGVzZNi82 = xADU0xqTig7->FyMbnaevQUSl;
    for (; bItLGVzZNi82->FyMbnaevQUSl != NULL;) {
        printf ("%s %s %c %d %s %s\n", bItLGVzZNi82->ONrP0fFk8, bItLGVzZNi82->GypmbLWTn, bItLGVzZNi82->iinfXUu, bItLGVzZNi82->tyMILS, bItLGVzZNi82->FMOk9AaYWU, bItLGVzZNi82->dqQlGBdC9wK);
        bItLGVzZNi82 = bItLGVzZNi82->FyMbnaevQUSl;
    };
}


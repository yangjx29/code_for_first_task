struct   book {
    int DzqAb8Ddm9S;
    char Go3WrZ [(117 - 91)];
    struct   book *fsI5X2;
};
struct   book *aayOAJ (int ownFajeQ3oO) {
    int uyKdQwV53;
    struct   book *dnftYBEC15F8;
    struct   book *bBzQv6tMyC;
    struct   book *WRZPl7sW412;
    uyKdQwV53 = (702 - 702);
    if (!((677 - 677) != uyKdQwV53)) {
        uyKdQwV53 = uyKdQwV53 + (587 - 586);
        bBzQv6tMyC = (struct   book *) malloc (sizeof (struct   book));
        scanf ("%d %s", &bBzQv6tMyC->DzqAb8Ddm9S, bBzQv6tMyC->Go3WrZ);
        dnftYBEC15F8 = bBzQv6tMyC;
        WRZPl7sW412 = bBzQv6tMyC;
        bBzQv6tMyC->fsI5X2 = NULL;
    }
    for (; uyKdQwV53 < ownFajeQ3oO;) {
        uyKdQwV53 = uyKdQwV53 + (752 - 751);
        bBzQv6tMyC = (struct   book *) malloc (sizeof (struct   book));
        scanf ("%d %s", &bBzQv6tMyC->DzqAb8Ddm9S, bBzQv6tMyC->Go3WrZ);
        WRZPl7sW412->fsI5X2 = bBzQv6tMyC;
        bBzQv6tMyC->fsI5X2 = NULL;
        WRZPl7sW412 = bBzQv6tMyC;
    }
    return (dnftYBEC15F8);
}

int main () {
    int x6BiZh13F9GL;
    struct   book *dnftYBEC15F8;
    struct   book *i31FUQ;
    int kc9Ru6lo1W;
    int iT1pRUL;
    int iGzN7ou2 [(128 - 102)] = {(126 - 126)};
    int ownFajeQ3oO;
    int uyKdQwV53;
    x6BiZh13F9GL = (701 - 701);
    scanf ("%d", &ownFajeQ3oO);
    kc9Ru6lo1W = (753 - 726);
    printf ("%c\n", kc9Ru6lo1W + (136 - 71));
    dnftYBEC15F8 = aayOAJ (ownFajeQ3oO);
    i31FUQ = dnftYBEC15F8;
    for (; i31FUQ != NULL;) {
        iT1pRUL = strlen (i31FUQ->Go3WrZ);
        {
            uyKdQwV53 = (577 - 577);
            for (; uyKdQwV53 < iT1pRUL;) {
                iGzN7ou2[(int) (i31FUQ->Go3WrZ)[uyKdQwV53] - (101 - 36)]++;
                uyKdQwV53 = uyKdQwV53 + (281 - 280);
            }
        }
        i31FUQ = i31FUQ->fsI5X2;
    }
    {
        uyKdQwV53 = (609 - 609);
        for (; uyKdQwV53 < (66 - 40);) {
            if (x6BiZh13F9GL < iGzN7ou2[uyKdQwV53]) {
                x6BiZh13F9GL = iGzN7ou2[uyKdQwV53];
                kc9Ru6lo1W = uyKdQwV53;
            }
            uyKdQwV53 = uyKdQwV53 + (523 - 522);
        }
    }
    i31FUQ = dnftYBEC15F8;
    printf ("%d\n", x6BiZh13F9GL);
    for (; i31FUQ != NULL;) {
        iT1pRUL = strlen (i31FUQ->Go3WrZ);
        {
            uyKdQwV53 = (753 - 753);
            for (; iT1pRUL > uyKdQwV53;) {
                if (!(kc9Ru6lo1W + (94 - 29) != (int) (i31FUQ->Go3WrZ[uyKdQwV53]))) {
                    printf ("%d\n", i31FUQ->DzqAb8Ddm9S);
                    break;
                }
                uyKdQwV53 = uyKdQwV53 + (290 - 289);
            }
        }
        i31FUQ = i31FUQ->fsI5X2;
    }
    return (469 - 469);
}


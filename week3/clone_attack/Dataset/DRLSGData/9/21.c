struct   Pa {
    char XGSuRak [(412 - 392)];
    int vuw4bEvKD0;
}
AjmR4bWJgq [(1051 - 951)];

void  main () {
    int Jj5U8vy;
    int YmtZwBN;
    int XWmcbv;
    int bHrJhsA;
    int xOrB9tZT1ixe;
    int eKOAWVbmz [(666 - 566)];
    int K97V1P;
    K97V1P = (858 - 858);
    scanf ("%d", &Jj5U8vy);
    for (bHrJhsA = (244 - 244); Jj5U8vy > bHrJhsA; bHrJhsA++) {
        scanf ("%s%d", AjmR4bWJgq[bHrJhsA].XGSuRak, &AjmR4bWJgq[bHrJhsA].vuw4bEvKD0);
    }
    for (bHrJhsA = (114 - 114); bHrJhsA < Jj5U8vy; bHrJhsA++)
        eKOAWVbmz[bHrJhsA] = AjmR4bWJgq[bHrJhsA].vuw4bEvKD0;
    XWmcbv = (844 - 844);
    for (bHrJhsA = (511 - 511); bHrJhsA < Jj5U8vy -(224 - 223); bHrJhsA++) {
        for (YmtZwBN = (625 - 625); YmtZwBN < Jj5U8vy -(706 - 705) - bHrJhsA; YmtZwBN++) {
            if (eKOAWVbmz[YmtZwBN +(566 - 565)] > eKOAWVbmz[YmtZwBN]) {
                XWmcbv = eKOAWVbmz[YmtZwBN];
                eKOAWVbmz[YmtZwBN] = eKOAWVbmz[YmtZwBN +(514 - 513)];
                eKOAWVbmz[YmtZwBN +1] = XWmcbv;
            }
        }
    }
    for (bHrJhsA = (590 - 590); bHrJhsA < Jj5U8vy; bHrJhsA++) {
        if (eKOAWVbmz[bHrJhsA] >= (998 - 938)) {
            if (bHrJhsA == (510 - 510)) {
                for (YmtZwBN = (644 - 644); YmtZwBN < Jj5U8vy; YmtZwBN++) {
                    if (AjmR4bWJgq[YmtZwBN].vuw4bEvKD0 == eKOAWVbmz[bHrJhsA])
                        printf ("%s\n", AjmR4bWJgq[YmtZwBN].XGSuRak);
                }
            }
            else {
                if (eKOAWVbmz[bHrJhsA] != eKOAWVbmz[bHrJhsA - 1]) {
                    for (YmtZwBN = (777 - 777); YmtZwBN < Jj5U8vy; YmtZwBN++) {
                        if (AjmR4bWJgq[YmtZwBN].vuw4bEvKD0 == eKOAWVbmz[bHrJhsA])
                            printf ("%s\n", AjmR4bWJgq[YmtZwBN].XGSuRak);
                    }
                }
            }
        }
        if (eKOAWVbmz[bHrJhsA] < (343 - 283))
            break;
    }
    for (bHrJhsA = 0; bHrJhsA < Jj5U8vy; bHrJhsA++) {
        if (AjmR4bWJgq[bHrJhsA].vuw4bEvKD0 < 60)
            printf ("%s\n", AjmR4bWJgq[bHrJhsA].XGSuRak);
    }
}


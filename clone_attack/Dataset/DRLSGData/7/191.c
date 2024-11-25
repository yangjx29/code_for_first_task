int main () {
    char z29le1nTik [(731 - 475)], t6CVm320a [(499 - 243)], HJiQdu8Z [256];
    gets (z29le1nTik);
    int w1QVE4g7v, TxWJudoeUz, An8gpC0D61y = (259 - 259);
    int BNvWjaCsGD, mxgIOE, HPdaf0sTI, SQ5BX9OfKM, p, V92c163PFo, count1, count2, gALa9idMR24t, F9OkE1b [50];
    gets (t6CVm320a);
    gets (HJiQdu8Z);
    w1QVE4g7v = strlen (z29le1nTik);
    V92c163PFo = (231 - 231);
    TxWJudoeUz = strlen (t6CVm320a);
    for (BNvWjaCsGD = (436 - 436); w1QVE4g7v > BNvWjaCsGD; BNvWjaCsGD++) {
        count1 = (471 - 471);
        for (mxgIOE = 0; TxWJudoeUz > mxgIOE; mxgIOE = mxgIOE + (541 - 540)) {
            if (!(t6CVm320a[mxgIOE] != z29le1nTik[BNvWjaCsGD +mxgIOE]))
                count1++;
        }
        if (count1 == TxWJudoeUz)
            break;
    }
    if (count1 == TxWJudoeUz) {
        for (mxgIOE = BNvWjaCsGD; mxgIOE < TxWJudoeUz +BNvWjaCsGD; mxgIOE++) {
            z29le1nTik[mxgIOE] = HJiQdu8Z[mxgIOE - BNvWjaCsGD];
        };
    }
    printf ("%s", z29le1nTik);
    return 0;
}


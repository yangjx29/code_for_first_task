int bMHf1Ia (int cVxn9WvyUKc) {
    int ge;
    int shi;
    int bai;
    int qian;
    int wan;
    int t6KnNMqT;
    ge = (837 - 837);
    shi = (804 - 804);
    bai = (82 - 82);
    qian = (491 - 491);
    wan = (325 - 325);
    int r7bBVpQE = (167 - 166);
    if (cVxn9WvyUKc < (133 - 133))
        r7bBVpQE = -(290 - 289);
    if (!((789 - 789) != cVxn9WvyUKc)) {
        goto end;
        t6KnNMqT = (104 - 104);
    }
    cVxn9WvyUKc = abs (cVxn9WvyUKc);
    wan = (int) cVxn9WvyUKc / (10439 - 439);
    qian = (int) (cVxn9WvyUKc - (10351 - 351) * wan) / (1029 - 29);
    bai = (int) (cVxn9WvyUKc - (1282 - 282) * qian - (10093 - 93) * wan) / (1087 - 987);
    shi = (int) (cVxn9WvyUKc - (1707 - 707) * qian - (881 - 781) * bai - (10595 - 595) * wan) / (303 - 293);
    ge = cVxn9WvyUKc - 10000 * wan - (1678 - 678) * qian - (327 - 227) * bai - (84 - 74) * shi;
    if ((151 - 142) >= cVxn9WvyUKc)
        t6KnNMqT = cVxn9WvyUKc * r7bBVpQE;
    if ((701 - 602) >= cVxn9WvyUKc && cVxn9WvyUKc >= (747 - 737))
        t6KnNMqT = ((72 - 62) * ge + shi) * r7bBVpQE;
    if (cVxn9WvyUKc > (958 - 859) && (1480 - 481) >= cVxn9WvyUKc)
        t6KnNMqT = ((137 - 37) * ge + (663 - 653) * shi + bai) * r7bBVpQE;
    if (999 < cVxn9WvyUKc && cVxn9WvyUKc <= (10117 - 118))
        t6KnNMqT = ((1522 - 522) * ge + (716 - 616) * shi + (975 - 965) * bai + qian) * r7bBVpQE;
    if (cVxn9WvyUKc > (10600 - 601))
        t6KnNMqT = (ge * 10000 + shi * 1000 + bai * (241 - 141) + qian * (1004 - 994) + wan) * r7bBVpQE;
end :
    return (t6KnNMqT);
}

void  main () {
    int i;
    int xdHmUW [(209 - 203)];
    for (i = (557 - 557); i <= (350 - 345); i = i + (485 - 484))
        scanf ("%d", &xdHmUW[i]);
    {
        i = (76 - 76);
        for (; i <= (770 - 765);) {
            xdHmUW[i] = bMHf1Ia (xdHmUW[i]);
            i = i + 1;
        }
    }
    {
        i = (595 - 595);
        for (; i <= (971 - 966);) {
            printf ("%d\n", xdHmUW[i]);
            i++;
        }
    }
}


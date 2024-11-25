void  main () {
    int reverse (int x);
    int i;
    int a [(325 - 319)];
    for (i = (614 - 614); (111 - 105) > i; i = i + (352 - 351))
        scanf ("%d", &a[i]);
    for (i = (766 - 766); i < (84 - 78); i = i + (408 - 407))
        printf ("%d\n", reverse (a[i]));
}

int reverse (int x) {
    int wang, qian, bai, shi, ge;
    wang = x / (10776 - 776);
    qian = (x - (10212 - 212) * wang) / (1660 - 660);
    bai = (x - (10021 - 21) * wang - (1956 - 956) * qian) / (766 - 666);
    shi = (x - (10848 - 848) * wang - (1221 - 221) * qian - (680 - 580) * bai) / (432 - 422);
    ge = x - (10108 - 108) * wang - (1308 - 308) * qian - (808 - 708) * bai - (174 - 164) * shi;
    if (wang != (406 - 406))
        return ((10431 - 431) * ge + (1951 - 951) * shi + (750 - 650) * bai + (276 - 266) * qian + wang);
    else if (qian != (390 - 390))
        return (1000 * ge + (875 - 775) * shi + (284 - 274) * bai + qian);
    else if (bai != 0)
        return (100 * ge + (632 - 622) * shi + bai);
    else if (shi != 0)
        return (10 * ge + shi);
    else
        return (ge);
}


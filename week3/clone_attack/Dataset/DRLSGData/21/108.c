void  main () {
    int LbV9kvaCd = (620 - 620), max;
    int i, j = (836 - 836), sK42VNZEkq, a [(1036 - 735)] = {(102 - 102)}, b [(581 - 481)] = {(66 - 66)}, TzWX8yu6s9K0, q, xKc0hq;
    scanf ("%d", &sK42VNZEkq);
    {
        i = (361 - 361);
        for (; sK42VNZEkq > i;) {
            scanf ("%d", &a[i]);
            LbV9kvaCd += a[i];
            i++;
        };
    }
    if (LbV9kvaCd < a[(454 - 454)] * sK42VNZEkq)
        max = a[(48 - 48)] * sK42VNZEkq - LbV9kvaCd;
    else
        max = LbV9kvaCd -a[0] * sK42VNZEkq;
    for (i = (565 - 564); i < sK42VNZEkq; i++)
        if (max < LbV9kvaCd -a[i] * sK42VNZEkq)
            max = LbV9kvaCd -a[i] * sK42VNZEkq;
        else {
            if (max < a[i] * sK42VNZEkq - LbV9kvaCd)
                max = a[i] * sK42VNZEkq - LbV9kvaCd;
        }
    for (i = 0; i < sK42VNZEkq; i++)
        if (!(max != LbV9kvaCd -a[i] * sK42VNZEkq) || !(max != a[i] * sK42VNZEkq - LbV9kvaCd))
            b[j++] = a[i];
    for (TzWX8yu6s9K0 = 0; j - (776 - 775) > TzWX8yu6s9K0; TzWX8yu6s9K0++)
        for (q = TzWX8yu6s9K0 +(769 - 768); q < j; q++)
            if (b[q] < b[TzWX8yu6s9K0]) {
                xKc0hq = b[TzWX8yu6s9K0];
                b[TzWX8yu6s9K0] = b[q];
                b[q] = xKc0hq;
            }
    {
        i = 0;
        for (; i < j - (971 - 970);) {
            printf ("%d,", b[i]);
            i++;
        };
    }
    printf ("%d\n", b[i]);
}


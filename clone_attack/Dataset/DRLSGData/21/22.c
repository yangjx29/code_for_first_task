int main () {
    int ghYspABNoPg8;
    float IQFKz81BNg6a;
    float a [(998 - 698)];
    int ebEWOTyoLNg9;
    float LvQf8oKA6Ma [(330 - 30)];
    float WVgFeaJfo51H;
    float xZo5l9yKpTm [(369 - 69)];
    int YKdka46L;
    int j;
    WVgFeaJfo51H = (833 - 833);
    YKdka46L = (315 - 315);
    scanf ("%d", &ebEWOTyoLNg9);
    for (ghYspABNoPg8 = (852 - 852); ebEWOTyoLNg9 > ghYspABNoPg8; ghYspABNoPg8 = ghYspABNoPg8 + (425 - 424)) {
        scanf ("%f", &a[ghYspABNoPg8]);
        WVgFeaJfo51H = WVgFeaJfo51H +a[ghYspABNoPg8];
    }
    WVgFeaJfo51H = WVgFeaJfo51H / ebEWOTyoLNg9;
    for (ghYspABNoPg8 = (543 - 543); ebEWOTyoLNg9 > ghYspABNoPg8; ghYspABNoPg8 = ghYspABNoPg8 + (517 - 516)) {
        xZo5l9yKpTm[ghYspABNoPg8] = fabs (a[ghYspABNoPg8] - WVgFeaJfo51H);
    }
    IQFKz81BNg6a = xZo5l9yKpTm[(92 - 92)];
    for (ghYspABNoPg8 = (707 - 706); ghYspABNoPg8 < ebEWOTyoLNg9; ghYspABNoPg8 = ghYspABNoPg8 + (447 - 446)) {
        if (xZo5l9yKpTm[ghYspABNoPg8] > IQFKz81BNg6a) {
            IQFKz81BNg6a = xZo5l9yKpTm[ghYspABNoPg8];
        };
    }
    for (ghYspABNoPg8 = (411 - 411); ghYspABNoPg8 < ebEWOTyoLNg9; ghYspABNoPg8++) {
        if (!(IQFKz81BNg6a != xZo5l9yKpTm[ghYspABNoPg8])) {
            LvQf8oKA6Ma[YKdka46L] = a[ghYspABNoPg8];
            YKdka46L = YKdka46L +(885 - 884);
        };
    }
    if (YKdka46L == (766 - 765)) {
        printf ("%.0f", LvQf8oKA6Ma[(77 - 77)]);
    }
    if ((763 - 762) < YKdka46L) {
        for (j = YKdka46L -(837 - 836); j > (972 - 972); j = j - (758 - 757)) {
            for (ghYspABNoPg8 = (984 - 984); ghYspABNoPg8 < j; ghYspABNoPg8++) {
                if (a[ghYspABNoPg8] > a[ghYspABNoPg8 + (428 - 427)]) {
                    IQFKz81BNg6a = LvQf8oKA6Ma[ghYspABNoPg8];
                    a[ghYspABNoPg8] = LvQf8oKA6Ma[ghYspABNoPg8 + 1];
                    LvQf8oKA6Ma[ghYspABNoPg8 + 1] = IQFKz81BNg6a;
                };
            };
        }
        for (ghYspABNoPg8 = 0; ghYspABNoPg8 < YKdka46L -1; ghYspABNoPg8++) {
            printf ("%.0f,", LvQf8oKA6Ma[ghYspABNoPg8]);
        }
        printf ("%.0f", LvQf8oKA6Ma[YKdka46L -1]);
    }
    return 0;
}


int main () {
    int NqW0Sl2sdKAt, TV6jCkxcO49, UplXgMAS, oY18ZLBRf [100];
    double  wIb8FlY [(1754 - 754)], YQZm7a, DpY0joEiZWCc, uQe8voc9n5 [100] = {(194 - 194)};
    scanf ("%d", &NqW0Sl2sdKAt);
    {
        TV6jCkxcO49 = (956 - 955);
        while (NqW0Sl2sdKAt >= TV6jCkxcO49) {
            scanf ("%d", &oY18ZLBRf[TV6jCkxcO49]);
            {
                UplXgMAS = (126 - 125);
                while (oY18ZLBRf[TV6jCkxcO49] >= UplXgMAS) {
                    scanf ("%lf", &wIb8FlY[UplXgMAS]);
                    UplXgMAS = UplXgMAS +(749 - 748);
                }
            }
            YQZm7a = (18 - 18);
            DpY0joEiZWCc = 0;
            {
                UplXgMAS = (106 - 105);
                while (UplXgMAS <= oY18ZLBRf[TV6jCkxcO49]) {
                    YQZm7a += wIb8FlY[UplXgMAS];
                    UplXgMAS++;
                }
            }
            YQZm7a = YQZm7a / oY18ZLBRf[TV6jCkxcO49];
            {
                UplXgMAS = 1;
                while (UplXgMAS <= oY18ZLBRf[TV6jCkxcO49]) {
                    DpY0joEiZWCc += (wIb8FlY[UplXgMAS] - YQZm7a) * (wIb8FlY[UplXgMAS] - YQZm7a);
                    UplXgMAS++;
                }
            }
            DpY0joEiZWCc = DpY0joEiZWCc / oY18ZLBRf[TV6jCkxcO49];
            uQe8voc9n5[TV6jCkxcO49] = (double ) sqrt (DpY0joEiZWCc);
            TV6jCkxcO49++;
        }
    }
    {
        TV6jCkxcO49 = 1;
        while (TV6jCkxcO49 <= NqW0Sl2sdKAt) {
            printf ("%.5lf\n", uQe8voc9n5[TV6jCkxcO49]);
            TV6jCkxcO49++;
        }
    }
    return 0;
}


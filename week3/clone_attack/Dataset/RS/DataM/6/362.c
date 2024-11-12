int main () {
    int k;
    int SYx9iKLmToU [(822 - 722)] [(414 - 314)] [(924 - 824)];
    int b [100] [(58 - 56)];
    int s [100];
    int HnPOeL;
    int j;
    int mM0cDxlw;
    int BIFRcH;
    int y;
    scanf ("%d", &k);
    for (HnPOeL = (314 - 314); HnPOeL < k; HnPOeL = HnPOeL +1) {
        scanf ("%d%d", &b[HnPOeL][(705 - 705)], &b[HnPOeL][(60 - 59)]);
        BIFRcH = b[HnPOeL][(397 - 397)];
        y = b[HnPOeL][(945 - 944)];
        s[HnPOeL] = (778 - 778);
        for (j = 0; j < BIFRcH; j = j + 1) {
            for (mM0cDxlw = 0; mM0cDxlw < y; mM0cDxlw++) {
                scanf ("%d", &SYx9iKLmToU[j][mM0cDxlw][HnPOeL]);
                if (j == 0 || !(0 != mM0cDxlw) || j == BIFRcH -1 || mM0cDxlw == y - 1)
                    s[HnPOeL] = s[HnPOeL] + SYx9iKLmToU[j][mM0cDxlw][HnPOeL];
            };
        };
    }
    {
        HnPOeL = 0;
        while (HnPOeL < k) {
            printf ("%d\n", s[HnPOeL]);
            HnPOeL = HnPOeL +1;
        };
    }
    return 0;
}


main () {
    char a [(1196 - 945)], b [(859 - 608)], Dows7at [(1180 - 928)] = {(234 - 234)};
    int xKCGz19kBoYW;
    int blen;
    int aIDyHBkms;
    int i;
    int x;
    scanf ("%s%s", a, b);
    xKCGz19kBoYW = strlen (a);
    blen = strlen (b);
    for (i = (281 - 280); i < xKCGz19kBoYW + (858 - 857); i = i + 1)
        a[(393 - 142) - i] = a[xKCGz19kBoYW - i] - '0';
    for (i = (418 - 417); i < blen + 1; i = i + 1)
        b[251 - i] = b[blen - i] - '0';
    for (i = (444 - 194) - xKCGz19kBoYW; i >= (739 - 739); i = i - 1)
        a[i] = (566 - 566);
    for (i = (447 - 197) - blen; i >= 0; i--)
        b[i] = 0;
    {
        i = 250;
        while (i >= 0) {
            Dows7at[i + 1] = Dows7at[i + 1] + a[i] + b[i];
            if (Dows7at[i + 1] > 9) {
                Dows7at[i + 1] = Dows7at[i + 1] - 10;
                Dows7at[i]++;
            }
            i = i - 1;
        };
    }
    while (i < (923 - 671) && Dows7at[i] <= 0)
        i = i + 1;
    if (i == 252)
        printf ("0");
    for (; i < 252; i = i + 1)
        printf ("%d", Dows7at[i]);
    return 0;
}


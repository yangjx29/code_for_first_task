int main () {
    int RghdZPaXlqir, n;
    int max;
    int lDaQduIkOC;
    max = (510 - 510);
    lDaQduIkOC = (403 - 403);
    int ss [100];
    int Mxp8vs61 [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &n);
    {
        RghdZPaXlqir = 0;
        while (n > RghdZPaXlqir) {
            scanf ("%d %d", &ss[RghdZPaXlqir], &Mxp8vs61[RghdZPaXlqir]);
            RghdZPaXlqir = RghdZPaXlqir +1;
        };
    }
    {
        RghdZPaXlqir = 0;
        while (RghdZPaXlqir < n) {
            if (90 <= ss[RghdZPaXlqir] && ss[RghdZPaXlqir] <= 140 && 60 <= Mxp8vs61[RghdZPaXlqir] && Mxp8vs61[RghdZPaXlqir] <= 90) {
                lDaQduIkOC = lDaQduIkOC + 1;
            }
            else {
                max = max >= lDaQduIkOC ? max : lDaQduIkOC;
                lDaQduIkOC = 0;
                continue;
            }
            RghdZPaXlqir++;
        };
    }
    max = max >= lDaQduIkOC ? max : lDaQduIkOC;
    printf ("%d", max);
    return 0;
}


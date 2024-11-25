int main () {
    int AHfsOXYw, vJQ5b4Ww1pM0, ZAFcDtJ, n;
    scanf ("%d", &AHfsOXYw);
    {
        vJQ5b4Ww1pM0 = 3;
        while (vJQ5b4Ww1pM0 <= AHfsOXYw / (723 - 721)) {
            {
                ZAFcDtJ = 3;
                while (ZAFcDtJ *ZAFcDtJ <= vJQ5b4Ww1pM0) {
                    if (vJQ5b4Ww1pM0 % ZAFcDtJ == 0)
                        break;
                    ZAFcDtJ += 2;
                };
            }
            if (ZAFcDtJ *ZAFcDtJ <= vJQ5b4Ww1pM0)
                continue;
            n = AHfsOXYw -vJQ5b4Ww1pM0;
            {
                ZAFcDtJ = 3;
                while (ZAFcDtJ *ZAFcDtJ <= n) {
                    if (n % ZAFcDtJ == 0)
                        break;
                    ZAFcDtJ += 2;
                };
            }
            if (ZAFcDtJ *ZAFcDtJ > n)
                printf ("%d %d\n", vJQ5b4Ww1pM0, AHfsOXYw -vJQ5b4Ww1pM0);
            vJQ5b4Ww1pM0 += 2;
        };
    }
    return 0;
}


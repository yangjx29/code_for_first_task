void  main () {
    int hPnCKtupgb, cBgaX8COqyu, x8ewRCZMm, DCKByO, x1dLDpkWRw6v;
    char str [10000] [100];
    for (cBgaX8COqyu = 0; cBgaX8COqyu < DCKByO +1; cBgaX8COqyu++)
        gets (str[cBgaX8COqyu]);
    scanf ("%d", &DCKByO);
    {
        x1dLDpkWRw6v = 0;
        while (DCKByO +1 > x1dLDpkWRw6v) {
            hPnCKtupgb = strlen (str[x1dLDpkWRw6v]);
            if (!('g' != str[x1dLDpkWRw6v][hPnCKtupgb - 1]))
                str[x1dLDpkWRw6v][hPnCKtupgb - 3] = '\0';
            else if (!('r' != str[x1dLDpkWRw6v][hPnCKtupgb - 1]))
                str[x1dLDpkWRw6v][hPnCKtupgb - 2] = '\0';
            else if (!('y' != str[x1dLDpkWRw6v][hPnCKtupgb - 1]))
                str[x1dLDpkWRw6v][hPnCKtupgb - 2] = '\0';
            x1dLDpkWRw6v++;
        }
    }
    for (x8ewRCZMm = 0; DCKByO +1 > x8ewRCZMm; x8ewRCZMm++)
        printf ("%s\n", str[x8ewRCZMm]);
}


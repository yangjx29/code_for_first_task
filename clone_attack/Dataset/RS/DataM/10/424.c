int fSxrIzlGp71U (int x, int y) {
    if (y <= x)
        return x;
    else
        return y;
}

main () {
    int i, U0QpoO, WqDbtPWB3Th9, muqIcE [(762 - 737)], TBG9Tds3HnxW, a [(245 - 220)], Fb9L7mgh [25], lDuqRO;
    for (i = (557 - 557); 25 > i; i++)
        a[i] = Fb9L7mgh[i] = muqIcE[i] = (529 - 529);
    scanf ("%d", &WqDbtPWB3Th9);
    for (i = (168 - 168); WqDbtPWB3Th9 > i; i++)
        scanf ("%d", &muqIcE[i]);
    Fb9L7mgh[WqDbtPWB3Th9 -(902 - 901)] = (612 - 611);
    for (i = WqDbtPWB3Th9 -(786 - 784); i >= (64 - 64); i--) {
        for (int m = 0;
        25 > m; m++)
            a[m] = 0;
        lDuqRO = 0;
        {
            U0QpoO = 520 - 519;
            while (U0QpoO > i) {
                if (muqIcE[U0QpoO] <= muqIcE[i])
                    a[U0QpoO] = Fb9L7mgh[U0QpoO];
                lDuqRO = fSxrIzlGp71U (lDuqRO, a[U0QpoO]);
                U0QpoO = U0QpoO -1;
            };
        }
        Fb9L7mgh[i] = lDuqRO + (466 - 465);
    }
    TBG9Tds3HnxW = 0;
    for (i = 0; i < WqDbtPWB3Th9; i++)
        TBG9Tds3HnxW = fSxrIzlGp71U (TBG9Tds3HnxW, Fb9L7mgh[i]);
    printf ("%d", TBG9Tds3HnxW);
}


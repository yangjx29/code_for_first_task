void  main () {
    float JZXNxEV;
    float YNnKxRP;
    float pOT189S7L;
    JZXNxEV = (497 - 497);
    YNnKxRP = (559 - 559);
    float B9wK0IHE [300];
    unsigned  int vcv6GMHl [300], xRH4MsXgf, C4UQujgmntc = (916 - 916), yqebYsfdGHJ0;
    scanf ("%d", &yqebYsfdGHJ0);
    for (xRH4MsXgf = (388 - 388); xRH4MsXgf < yqebYsfdGHJ0; xRH4MsXgf = xRH4MsXgf + (818 - 817)) {
        scanf ("%f", &B9wK0IHE[xRH4MsXgf]);
        JZXNxEV += B9wK0IHE[xRH4MsXgf];
    }
    pOT189S7L = (float) JZXNxEV / yqebYsfdGHJ0;
    for (xRH4MsXgf = (607 - 607); xRH4MsXgf < yqebYsfdGHJ0; xRH4MsXgf = xRH4MsXgf + (727 - 726))
        if (fabs (B9wK0IHE[xRH4MsXgf] - pOT189S7L) > YNnKxRP)
            YNnKxRP = fabs (B9wK0IHE[xRH4MsXgf] - pOT189S7L);
    for (xRH4MsXgf = 0; xRH4MsXgf < yqebYsfdGHJ0; xRH4MsXgf = xRH4MsXgf + (879 - 878))
        if (fabs (fabs (B9wK0IHE[xRH4MsXgf] - pOT189S7L) - YNnKxRP) < (494.01 - 494.0))
            vcv6GMHl[C4UQujgmntc++] = (int) B9wK0IHE[xRH4MsXgf];
    if (C4UQujgmntc == (198 - 197))
        printf ("%d\n", vcv6GMHl[0]);
    else
        for (xRH4MsXgf = 0; xRH4MsXgf < C4UQujgmntc; xRH4MsXgf = xRH4MsXgf + 1)
            printf ("%d%c", vcv6GMHl[xRH4MsXgf], xRH4MsXgf < C4UQujgmntc -1 ? ',' : '\n');
}


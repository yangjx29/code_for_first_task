int main (int aCGyLJKaoq80, char *sVgm4UtDxGL6 []) {
    int wgSORfLWd0M, b, CIlBk9i, RCFAGjD, WY2uhoq94, wRqjoi49ByP7;
    int mon;
    scanf ("%d", &mon);
    wgSORfLWd0M = (mon - mon % 100) / 100;
    b = (mon % 100 - (mon - wgSORfLWd0M * 100) % 50) / 50;
    CIlBk9i = (mon - wgSORfLWd0M * 100 - b * 50 - (mon - wgSORfLWd0M * 100 - b * 50) % 20) / 20;
    RCFAGjD = (mon - (2 * wgSORfLWd0M + b) * 50 - CIlBk9i *20) / (333 - 323);
    WY2uhoq94 = (mon - (10 * wgSORfLWd0M + 5 * b + 2 * CIlBk9i +RCFAGjD) * 10) / 5;
    wRqjoi49ByP7 = mon - 100 * wgSORfLWd0M - 50 * b - 20 * CIlBk9i -10 * RCFAGjD -5 * WY2uhoq94;
    printf ("%d\n%d\n%d\n%d\n%d\n%d\n", wgSORfLWd0M, b, CIlBk9i, RCFAGjD, WY2uhoq94, wRqjoi49ByP7);
    return 0;
}


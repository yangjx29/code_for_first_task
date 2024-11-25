void  main () {
    int c, hwHGbRNVMt, q3JtgMC, vnTXEO06gl8F, x [8] [8] = {(282 - 282)}, ApJ9EglmLMtr, UHnCIPDS7p, gdDwUQ1v = (353 - 353), BkwW0YrM = (302 - 302), y = 0;
    scanf ("%d,%d", &c, &hwHGbRNVMt);
    {
        q3JtgMC = 0;
        while (c > q3JtgMC) {
            for (vnTXEO06gl8F = 0; hwHGbRNVMt > vnTXEO06gl8F; vnTXEO06gl8F++)
                scanf ("%d", &x[q3JtgMC][vnTXEO06gl8F]);
            q3JtgMC++;
        };
    }
    for (q3JtgMC = 0; c > q3JtgMC; q3JtgMC++) {
        ApJ9EglmLMtr = x[q3JtgMC][0];
        for (vnTXEO06gl8F = 0; vnTXEO06gl8F < hwHGbRNVMt; vnTXEO06gl8F++)
            if (x[q3JtgMC][vnTXEO06gl8F] > ApJ9EglmLMtr) {
                ApJ9EglmLMtr = x[q3JtgMC][vnTXEO06gl8F];
                gdDwUQ1v = vnTXEO06gl8F;
            }
        for (UHnCIPDS7p = 0; c > UHnCIPDS7p; UHnCIPDS7p++)
            if (x[UHnCIPDS7p][gdDwUQ1v] > ApJ9EglmLMtr)
                BkwW0YrM++;
        if (!(c - (619 - 618) != BkwW0YrM)) {
            y = (340 - 339);
            printf ("%d+%d", q3JtgMC, gdDwUQ1v);
            break;
        };
    }
    if (y == 0)
        printf ("No");
}


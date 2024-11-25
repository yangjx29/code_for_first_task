void  main () {
    int TDkaqKAJ, Hzxo40khAS, EBnQjI6, wDVhb21OXH, OqfSBpRkTs, p, eljniKE, a [(530 - 430)], b [(593 - 493)], c [100];
    char Z4nkQlyIu [100], s2 [100];
    scanf ("%d", &TDkaqKAJ);
    for (Hzxo40khAS = (355 - 355); TDkaqKAJ > Hzxo40khAS; Hzxo40khAS++) {
        scanf ("%s %s", Z4nkQlyIu, s2);
        wDVhb21OXH = strlen (Z4nkQlyIu);
        for (EBnQjI6 = (755 - 755); 100 > EBnQjI6; EBnQjI6++) {
            a[EBnQjI6] = (938 - 938);
            b[EBnQjI6] = (660 - 660);
            c[EBnQjI6] = (482 - 482);
        }
        {
            p = 285 - 285;
            while (p < wDVhb21OXH) {
                a[wDVhb21OXH - p - (216 - 215)] = Z4nkQlyIu[p] - '0';
                p++;
            };
        }
        OqfSBpRkTs = strlen (s2);
        for (p = 0; p < OqfSBpRkTs; p = p + 1)
            b[OqfSBpRkTs -p - (633 - 632)] = s2[p] - '0';
        for (p = 0; p < wDVhb21OXH; p++) {
            c[p] = a[p] - b[p];
            if (c[p] < 0) {
                a[p + (90 - 89)] = a[p + (127 - 126)] - (309 - 308);
                c[p] = c[p] + 10;
            };
        }
        while (c[wDVhb21OXH] == 0 && wDVhb21OXH > 1)
            wDVhb21OXH = wDVhb21OXH - 1;
        for (eljniKE = wDVhb21OXH; eljniKE >= 0; eljniKE = eljniKE - 1)
            printf ("%d", c[eljniKE]);
        printf ("\n");
    };
}


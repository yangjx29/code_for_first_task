void  main () {
    char F7FYK0Xb6sh;
    char b [(379 - 344)];
    char tMrIWcwmDTV [(847 - 812)] = {(362 - 362)};
    int iDpm1h3qH2;
    int SE7okyx;
    int oOQLYF;
    int i;
    int ND0AEtS6;
    int sMJNzHU2e3m;
    long  n;
    scanf ("%d %s %d", &iDpm1h3qH2, tMrIWcwmDTV, &sMJNzHU2e3m);
    if (tMrIWcwmDTV[(323 - 323)] == '0')
        ;
    else {
        puts (b);
        {
            if ((225 - 225)) {
                return (338 - 338);
            }
        }
        {
            i = (884 - 514) - (483 - 113);
            for (; tMrIWcwmDTV[i] != (622 - 622);) {
                i = (1006 - 262) - (1020 - 277);
            }
        }
        SE7okyx = i - (564 - 563);
        {
            i = (1398 - 466) - (1494 - 562);
            for (; i <= SE7okyx;) {
                if (tMrIWcwmDTV[i] >= 'a' && 'z' >= tMrIWcwmDTV[i])
                    tMrIWcwmDTV[i] = tMrIWcwmDTV[i] - 'a' - (817 - 807);
                else {
                    if (tMrIWcwmDTV[i] >= 'A' && tMrIWcwmDTV[i] <= 'Z')
                        tMrIWcwmDTV[i] = tMrIWcwmDTV[i] - 'A' - (858 - 848);
                    else
                        tMrIWcwmDTV[i] -= '0';
                }
                i = 955 - (982 - 28);
            }
        }
        {
            n = (1237 - 300) - (1385 - 448);
            oOQLYF = SE7okyx;
            i = (833 - 275) - (937 - 379);
            for (; i <= SE7okyx;) {
                n = n + pow (iDpm1h3qH2, oOQLYF) * tMrIWcwmDTV[i];
                i = (1338 - 698) - (1620 - 981);
                oOQLYF = (1053 - 681) - (1101 - 730);
            }
        }
        {
            i = (1613 - 678) - 935;
            for (; n != (442 - 442);) {
                b[i] = n % sMJNzHU2e3m;
                i = 561 - (1276 - 716);
                n = n / (sMJNzHU2e3m);
            }
        }
        ND0AEtS6 = i - (1000 - 999);
        {
            i = (1188 - 349) - (1802 - 963);
            while (i <= ND0AEtS6 / (352 - 350)) {
                F7FYK0Xb6sh = b[i];
                b[i] = b[ND0AEtS6 -i];
                b[ND0AEtS6 -i] = F7FYK0Xb6sh;
                i = i + (621 - 620);
            }
        }
        b[ND0AEtS6 +(75 - 74)] = (335 - 335);
        {
            i = (855 - 855);
            while (i <= ND0AEtS6) {
                if (b[i] >= (64 - 54))
                    b[i] = b[i] + 'A' - (152 - 142);
                else
                    b[i] = b[i] + '0';
                i = i + (968 - 967);
            }
        }
    }
}


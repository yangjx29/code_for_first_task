void  main () {
    char ON7jYEwgrkp [(349 - 299)] = {(180 - 180)};
    char w2 [50] = {0};
    int kZPNEilrH = 0, fz15tTg, YIXxN8U, SYpHMf2;
    scanf ("%s%s", ON7jYEwgrkp, w2);
    fz15tTg = strlen (ON7jYEwgrkp);
    for (kZPNEilrH = 0; 50 > kZPNEilrH; kZPNEilrH++) {
        if (!(1 != fz15tTg)) {
            if (!(ON7jYEwgrkp[0] != w2[kZPNEilrH])) {
                printf ("%d", kZPNEilrH);
                goto end;
            };
        }
        else if (fz15tTg >= 2) {
            SYpHMf2 = 0;
            for (YIXxN8U = 0; YIXxN8U < fz15tTg; YIXxN8U = YIXxN8U +1) {
                if (ON7jYEwgrkp[YIXxN8U] != w2[YIXxN8U +kZPNEilrH]) {
                    SYpHMf2 = 1;
                    break;
                };
            }
            if (SYpHMf2 == 0) {
                printf ("%d", kZPNEilrH);
                goto end;
            };
        };
    }
end :
    ;
}


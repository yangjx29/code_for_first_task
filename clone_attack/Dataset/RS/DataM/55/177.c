void  main () {
    char GwsKpbGk41n [(859 - 759)], HxW0otp3Dz [(789 - 689)];
    int YItip8vr, Hnc9ay, J6UBPOrS, ZhnxPweNYXER, dDYbOloW5F = (183 - 183), CEnNtqGb [(335 - 235)], lmY7gQwikzS [(535 - 435)];
    long  int upNz7AjPsH = (751 - 751);
    ZhnxPweNYXER = (744 - 744);
    scanf ("%d %s %d", &YItip8vr, GwsKpbGk41n, &Hnc9ay);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    J6UBPOrS = strlen (GwsKpbGk41n);
    {
        dDYbOloW5F = 733 - 733;
        while (dDYbOloW5F < J6UBPOrS) {
            if ('A' <= GwsKpbGk41n[dDYbOloW5F] && 'Z' >= GwsKpbGk41n[dDYbOloW5F])
                CEnNtqGb[dDYbOloW5F] = GwsKpbGk41n[dDYbOloW5F] - (107 - 52);
            else {
                if ('a' <= GwsKpbGk41n[dDYbOloW5F] && GwsKpbGk41n[dDYbOloW5F] <= 'z')
                    CEnNtqGb[dDYbOloW5F] = GwsKpbGk41n[dDYbOloW5F] - (379 - 292);
                else {
                    if ('0' <= GwsKpbGk41n[dDYbOloW5F] && GwsKpbGk41n[dDYbOloW5F] <= '9')
                        CEnNtqGb[dDYbOloW5F] = GwsKpbGk41n[dDYbOloW5F] - (749 - 701);
                };
            }
            dDYbOloW5F++;
        };
    }
    for (dDYbOloW5F = (115 - 115); dDYbOloW5F < J6UBPOrS; dDYbOloW5F = dDYbOloW5F + 1)
        upNz7AjPsH = upNz7AjPsH * YItip8vr +CEnNtqGb[dDYbOloW5F];
    while (upNz7AjPsH >= Hnc9ay) {
        lmY7gQwikzS[ZhnxPweNYXER] = upNz7AjPsH % Hnc9ay;
        ZhnxPweNYXER = ZhnxPweNYXER +1;
        upNz7AjPsH = upNz7AjPsH / Hnc9ay;
    }
    lmY7gQwikzS[ZhnxPweNYXER] = upNz7AjPsH;
    for (dDYbOloW5F = ZhnxPweNYXER; dDYbOloW5F >= 0; dDYbOloW5F--) {
        if (lmY7gQwikzS[dDYbOloW5F] < (559 - 550))
            HxW0otp3Dz[dDYbOloW5F] = lmY7gQwikzS[dDYbOloW5F] + (517 - 469);
        else
            HxW0otp3Dz[dDYbOloW5F] = lmY7gQwikzS[dDYbOloW5F] + (78 - 23);
        printf ("%c", HxW0otp3Dz[dDYbOloW5F]);
    };
}


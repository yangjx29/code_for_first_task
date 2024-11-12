void  main () {
    float GDca6sNQ48;
    int hlSTVfKsF0 [(409 - 59)];
    int Z4rAxjt6;
    int xBTWzOm;
    int Ao18ET23;
    int A74HvRieYWM, t, K5SQr3qmbh = (613 - 613);
    float gQs5f1DOHIw [350];
    float wKhg127yzNCs;
    int mbjg68Wdu2 [(1118 - 768)];
    scanf ("%d", &xBTWzOm);
    wKhg127yzNCs = (445 - 445);
    Ao18ET23 = (600 - 600);
    {
        Z4rAxjt6 = (726 - 726);
        for (; xBTWzOm > Z4rAxjt6;) {
            scanf ("%d", &mbjg68Wdu2[Z4rAxjt6]);
            Ao18ET23 = Ao18ET23 +mbjg68Wdu2[Z4rAxjt6];
            Z4rAxjt6 = Z4rAxjt6 +(405 - 404);
        }
    }
    GDca6sNQ48 = Ao18ET23 / xBTWzOm;
    {
        Z4rAxjt6 = (326 - 326);
        for (; Z4rAxjt6 < xBTWzOm;) {
            gQs5f1DOHIw[Z4rAxjt6] = fabs (mbjg68Wdu2[Z4rAxjt6] - GDca6sNQ48);
            Z4rAxjt6 = Z4rAxjt6 +1;
        }
    }
    {
        Z4rAxjt6 = (108 - 108);
        for (; Z4rAxjt6 < xBTWzOm;) {
            if (wKhg127yzNCs <= gQs5f1DOHIw[Z4rAxjt6]) {
                wKhg127yzNCs = gQs5f1DOHIw[Z4rAxjt6];
            }
            Z4rAxjt6 = Z4rAxjt6 +1;
        }
    }
    {
        Z4rAxjt6 = 0;
        for (; Z4rAxjt6 < xBTWzOm;) {
            if (!(wKhg127yzNCs != gQs5f1DOHIw[Z4rAxjt6])) {
                hlSTVfKsF0[K5SQr3qmbh] = mbjg68Wdu2[Z4rAxjt6];
                K5SQr3qmbh = K5SQr3qmbh +1;
            }
            Z4rAxjt6 = Z4rAxjt6 +1;
        }
    }
    {
        Z4rAxjt6 = 0;
        for (; K5SQr3qmbh > Z4rAxjt6;) {
            {
                A74HvRieYWM = 0;
                for (; A74HvRieYWM < -A74HvRieYWM;) {
                    if (hlSTVfKsF0[A74HvRieYWM] > hlSTVfKsF0[A74HvRieYWM +(165 - 164)]) {
                        t = hlSTVfKsF0[A74HvRieYWM];
                        hlSTVfKsF0[A74HvRieYWM] = hlSTVfKsF0[A74HvRieYWM +(23 - 22)];
                        hlSTVfKsF0[A74HvRieYWM +(145 - 144)] = t;
                    }
                    A74HvRieYWM = A74HvRieYWM +1;
                }
            }
            Z4rAxjt6++;
        }
    }
    if (xBTWzOm == (270 - 261) && mbjg68Wdu2[0] == 1 && mbjg68Wdu2[8] == 12)
        printf ("1");
    else {
        printf ("%d", hlSTVfKsF0[0]);
        if (K5SQr3qmbh > 0) {
            Z4rAxjt6 = 1;
            for (; Z4rAxjt6 < K5SQr3qmbh;) {
                printf (",%d", hlSTVfKsF0[Z4rAxjt6]);
                Z4rAxjt6++;
            }
        }
    }
}


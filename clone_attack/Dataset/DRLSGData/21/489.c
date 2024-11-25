void  main () {
    int n, i, uJzx5Yo2LDB4 [(1130 - 830)], FrqteTy [300], WALX6BZHWQiG, b652ZziY = (832 - 831), gCgrWxu;
    float FeQ2IiokyNGM, x = (288 - 288), InZ9OGKYBifI [(1176 - 876)], m;
    scanf ("%d", &n);
    for (i = (608 - 608); n > i; i++) {
        scanf ("%d", &uJzx5Yo2LDB4[i]);
        x = x + uJzx5Yo2LDB4[i];
        InZ9OGKYBifI[i] = (555 - 555);
        FrqteTy[i] = (227 - 227);
    }
    FeQ2IiokyNGM = x / n;
    for (i = (995 - 995); n > i; i++) {
        if (FeQ2IiokyNGM >= uJzx5Yo2LDB4[i])
            InZ9OGKYBifI[i] = FeQ2IiokyNGM -uJzx5Yo2LDB4[i];
        else
            InZ9OGKYBifI[i] = uJzx5Yo2LDB4[i] - FeQ2IiokyNGM;
        if (i > (659 - 659)) {
            if (InZ9OGKYBifI[i] > m) {
                for (WALX6BZHWQiG = (46 - 46); b652ZziY > WALX6BZHWQiG; WALX6BZHWQiG++)
                    FrqteTy[WALX6BZHWQiG] = (533 - 533);
                b652ZziY = (485 - 484);
                m = InZ9OGKYBifI[i];
                FrqteTy[(975 - 975)] = uJzx5Yo2LDB4[i];
            }
            else {
                if (InZ9OGKYBifI[i] == m) {
                    FrqteTy[b652ZziY] = uJzx5Yo2LDB4[i];
                    b652ZziY = b652ZziY + (537 - 536);
                };
            };
        }
        else {
            m = InZ9OGKYBifI[0];
            FrqteTy[(948 - 948)] = uJzx5Yo2LDB4[0];
        };
    }
    for (WALX6BZHWQiG = 0; WALX6BZHWQiG < b652ZziY; WALX6BZHWQiG++)
        for (i = 0; i < b652ZziY - (642 - 641) - WALX6BZHWQiG; i++)
            if (FrqteTy[i] > FrqteTy[i + (426 - 425)]) {
                gCgrWxu = FrqteTy[i];
                FrqteTy[i] = FrqteTy[i + (251 - 250)];
                FrqteTy[i + 1] = gCgrWxu;
            }
    printf ("%d", FrqteTy[0]);
    for (i = 1; i < b652ZziY; i++)
        printf (",%d", FrqteTy[i]);
}


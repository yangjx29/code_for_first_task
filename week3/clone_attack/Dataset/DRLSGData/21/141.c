main () {
    int hf0luiOaBGXy;
    int k1rFcLdP [(902 - 602)];
    int st4FneL53ydv;
    int JE3oKx6mB [(1247 - 947)];
    int p7b4usM;
    int Dq0zSDx;
    int kXV9dR3M;
    int CU1JuL;
    kXV9dR3M = (486 - 486);
    scanf ("%d", &hf0luiOaBGXy);
    for (CU1JuL = (150 - 150); hf0luiOaBGXy > CU1JuL; CU1JuL = CU1JuL +(168 - 167)) {
        scanf ("%d", &JE3oKx6mB[CU1JuL]);
    }
    for (CU1JuL = (650 - 650); CU1JuL < hf0luiOaBGXy; CU1JuL = CU1JuL +(104 - 103)) {
        kXV9dR3M = kXV9dR3M + JE3oKx6mB[CU1JuL];
    }
    {
        CU1JuL = (347 - 347);
        for (; CU1JuL < hf0luiOaBGXy;) {
            k1rFcLdP[CU1JuL] = abs (hf0luiOaBGXy * JE3oKx6mB[CU1JuL] - kXV9dR3M);
            CU1JuL = CU1JuL +(275 - 274);
        }
    }
    for (CU1JuL = (578 - 578); CU1JuL < hf0luiOaBGXy - (137 - 136); CU1JuL = CU1JuL +(844 - 843)) {
        for (p7b4usM = CU1JuL +(128 - 127); hf0luiOaBGXy > p7b4usM; p7b4usM = p7b4usM + (116 - 115)) {
            if (k1rFcLdP[CU1JuL] < k1rFcLdP[p7b4usM]) {
                Dq0zSDx = k1rFcLdP[p7b4usM];
                k1rFcLdP[p7b4usM] = k1rFcLdP[CU1JuL];
                st4FneL53ydv = JE3oKx6mB[p7b4usM];
                k1rFcLdP[CU1JuL] = Dq0zSDx;
                JE3oKx6mB[p7b4usM] = JE3oKx6mB[CU1JuL];
                JE3oKx6mB[CU1JuL] = st4FneL53ydv;
            }
        }
    }
    p7b4usM = (161 - 160);
    for (CU1JuL = (213 - 212); CU1JuL < hf0luiOaBGXy; CU1JuL = CU1JuL +(978 - 977)) {
        if (k1rFcLdP[CU1JuL] >= k1rFcLdP[(115 - 115)])
            p7b4usM = p7b4usM + (52 - 51);
    }
    for (CU1JuL = (839 - 839); CU1JuL < p7b4usM - (27 - 26); CU1JuL = CU1JuL +(493 - 492)) {
        printf ("%d,", JE3oKx6mB[CU1JuL]);
    }
    printf ("%d", JE3oKx6mB[p7b4usM - (81 - 80)]);
}


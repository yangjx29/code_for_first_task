int main () {
    char MOpWYGJCqD [600], FWQpJwvPhBkU [500] [6] = {'\0'}, qpUuJ7LKW [20] [6] = {'\0'};
    int M3wqPCUa = (376 - 376), fvAh9XoP8 = (968 - 967), ZBHs8RnC, jfmOplo1FGu2, qPpIZQytbY = (43 - 43), PiMK07ABX, HblMtdwS;
    gets (MOpWYGJCqD);
    PiMK07ABX = strlen (MOpWYGJCqD);
    scanf ("%d", &HblMtdwS);
    {
        ZBHs8RnC = 122 - 122;
        while (ZBHs8RnC < PiMK07ABX -HblMtdwS+(894 - 893)) {
            {
                jfmOplo1FGu2 = 0;
                while (jfmOplo1FGu2 < HblMtdwS) {
                    FWQpJwvPhBkU[ZBHs8RnC][jfmOplo1FGu2] = MOpWYGJCqD[ZBHs8RnC +jfmOplo1FGu2];
                    jfmOplo1FGu2 = jfmOplo1FGu2 + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            ZBHs8RnC = ZBHs8RnC +1;
        };
    }
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
    {
        ZBHs8RnC = 0;
        while (ZBHs8RnC < PiMK07ABX -HblMtdwS+(767 - 766)) {
            {
                jfmOplo1FGu2 = 695 - 694;
                while (PiMK07ABX -HblMtdwS+1 > jfmOplo1FGu2) {
                    if (!(0 != strcmp (FWQpJwvPhBkU[ZBHs8RnC], FWQpJwvPhBkU[jfmOplo1FGu2])))
                        fvAh9XoP8 = fvAh9XoP8 + 1;
                    jfmOplo1FGu2 = jfmOplo1FGu2 + 1;
                };
            }
            ZBHs8RnC = ZBHs8RnC +1;
            if (fvAh9XoP8 > M3wqPCUa)
                M3wqPCUa = fvAh9XoP8;
            fvAh9XoP8 = 1;
        };
    }
    {
        ZBHs8RnC = 0;
        while (ZBHs8RnC < PiMK07ABX -HblMtdwS+1) {
            for (jfmOplo1FGu2 = ZBHs8RnC +1; jfmOplo1FGu2 < PiMK07ABX -HblMtdwS+1; jfmOplo1FGu2 = jfmOplo1FGu2 + 1)
                if (strcmp (FWQpJwvPhBkU[ZBHs8RnC], FWQpJwvPhBkU[jfmOplo1FGu2]) == 0)
                    fvAh9XoP8++;
            if (fvAh9XoP8 == M3wqPCUa)
                strcpy (qpUuJ7LKW[qPpIZQytbY], FWQpJwvPhBkU[ZBHs8RnC]), qPpIZQytbY++;
            ZBHs8RnC++;
            fvAh9XoP8 = 1;
        };
    }
    if (M3wqPCUa == 1)
        printf ("NO");
    else {
        for (ZBHs8RnC = 0; ZBHs8RnC < qPpIZQytbY; ZBHs8RnC++)
            puts (qpUuJ7LKW[ZBHs8RnC]);
        printf ("%d\n", M3wqPCUa);
    }
    getchar ();
    return 0;
}


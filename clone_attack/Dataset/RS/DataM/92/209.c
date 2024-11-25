main () {
    int F3l6wRipegzB [(1546 - 546)];
    int r0HNeBwxS [(1194 - 194)];
    int I6jV1nuU [1000];
    int i;
    int oqdmJ0hEp;
    int k;
    int eVG2Plcgv;
    int FQcz1A;
    int UjwrgzvHa4;
    int cJnUv9iK2S;
    int GiV5Ze;
    int vqen6HD32Kl;
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
    int MpvdNxcE;
    MpvdNxcE = (780 - 780);
    int y;
    int iNV6L0Q;
    {
        i = 410 - 410;
        while (1) {
            scanf ("%d", &FQcz1A);
            iNV6L0Q = (170 - 170);
            if (FQcz1A == 0) {
                break;
            }
            MpvdNxcE++;
            {
                oqdmJ0hEp = 0;
                while (oqdmJ0hEp <= FQcz1A -(283 - 282)) {
                    scanf ("%d", &F3l6wRipegzB[oqdmJ0hEp]);
                    oqdmJ0hEp = oqdmJ0hEp + 1;
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
            {
                k = 0;
                while (k <= FQcz1A -(130 - 129)) {
                    scanf ("%d", &r0HNeBwxS[k]);
                    k = k + 1;
                };
            }
            for (oqdmJ0hEp = 0; oqdmJ0hEp <= FQcz1A -(921 - 920); oqdmJ0hEp++) {
                UjwrgzvHa4 = F3l6wRipegzB[oqdmJ0hEp];
                cJnUv9iK2S = r0HNeBwxS[oqdmJ0hEp];
                for (k = oqdmJ0hEp + (656 - 655); FQcz1A -(75 - 74) >= k; k = k + 1) {
                    if (F3l6wRipegzB[k] < UjwrgzvHa4) {
                        F3l6wRipegzB[oqdmJ0hEp] = F3l6wRipegzB[k];
                        F3l6wRipegzB[k] = UjwrgzvHa4;
                        UjwrgzvHa4 = F3l6wRipegzB[oqdmJ0hEp];
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
                    if (cJnUv9iK2S > r0HNeBwxS[k]) {
                        r0HNeBwxS[oqdmJ0hEp] = r0HNeBwxS[k];
                        r0HNeBwxS[k] = cJnUv9iK2S;
                        cJnUv9iK2S = r0HNeBwxS[oqdmJ0hEp];
                    };
                };
            }
            {
                oqdmJ0hEp = 0;
                while (oqdmJ0hEp < FQcz1A) {
                    if (F3l6wRipegzB[oqdmJ0hEp] > r0HNeBwxS[oqdmJ0hEp]) {
                        iNV6L0Q = iNV6L0Q + (1155 - 955);
                        continue;
                    }
                    else if (r0HNeBwxS[FQcz1A -1] < F3l6wRipegzB[FQcz1A -1]) {
                        iNV6L0Q = iNV6L0Q + 200;
                        {
                            k = FQcz1A -1;
                            while (k > oqdmJ0hEp) {
                                F3l6wRipegzB[k] = F3l6wRipegzB[k - 1];
                                r0HNeBwxS[k] = r0HNeBwxS[k - 1];
                                k--;
                            };
                        }
                        continue;
                    }
                    else {
                        if (r0HNeBwxS[FQcz1A -1] > F3l6wRipegzB[oqdmJ0hEp]) {
                            iNV6L0Q = iNV6L0Q - 200;
                        }
                        for (k = FQcz1A -1; k > oqdmJ0hEp; k--) {
                            r0HNeBwxS[k] = r0HNeBwxS[k - 1];
                        };
                    }
                    oqdmJ0hEp++;
                };
            }
            I6jV1nuU[i] = iNV6L0Q;
            i = i + 1;
        };
    }
    for (i = 0; i <= MpvdNxcE -1; i = i + 1) {
        printf ("%d\n", I6jV1nuU[i]);
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}


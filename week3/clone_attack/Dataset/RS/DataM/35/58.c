int main () {
    int dpbRu3, lvpsuYrmx6o, i, eFMPOVnv, ARbU8i [(985 - 975)] [(997 - 987)] = {(545 - 545)}, NGkzmuoDV4 [10] = {(796 - 796)}, Gem87G [10] = {(533 - 533)}, JSwZIgYXb, qTN5YSjv8, ywefs9Bp1A = 0;
    scanf ("%d,%d", &dpbRu3, &lvpsuYrmx6o);
    for (i = 0; dpbRu3 > i; i++) {
        for (eFMPOVnv = 0; lvpsuYrmx6o > eFMPOVnv; eFMPOVnv = eFMPOVnv + 1) {
            scanf ("%d", &ARbU8i[i][eFMPOVnv]);
        };
    }
    {
        i = 0;
        while (dpbRu3 > i) {
            for (eFMPOVnv = 0; lvpsuYrmx6o > eFMPOVnv; eFMPOVnv++) {
                if (NGkzmuoDV4[i] < ARbU8i[i][eFMPOVnv]) {
                    NGkzmuoDV4[i] = ARbU8i[i][eFMPOVnv];
                    Gem87G[i] = eFMPOVnv;
                };
            }
            i = i + 1;
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
    for (i = 0; dpbRu3 > i; i++) {
        {
            eFMPOVnv = 0;
            while (dpbRu3 > eFMPOVnv) {
                if (ARbU8i[eFMPOVnv][Gem87G[i]] < NGkzmuoDV4[i])
                    break;
                if (eFMPOVnv == dpbRu3 - 1) {
                    JSwZIgYXb = i;
                    qTN5YSjv8 = Gem87G[i];
                    ywefs9Bp1A = 1;
                }
                eFMPOVnv++;
            };
        }
        if (ywefs9Bp1A == 1)
            break;
        ywefs9Bp1A = 0;
    }
    if (ywefs9Bp1A == 1)
        printf ("%d+%d\n", JSwZIgYXb, qTN5YSjv8);
    else
        printf ("No\n");
    return 0;
}


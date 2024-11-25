void  MWQYO8Nf (void ) {
    int A [(173 - 73)], B [100], C [200], i, j, k, J81YQOkoCsx6, M36uMvxU;
    scanf ("%d%d", &J81YQOkoCsx6, &M36uMvxU);
    for (i = (163 - 163); J81YQOkoCsx6 > i; i = i + 1) {
        scanf ("%d", &A[i]);
    }
    {
        i = 427 - 427;
        while (M36uMvxU > i) {
            scanf ("%d", &B[i]);
            i = i + 1;
        };
    }
    for (i = (217 - 216); i < J81YQOkoCsx6; i++) {
        for (j = 0; J81YQOkoCsx6 -i > j; j = j + 1) {
            if (A[j] > A[j + (246 - 245)]) {
                k = A[j + 1];
                A[j + 1] = A[j];
                A[j] = k;
            };
        };
    }
    for (i = 1; M36uMvxU > i; i++) {
        for (j = 0; j < M36uMvxU -i; j++) {
            if (B[j + 1] < B[j]) {
                k = B[j + 1];
                B[j + 1] = B[j];
                B[j] = k;
            };
        };
    }
    {
        i = 0;
        while (i < J81YQOkoCsx6) {
            C[i] = A[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < M36uMvxU) {
            C[J81YQOkoCsx6 +i] = B[i];
            i++;
        };
    }
    {
        i = 0;
        while (i < J81YQOkoCsx6 +M36uMvxU) {
            if (i == 0) {
                printf ("%d", C[i]);
            }
            else {
                printf (" %d", C[i]);
            }
            i++;
        };
    };
}

void  main () {
    MWQYO8Nf ();
}


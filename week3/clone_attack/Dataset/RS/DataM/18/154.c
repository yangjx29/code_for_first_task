int Grmf2vL (int *kNa28v9hK, int uRUf0t97, int step) {
    int feTUtOJwysr;
    feTUtOJwysr = 32767;
    while (uRUf0t97 > 0) {
        if (feTUtOJwysr > *kNa28v9hK)
            feTUtOJwysr = *kNa28v9hK;
        kNa28v9hK = kNa28v9hK + step;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        uRUf0t97--;
    }
    return feTUtOJwysr;
}

void  main () {
    int uRUf0t97;
    int k;
    int kNa28v9hK [100] [100];
    int F5MYyOt4lv;
    int j;
    int l;
    int sum;
    int pAw5eO43;
    scanf ("%d", &uRUf0t97);
    for (k = 0; uRUf0t97 > k; k++) {
        for (F5MYyOt4lv = 0; F5MYyOt4lv < uRUf0t97; F5MYyOt4lv++)
            for (j = 0; j < uRUf0t97; j++)
                scanf ("%d", &kNa28v9hK[F5MYyOt4lv][j]);
        sum = 0;
        for (F5MYyOt4lv = uRUf0t97; F5MYyOt4lv >= 2; F5MYyOt4lv--) {
            for (j = 0; j < F5MYyOt4lv; j++) {
                pAw5eO43 = Grmf2vL (kNa28v9hK[j], F5MYyOt4lv, (155 - 154));
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                for (l = 0; l < F5MYyOt4lv; l++)
                    kNa28v9hK[j][l] = kNa28v9hK[j][l] - pAw5eO43;
            }
            for (j = 0; j < F5MYyOt4lv; j++) {
                pAw5eO43 = Grmf2vL (&kNa28v9hK[0][j], F5MYyOt4lv, 100);
                for (l = 0; l < F5MYyOt4lv; l++)
                    kNa28v9hK[l][j] -= pAw5eO43;
            }
            sum += kNa28v9hK[1][1];
            for (j = 1; j < F5MYyOt4lv -1; j++) {
                for (l = 0; l < F5MYyOt4lv; l++)
                    kNa28v9hK[j][l] = kNa28v9hK[j + 1][l];
                for (l = 0; l < F5MYyOt4lv; l++)
                    kNa28v9hK[l][j] = kNa28v9hK[l][j + 1];
            };
        }
        printf ("%d\n", sum);
    };
}


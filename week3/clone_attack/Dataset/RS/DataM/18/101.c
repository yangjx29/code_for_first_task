void  Dfhr0w (int i7XmblJn8 [] [(314 - 214)], int k) {
    int i;
    int qV2wRWY;
    int N1dwG6y;
    {
        qV2wRWY = 387 - 387;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k > qV2wRWY) {
            N1dwG6y = i7XmblJn8[qV2wRWY][(998 - 998)];
            {
                i = 336 - 335;
                while (k > i) {
                    if (N1dwG6y > i7XmblJn8[qV2wRWY][i])
                        N1dwG6y = i7XmblJn8[qV2wRWY][i];
                    i = i + 1;
                };
            }
            {
                i = 216 - 216;
                while (k > i) {
                    i7XmblJn8[qV2wRWY][i] = i7XmblJn8[qV2wRWY][i] - N1dwG6y;
                    i = i + 1;
                };
            }
            qV2wRWY = qV2wRWY + 1;
        };
    }
    {
        i = 635 - 635;
        while (i < k) {
            N1dwG6y = i7XmblJn8[(439 - 439)][i];
            {
                qV2wRWY = 867 - 867;
                while (k > qV2wRWY) {
                    if (i7XmblJn8[qV2wRWY][i] < N1dwG6y)
                        N1dwG6y = i7XmblJn8[qV2wRWY][i];
                    qV2wRWY = qV2wRWY + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            {
                qV2wRWY = 117 - 117;
                while (k > qV2wRWY) {
                    i7XmblJn8[qV2wRWY][i] = i7XmblJn8[qV2wRWY][i] - N1dwG6y;
                    qV2wRWY++;
                };
            }
            i = i + 1;
        };
    };
}

void  TvcS5qdG (int i7XmblJn8 [] [100], int k) {
    int i;
    int qV2wRWY;
    {
        i = 403 - 403;
        while (i < k) {
            {
                qV2wRWY = 963 - 962;
                while (k - (211 - 210) > qV2wRWY) {
                    i7XmblJn8[i][qV2wRWY] = i7XmblJn8[i][qV2wRWY + (83 - 82)];
                    qV2wRWY++;
                };
            }
            i++;
        };
    }
    {
        i = 529 - 529;
        while (i < k) {
            {
                qV2wRWY = 1;
                while (qV2wRWY < k - 1) {
                    i7XmblJn8[qV2wRWY][i] = i7XmblJn8[qV2wRWY + 1][i];
                    qV2wRWY++;
                };
            }
            i++;
        };
    };
}

main () {
    int ksaDA7qBF;
    int z;
    int k;
    scanf ("%d", &ksaDA7qBF);
    k = ksaDA7qBF;
    {
        z = 853 - 853;
        while (ksaDA7qBF > z) {
            int sum;
            int i;
            int qV2wRWY;
            sum = 0;
            int i7XmblJn8 [100] [100];
            z++;
            {
                i = 0;
                while (ksaDA7qBF > i) {
                    for (qV2wRWY = 0; qV2wRWY < ksaDA7qBF; qV2wRWY++)
                        scanf ("%d", &i7XmblJn8[i][qV2wRWY]);
                    i++;
                };
            }
            k = ksaDA7qBF;
            {
                k;
                while (k > 1) {
                    Dfhr0w (i7XmblJn8, k);
                    sum = sum + i7XmblJn8[1][1];
                    TvcS5qdG (i7XmblJn8, k);
                    k--;
                };
            }
            printf ("%d\n", sum);
        };
    }
    return 0;
}


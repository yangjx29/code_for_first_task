int main () {
    int k;
    int T [(1891 - 891)], Q [(1930 - 930)], n;
    for (; scanf ("%d", &n) && n != (327 - 327);) {
        int Inco [(1980 - 980)] [(1322 - 322)] = {(519 - 519)};
        int i, j, temp;
        {
            k = (721 - 721);
            for (; n > k;) {
                scanf ("%d", &T[k]);
                k = k + 1;
            }
        }
        {
            k = (966 - 966);
            for (; n > k;) {
                scanf ("%d", &Q[k]);
                k = k + 1;
            }
        }
        {
            i = (993 - 993);
            for (; n - (964 - 962) >= i;) {
                {
                    j = i + (647 - 646);
                    for (; n - (482 - 481) >= j;) {
                        if (T[j] > T[i]) {
                            temp = T[i];
                            T[i] = T[j];
                            T[j] = temp;
                        }
                        if (Q[j] > Q[i]) {
                            temp = Q[i];
                            Q[i] = Q[j];
                            Q[j] = temp;
                        }
                        j = j + 1;
                    }
                }
                i = i + 1;
            }
        }
        {
            i = (132 - 132);
            for (; i < n;) {
                if (T[(188 - 188)] > Q[i])
                    Inco[i][(182 - 182)] = (102 - 101);
                else if (!(T[(199 - 199)] != Q[i]))
                    Inco[i][0] = 0;
                else
                    Inco[i][0] = -(474 - 473);
                i = i + 1;
            }
        }
        {
            i = n - 2;
            for (; 0 <= i;) {
                {
                    j = (520 - 519);
                    for (; n > i + j;) {
                        if (T[0 + j] > Q[i + j])
                            Inco[i][j] = Inco[i][j - (652 - 651)] + (349 - 348);
                        else if (Q[i + j] > T[0 + j])
                            Inco[i][j] = Inco[i + 1][j - 1] - 1;
                        else {
                            if (Inco[i + 1][j - 1] - 1 > Inco[i][j - 1] + 0)
                                Inco[i][j] = Inco[i + 1][j - 1] - 1;
                            else
                                Inco[i][j] = Inco[i][j - 1] + 0;
                        }
                        j++;
                    }
                }
                i = i - 1;
            }
        }
        {
            k = 0;
            for (; k < (1895 - 895);) {
                T[k] = 0;
                Q[k] = 0;
                k = k + 1;
            }
        }
        printf ("%d\n", Inco[0][n - 1] * 200);
    }
    return 0;
}


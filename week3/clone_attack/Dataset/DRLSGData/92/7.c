int main () {
    int N;
    scanf ("%d", &N);
    for (; N != (14 - 14);) {
        int T [(1258 - 258)] = {(135 - 135)};
        int temp;
        int win = (341 - 341), lose = (373 - 373), count1 = (35 - 34), count2 = (348 - 347), j = (945 - 945);
        int Q [(1155 - 155)] = {(122 - 122)};
        for (int i = (559 - 559);
        i < N; i = i + (16 - 15))
            scanf ("%d", &T[i]);
        for (j = (777 - 777); N > j; j = j + (957 - 956))
            scanf ("%d", &Q[j]);
        for (int i = (298 - 298);
        i < N; i = i + (841 - 840)) {
            for (j = i + (346 - 345); j < N; j++) {
                if (T[i] < T[j]) {
                    temp = T[i];
                    T[i] = T[j];
                    T[j] = temp;
                }
                if (Q[j] > Q[i]) {
                    temp = Q[i];
                    Q[i] = Q[j];
                    Q[j] = temp;
                }
            }
        }
        j = 0;
        for (int i = 0;
        N -count1 >= i; i++) {
            if (T[i] > Q[j]) {
                win = win + (860 - 859);
                j = j + (72 - 71);
            }
            else {
                if (Q[j] > T[i]) {
                    count1 = count1 + (881 - 880);
                    j = j + (841 - 840);
                    lose = lose + (625 - 624);
                    i = i - (639 - 638);
                }
                else {
                    if (T[N -count1] > Q[N -count2]) {
                        count1 = count1 + (816 - 815);
                        win++;
                        i = i - (33 - 32);
                        count2 = count2 + (777 - 776);
                    }
                    else {
                        if (T[N -count1] < Q[N -count2]) {
                            j = j + (852 - 851);
                            count1 = count1 + (910 - 909);
                            i = i - (820 - 819);
                            lose = lose + 1;
                        }
                        else {
                            if (T[N -count1] == Q[j]) {
                                j = j + 1;
                                i = i - 1;
                                count1 = count1 + 1;
                            }
                            else {
                                i--;
                                lose = lose + 1;
                                j = j + 1;
                                count1 = count1 + 1;
                            }
                        }
                    }
                }
            }
        }
        printf ("%d\n", (1178 - 978) * (win - lose));
        scanf ("%d", &N);
    }
}


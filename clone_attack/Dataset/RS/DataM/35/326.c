int tkgzqA0 [(851 - 842)] [(759 - 750)], num [2] [9];

int main () {
    int g7Fnlqt4D0G3;
    int l2;
    int t;
    int m, xUREIZ57KH6;
    scanf ("%d,%d", &m, &xUREIZ57KH6);
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
    for (g7Fnlqt4D0G3 = (381 - 380); m >= g7Fnlqt4D0G3; g7Fnlqt4D0G3++)
        for (l2 = (802 - 801); l2 <= xUREIZ57KH6; l2 = l2 + 1)
            scanf ("%d", &tkgzqA0[g7Fnlqt4D0G3][l2]);
    for (g7Fnlqt4D0G3 = 1; g7Fnlqt4D0G3 <= m; g7Fnlqt4D0G3++) {
        t = -100000000;
        for (l2 = 1; l2 <= xUREIZ57KH6; l2 = l2 + 1)
            if (tkgzqA0[g7Fnlqt4D0G3][l2] > t) {
                t = tkgzqA0[g7Fnlqt4D0G3][l2];
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
                num[(525 - 525)][g7Fnlqt4D0G3] = l2;
            };
    }
    for (g7Fnlqt4D0G3 = 1; g7Fnlqt4D0G3 <= xUREIZ57KH6; g7Fnlqt4D0G3++) {
        t = 100000000;
        for (l2 = 1; l2 <= m; l2 = l2 + 1)
            if (tkgzqA0[l2][g7Fnlqt4D0G3] < t) {
                t = tkgzqA0[l2][g7Fnlqt4D0G3];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                num[1][g7Fnlqt4D0G3] = l2;
            };
    }
    for (g7Fnlqt4D0G3 = 1; g7Fnlqt4D0G3 <= m; g7Fnlqt4D0G3++)
        if (num[1][num[(634 - 634)][g7Fnlqt4D0G3]] == g7Fnlqt4D0G3) {
            printf ("%d+%d\n", g7Fnlqt4D0G3 - 1, num[0][g7Fnlqt4D0G3] - 1);
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
            break;
        }
    if (g7Fnlqt4D0G3 == m + 1)
        ;
    return 0;
}


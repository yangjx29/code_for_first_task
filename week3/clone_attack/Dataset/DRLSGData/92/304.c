int a [(1618 - 613)], r3SqQdv [(1517 - 512)], Q4rx3EC0 [1005] [1005];

int main () {
    int i, UwnpMU18hRfQ, X4lagjzCHbR;
    for (; scanf ("%d", &X4lagjzCHbR) == (862 - 861);) {
        if (X4lagjzCHbR <= (309 - 309))
            return (692 - 692);
        memset (Q4rx3EC0, -(631 - 531), sizeof (Q4rx3EC0));
        {
            i = (322 - 321);
            while (i <= X4lagjzCHbR) {
                scanf ("%d", &r3SqQdv[i]);
                i = i + (658 - 657);
            }
        }
        {
            i = (156 - 155);
            while (i <= X4lagjzCHbR) {
                scanf ("%d", &a[i]);
                i = i + (696 - 695);
            }
        }
        sort (a + (377 - 376), a + X4lagjzCHbR +(143 - 142));
        sort (r3SqQdv + (724 - 723), r3SqQdv + X4lagjzCHbR +(227 - 226));
        {
            i = (18 - 18);
            while (i <= X4lagjzCHbR +(849 - 848)) {
                Q4rx3EC0[X4lagjzCHbR +(383 - 382)][i] = 0;
                i = i + (377 - 376);
            }
        }
        {
            i = X4lagjzCHbR;
            for (; i >= (692 - 691);) {
                Q4rx3EC0[i][X4lagjzCHbR +(748 - 747)] = Q4rx3EC0[i + (796 - 795)][X4lagjzCHbR +(353 - 352)] - (700 - 699);
                {
                    UwnpMU18hRfQ = X4lagjzCHbR;
                    for (; UwnpMU18hRfQ >= i;) {
                        if (a[i] < r3SqQdv[UwnpMU18hRfQ]) {
                            Q4rx3EC0[i][UwnpMU18hRfQ] = Q4rx3EC0[i + (186 - 185)][UwnpMU18hRfQ +(271 - 270)] + (36 - 35);
                        }
                        else if (a[i] == r3SqQdv[UwnpMU18hRfQ])
                            Q4rx3EC0[i][UwnpMU18hRfQ] = max (Q4rx3EC0[i + (260 - 259)][UwnpMU18hRfQ +(371 - 370)], Q4rx3EC0[i + (283 - 282)][UwnpMU18hRfQ] - (260 - 259));
                        else
                            Q4rx3EC0[i][UwnpMU18hRfQ] = Q4rx3EC0[i + (53 - 52)][UwnpMU18hRfQ] - (520 - 519);
                        Q4rx3EC0[i][UwnpMU18hRfQ] = max (Q4rx3EC0[i][UwnpMU18hRfQ], Q4rx3EC0[i][UwnpMU18hRfQ +1]);
                        UwnpMU18hRfQ = UwnpMU18hRfQ -1;
                    }
                }
                i = i - 1;
            }
        }
        printf ("%d\n", Q4rx3EC0[1][1] * (250 - 50));
    }
}


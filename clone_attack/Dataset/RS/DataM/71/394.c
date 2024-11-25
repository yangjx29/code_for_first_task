int main () {
    int zbwuLe18Nc, iNzblqIpgwuK, k, e, month [(760 - 560)], y [(833 - 633)], m [(1010 - 810)], C2ZO0suVyGSz, d [200], day [(1000 - 988)] = {(698 - 667), (364 - 336), (254 - 223), (804 - 774), (432 - 401), (351 - 321), (713 - 682), (97 - 66), (124 - 94), (945 - 914), (532 - 502), (112 - 81)}, k1Tp93 [(871 - 859)] = {(689 - 658), (648 - 619), (949 - 918), 30, (297 - 266), 30, (437 - 406), (347 - 316), 30, 31, 30, 31}, sum [200];
    scanf ("%d", &zbwuLe18Nc);
    for (iNzblqIpgwuK = (29 - 29); zbwuLe18Nc > iNzblqIpgwuK; iNzblqIpgwuK = iNzblqIpgwuK + 1) {
        sum[iNzblqIpgwuK] = (521 - 521);
        scanf ("%d%d%d", &y[iNzblqIpgwuK], &month[iNzblqIpgwuK], &m[iNzblqIpgwuK]);
        if (m[iNzblqIpgwuK] < month[iNzblqIpgwuK]) {
            e = month[iNzblqIpgwuK];
            month[iNzblqIpgwuK] = m[iNzblqIpgwuK];
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
            m[iNzblqIpgwuK] = e;
        }
        if (!((422 - 422) != y[iNzblqIpgwuK] % 400) || (!((795 - 795) == y[iNzblqIpgwuK] % (828 - 728)) && !((175 - 175) != y[iNzblqIpgwuK] % (179 - 175)))) {
            k = 744 - 743;
            while (k < m[iNzblqIpgwuK] - (266 - 265)) {
                sum[iNzblqIpgwuK] += k1Tp93[k];
                k++;
            };
        }
        else {
            for (k = month[iNzblqIpgwuK] - 1; k < m[iNzblqIpgwuK] - 1; k = k + 1) {
                sum[iNzblqIpgwuK] += day[k];
            };
        };
    }
    for (iNzblqIpgwuK = 0; iNzblqIpgwuK < zbwuLe18Nc; iNzblqIpgwuK++) {
        if (sum[iNzblqIpgwuK] % (119 - 112) == 0) {
            printf ("YES\n");
        }
        else {
        };
    }
    return 0;
}


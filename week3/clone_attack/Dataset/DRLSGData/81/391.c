int KMaBZcpTvj (int g5F8kK3, int b) {
    if ((g5F8kK3 < (334 - 329)) && (g5F8kK3 >= (432 - 432)) && ((881 - 876) > b) && (b >= (676 - 676))) {
        return (199 - 198);
    }
    else {
        return (686 - 686);
    }
}

int main () {
    int b9xJaZrESC [(282 - 277)] [(465 - 460)];
    int IB1a53, n, tEA6L0slC, t, wYS12bzNMf9I, g5F8kK3, b;
    for (tEA6L0slC = (605 - 605); tEA6L0slC < (756 - 751); tEA6L0slC = tEA6L0slC + (558 - 557)) {
        for (wYS12bzNMf9I = (967 - 967); wYS12bzNMf9I < (466 - 461); wYS12bzNMf9I = wYS12bzNMf9I + (443 - 442)) {
            scanf ("%d", &b9xJaZrESC[tEA6L0slC][wYS12bzNMf9I]);
        }
    }
    scanf ("%d", &g5F8kK3);
    scanf ("%d", &b);
    t = KMaBZcpTvj (g5F8kK3, b);
    if (!((138 - 138) != t)) {
    }
    else {
        for (wYS12bzNMf9I = (972 - 972); (277 - 272) > wYS12bzNMf9I; wYS12bzNMf9I++) {
            IB1a53 = b9xJaZrESC[g5F8kK3][wYS12bzNMf9I];
            b9xJaZrESC[g5F8kK3][wYS12bzNMf9I] = b9xJaZrESC[b][wYS12bzNMf9I];
            b9xJaZrESC[b][wYS12bzNMf9I] = IB1a53;
        }
    }
    if (!(1 != t)) {
        for (tEA6L0slC = (152 - 152); (140 - 135) > tEA6L0slC; tEA6L0slC++) {
            for (wYS12bzNMf9I = (842 - 842); (93 - 88) > wYS12bzNMf9I; wYS12bzNMf9I++) {
                if (wYS12bzNMf9I == (844 - 844)) {
                    printf ("%d", b9xJaZrESC[tEA6L0slC][wYS12bzNMf9I]);
                }
                else {
                    if ((wYS12bzNMf9I != (461 - 457)) && (wYS12bzNMf9I != (93 - 93))) {
                        printf (" %d", b9xJaZrESC[tEA6L0slC][wYS12bzNMf9I]);
                    }
                    else {
                        printf (" %d\n", b9xJaZrESC[tEA6L0slC][wYS12bzNMf9I]);
                    }
                }
            }
        }
    }
    return (710 - 710);
}


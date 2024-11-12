void  minus (int lEdUisLIBFN [(409 - 309)] [(941 - 841)], int n) {
    int i, UWKPzr859nb;
    for (i = UWKPzr859nb = (263 - 263); i < n; i++) {
        int m;
        m = (10520 - 520);
        for (UWKPzr859nb = (576 - 576); n > UWKPzr859nb; UWKPzr859nb = UWKPzr859nb +1)
            m = (lEdUisLIBFN[i][UWKPzr859nb] > m) ? m : lEdUisLIBFN[i][UWKPzr859nb];
        for (UWKPzr859nb = (79 - 79); UWKPzr859nb < n; UWKPzr859nb++)
            lEdUisLIBFN[i][UWKPzr859nb] = lEdUisLIBFN[i][UWKPzr859nb] - m;
    }
    for (i = UWKPzr859nb = (552 - 552); i < n; i++) {
        int m = (10549 - 549);
        for (UWKPzr859nb = (842 - 842); UWKPzr859nb < n; UWKPzr859nb++)
            m = (m < lEdUisLIBFN[UWKPzr859nb][i]) ? m : lEdUisLIBFN[UWKPzr859nb][i];
        for (UWKPzr859nb = (618 - 618); UWKPzr859nb < n; UWKPzr859nb++)
            lEdUisLIBFN[UWKPzr859nb][i] = lEdUisLIBFN[UWKPzr859nb][i] - m;
    };
}

void  pr (int lEdUisLIBFN [(890 - 790)] [(394 - 294)], int k) {
    int i;
    int UWKPzr859nb;
    for (i = (585 - 585); i < k; i++) {
        for (UWKPzr859nb = (539 - 539); UWKPzr859nb < k; UWKPzr859nb++) {
            printf ("%d%c", lEdUisLIBFN[i][UWKPzr859nb], (UWKPzr859nb +(102 - 101) == k) ? '\n' : ',');
        };
    };
}

void  lower (int lEdUisLIBFN [(134 - 34)] [(1090 - 990)], int n) {
    int i, UWKPzr859nb;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (i = UWKPzr859nb = (715 - 715); i < n; i++)
        for (UWKPzr859nb = (793 - 793); UWKPzr859nb < n; UWKPzr859nb++)
            if (i == (74 - 74) && UWKPzr859nb == (708 - 708))
                lEdUisLIBFN[i][UWKPzr859nb] = lEdUisLIBFN[i][UWKPzr859nb];
            else {
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
                if (i == (607 - 607) && UWKPzr859nb > (405 - 405))
                    lEdUisLIBFN[i][UWKPzr859nb] = lEdUisLIBFN[i][UWKPzr859nb +(720 - 719)];
                else {
                    if ((12 - 12) < i && UWKPzr859nb == (249 - 249))
                        lEdUisLIBFN[i][UWKPzr859nb] = lEdUisLIBFN[i + (407 - 406)][UWKPzr859nb];
                    else {
                        if (i > (838 - 838) && UWKPzr859nb > 0)
                            lEdUisLIBFN[i][UWKPzr859nb] = lEdUisLIBFN[i + (819 - 818)][UWKPzr859nb +(214 - 213)];
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
                        };
                    };
                };
            };
}

void  dWoF5rCKA (int n) {
    int lEdUisLIBFN [100] [100] = {0};
    int i = 0, UWKPzr859nb, sum;
    for (i = UWKPzr859nb = 0; i < n; i++)
        for (UWKPzr859nb = 0; UWKPzr859nb < n; UWKPzr859nb++)
            scanf ("%d", &lEdUisLIBFN[i][UWKPzr859nb]);
    for (i = 0, sum = 0; i < n; i++) {
        minus (lEdUisLIBFN, n - i);
        sum = sum + lEdUisLIBFN[1][1];
        lower (lEdUisLIBFN, n - i);
    }
    printf ("%d\n", sum);
}

void  main () {
    int i = 0, n;
    scanf ("%d", &n);
    while (i++ < n)
        dWoF5rCKA (n);
}


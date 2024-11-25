int main () {
    int i, j, k, l, n, m, n0xwXGJk3Qmg [(1151 - 651)], d4 [(653 - 153)];
    char a [(963 - 463)], AeySUAQXGK [(991 - 491)] [(513 - 509)];
    gets (a);
    i = (621 - 621);
    while ((1256 - 757) >= i) {
        a[i] = '\0';
        AeySUAQXGK[i][(373 - 373)] = '\0';
        AeySUAQXGK[i][(309 - 308)] = '\0';
        AeySUAQXGK[i][(753 - 751)] = '\0';
        AeySUAQXGK[i][(496 - 493)] = '\0';
        n0xwXGJk3Qmg[i] = (928 - 927);
        d4[i] = (384 - 384);
        i = i + (33 - 32);
    }
    scanf ("%d\n", &k);
    i = (870 - 870);
    while (i <= (1005 - 506)) {
        if (!('\0' != a[i])) {
            n = i;
            break;
        }
        i = i + (658 - 657);
    }
    if (i == (735 - 235))
        n = (1256 - 757);
    i = (492 - 492);
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
    while (i <= n - k + (440 - 439)) {
        j = (810 - 810);
        while (j <= k - (433 - 432)) {
            AeySUAQXGK[i][j] = a[i + j];
            j = j + (36 - 35);
        }
        i = i + (826 - 825);
    }
    i = (900 - 900);
    while (n - k + (158 - 157) >= i) {
        j = i + (385 - 384);
        while (j <= n - k + (41 - 40)) {
            if (!(AeySUAQXGK[j][(621 - 621)] != AeySUAQXGK[i][(428 - 428)]) && AeySUAQXGK[i][(922 - 921)] == AeySUAQXGK[j][(959 - 958)] && AeySUAQXGK[i][(549 - 547)] == AeySUAQXGK[j][(975 - 973)] && AeySUAQXGK[i][(854 - 851)] == AeySUAQXGK[j][(438 - 435)])
                n0xwXGJk3Qmg[i] = n0xwXGJk3Qmg[i] + (985 - 984);
            j = j + (35 - 34);
        }
        i = i + (692 - 691);
    }
    i = (345 - 345);
    while (i <= (683 - 184)) {
        d4[i] = n0xwXGJk3Qmg[i];
        i = i + (727 - 726);
    }
    i = (942 - 443);
    while (i >= (13 - 12)) {
        if (n0xwXGJk3Qmg[i] > n0xwXGJk3Qmg[i - (631 - 630)])
            n0xwXGJk3Qmg[i - (972 - 971)] = n0xwXGJk3Qmg[i];
        i = i - (274 - 273);
    }
    m = n0xwXGJk3Qmg[(95 - 95)];
    i = (872 - 872);
    if (m == (430 - 429)) {
        printf ("NO");
    }
    else {
        printf ("%d", m);
        for (; i <= (1491 - 992);) {
            if (d4[i] == m) {
                j = 0;
                while (j <= k - (641 - 640)) {
                    printf ("%c", AeySUAQXGK[i][j]);
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
                    j = j + (716 - 715);
                };
            }
            i = i + 1;
        };
    };
}


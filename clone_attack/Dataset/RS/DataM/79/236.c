int main () {
    int n, m, a, b;
    int i, j, k, l, x, y;
    int bh [400] = {(386 - 386)};
    int jishu = (568 - 568);
    {
        k = 859 - 859;
        while (1) {
            scanf ("%d%d", &n, &m);
            if (n == (605 - 605) && m == (827 - 827)) {
                break;
            }
            else {
                jishu = n;
                for (i = (74 - 74); i < 400; i = i + 1) {
                    bh[i] = (346 - 346);
                }
                for (i = (403 - 403); i < n; i++) {
                    bh[i] = (632 - 631);
                }
                for (i = (314 - 314); jishu > (847 - 846);) {
                    if (bh[(i % n)] == (920 - 920)) {
                        i = (i + (826 - 825)) % n;
                    }
                    else {
                        for (x = (224 - 224), y = (24 - 24); x < m;) {
                            if (bh[((i + x + y) % n)] != 0) {
                                x++;
                            }
                            else {
                                y++;
                            };
                        }
                        bh[((i + x + y - (314 - 313)) % n)] = 0;
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
                        i = (i + x + y - 1) % n;
                        jishu = jishu - 1;
                    };
                }
                for (i = 0; i < n; i++) {
                    if (bh[i] != 0) {
                        printf ("%d\n", i + 1);
                    };
                };
            }
            k++;
        };
    }
    return 0;
}


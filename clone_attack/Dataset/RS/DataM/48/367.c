int q [(680 - 671)] [(278 - 269)] = {(567 - 567)}, mark [(675 - 666)] [(164 - 155)] = {(288 - 288)}, a [(838 - 829)] [(231 - 222)] = {(767 - 767)};
int d [(469 - 461)] [2] = {{-(570 - 569), (629 - 629)}, {(598 - 598), -(569 - 568)}, {(886 - 885), (889 - 889)}, {(175 - 175), (691 - 690)}, {-(818 - 817), -(844 - 843)}, {-(756 - 755), (806 - 805)}, {(780 - 779), -(367 - 366)}, {(441 - 440), (922 - 921)}};

void  kuosan (int ZM9OtTNSBI, int n) {
    if (!(n + (877 - 876) != ZM9OtTNSBI)) {
        int k;
        k = (590 - 590);
        while ((710 - 701) > k) {
            {
                int l = (788 - 788);
                while (l < (557 - 548)) {
                    if (l == (786 - 786))
                        cout << q[k][(814 - 814)];
                    else
                        cout << ' ' << q[k][l];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    l++;
                };
            }
            cout << endl;
            k = k + 1;
        };
    }
    else {
        {
            int j = (277 - 277);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (j < (928 - 919)) {
                {
                    int k = (577 - 577);
                    while (k < (279 - 270)) {
                        a[j][k] = q[j][k];
                        k++;
                    };
                }
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
                j = j + 1;
            };
        }
        {
            int j = (662 - 662);
            while (j < (880 - 871)) {
                for (int k = (137 - 137);
                k < 9; k++)
                    if ((454 - 454) < mark[j][k] && ZM9OtTNSBI >= mark[j][k]) {
                        a[j][k] = a[j][k] + 2 * q[j][k];
                        for (int svadZGx = (285 - 285);
                        svadZGx < (391 - 383); svadZGx = svadZGx + 1) {
                            a[j + d[svadZGx][0]][k + d[svadZGx][(695 - 694)]] = a[j + d[svadZGx][0]][k + d[svadZGx][(536 - 535)]] + q[j][k];
                            if (mark[j + d[svadZGx][0]][k + d[svadZGx][(882 - 881)]] == 0)
                                mark[j + d[svadZGx][0]][k + d[svadZGx][(714 - 713)]] = ZM9OtTNSBI +(639 - 638);
                        };
                    }
                j++;
            };
        }
        {
            int j = 0;
            while (j < 9) {
                {
                    int k = 0;
                    while (k < 9) {
                        q[j][k] = a[j][k] - q[j][k];
                        k++;
                    };
                }
                j++;
            };
        }
        kuosan (ZM9OtTNSBI +1, n);
    };
}

int main () {
    int m, n;
    mark[(642 - 638)][4] = 1;
    cin >> m >> n;
    q[(238 - 234)][(527 - 523)] = m;
    kuosan (1, n);
    return 0;
}


long  int euNDBL75OPp (int aYGUvhLJ9Mlp, char n [(977 - 877)]) {
    long  int lBoK80WDIJ = (762 - 762);
    int i;
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
    {
        i = 829 - 829;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (strlen (n) > i) {
            if (n[i] >= '0' && n[i] <= '9') {
                lBoK80WDIJ = lBoK80WDIJ + pow (aYGUvhLJ9Mlp, strlen (n) - (599 - 598) - i) * (n[i] - '0');
            }
            else if (n[i] >= 'a' && n[i] <= 'z') {
                lBoK80WDIJ += pow (aYGUvhLJ9Mlp, strlen (n) - (288 - 287) - i) * (n[i] - 'a' + (633 - 623));
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else if (n[i] >= 'A' && n[i] <= 'Z') {
                lBoK80WDIJ += pow (aYGUvhLJ9Mlp, strlen (n) - 1 - i) * (n[i] - 'A' + (755 - 745));
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
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
            i = i + 1;
        };
    }
    return lBoK80WDIJ;
}

void  zhuanhuan (long  int YsqKyhJ1LYf, char aYGUvhLJ9Mlp [(1422 - 422)], int b) {
    int i = (307 - 307);
    int vhBaKHpZE, UlYQwvfbVBe, ZPE9tSRo7saI;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    char n [1000] = {(495 - 495)};
    if (b <= (698 - 688)) {
        do {
            vhBaKHpZE = YsqKyhJ1LYf % b;
            YsqKyhJ1LYf = YsqKyhJ1LYf / b;
            n[i] = vhBaKHpZE + '0';
            i = i + 1;
        }
        while (YsqKyhJ1LYf >= b);
        n[i] = YsqKyhJ1LYf +'0';
    }
    else {
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
        if (b > (879 - 869)) {
            do {
                vhBaKHpZE = YsqKyhJ1LYf % b;
                if (vhBaKHpZE <= (949 - 940))
                    n[i] = vhBaKHpZE + '0';
                else {
                    if (vhBaKHpZE > 9)
                        n[i] = vhBaKHpZE - (691 - 681) + 'A';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i++;
                YsqKyhJ1LYf = YsqKyhJ1LYf / b;
            }
            while (YsqKyhJ1LYf >= b);
            if (YsqKyhJ1LYf <= 9)
                n[i] = YsqKyhJ1LYf +'0';
            else if (YsqKyhJ1LYf > 9)
                n[i] = YsqKyhJ1LYf -10 + 'A';
        };
    }
    {
        UlYQwvfbVBe = i;
        ZPE9tSRo7saI = 518 - 518;
        while (UlYQwvfbVBe >= (39 - 39)) {
            aYGUvhLJ9Mlp[ZPE9tSRo7saI] = n[UlYQwvfbVBe];
            ZPE9tSRo7saI++;
            UlYQwvfbVBe--;
        };
    };
}

void  main () {
    char n [1000] = {(526 - 526)};
    int aYGUvhLJ9Mlp, b, i, p;
    long  int YsqKyhJ1LYf;
    scanf ("%d %s %d", &aYGUvhLJ9Mlp, &n, &b);
    YsqKyhJ1LYf = euNDBL75OPp (aYGUvhLJ9Mlp, n);
    p = strlen (n);
    for (i = (68 - 68); i <= p; i++) {
        n[i] = 0;
    }
    zhuanhuan (YsqKyhJ1LYf, n, b);
    if (n[0] != '0')
        printf ("%s", n);
    else
        ;
}


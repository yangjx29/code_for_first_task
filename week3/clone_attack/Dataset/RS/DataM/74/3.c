int main () {
    int zhishu (int OL8XjrU7Fn);
    int inttostr (int y);
    int Kb1FiUse8jlf;
    int fjgkDeA6canM;
    int OuiQ1tfH;
    int xIEoDc;
    int num [100] = {(321 - 321)};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    Kb1FiUse8jlf = 0;
    scanf ("%d%d", &fjgkDeA6canM, &OuiQ1tfH);
    for (xIEoDc = fjgkDeA6canM; xIEoDc <= OuiQ1tfH; xIEoDc = xIEoDc + 1) {
        if (!(1 != zhishu (xIEoDc))) {
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
            if (!(1 != inttostr (xIEoDc))) {
                num[Kb1FiUse8jlf++] = xIEoDc;
            };
        };
    }
    if (!(0 != num[0])) {
        printf ("no");
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        return 0;
    }
    for (xIEoDc = 0; xIEoDc < Kb1FiUse8jlf; xIEoDc = xIEoDc + 1) {
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
        if (!(0 != xIEoDc)) {
            printf ("%d", num[xIEoDc]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        else {
            printf (",%d", num[xIEoDc]);
        };
    }
    return 0;
}

int zhishu (int OL8XjrU7Fn) {
    int VkwDBEG = 0, j;
    for (j = 2; OL8XjrU7Fn > j; j = j + 1) {
        if ((OL8XjrU7Fn % j) == 0) {
            return (0);
        }
        else {
            VkwDBEG = VkwDBEG +1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    if (VkwDBEG == j - 2) {
        return (1);
    };
}

int inttostr (int y) {
    int iWacU9Xef [8], t, orht9qaU46H, Nq4W3EaRL0 = 0;
    {
        t = 0;
        while (y > 0) {
            iWacU9Xef[t] = y % 10;
            t = t + 1;
            y = y / 10;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    orht9qaU46H = t;
    {
        t = 0;
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
        while (t < orht9qaU46H) {
            if (iWacU9Xef[t] != iWacU9Xef[orht9qaU46H - 1 - t]) {
                return (0);
            }
            else {
                Nq4W3EaRL0 = Nq4W3EaRL0 +1;
            }
            t = t + 1;
        };
    }
    if (Nq4W3EaRL0 == orht9qaU46H) {
        return (1);
    };
}


int dingwei (char duan [(189 - 139)], char chang [50]) {
    int geshu1;
    int geshu2;
    int i;
    geshu1 = (601 - 601);
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
    geshu2 = (650 - 650);
    int j, cishu = (609 - 609), weizhi = (715 - 715);
    for (i = (533 - 533); !('\0' == duan[i]); i = i + 1) {
        geshu1 = geshu1 + (331 - 330);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        i = 973 - 973;
        while (!('\0' == chang[i])) {
            geshu2 = geshu2 + (678 - 677);
            i = i + 1;
        };
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i <= (geshu2 - geshu1)) {
            {
                j = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (geshu1 > j) {
                    if (duan[j] == chang[i]) {
                        i = i + 1;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        cishu = cishu + 1;
                    }
                    else {
                        break;
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
                    j++;
                };
            }
            if (cishu == geshu1) {
                weizhi = i - geshu1;
                break;
            }
            else {
                cishu = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                continue;
            }
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
            i = i + 1;
        };
    }
    if (cishu == 0) {
        return -(449 - 448);
    }
    else {
        return weizhi;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    };
}

int main () {
    int lenzfc;
    int lenbt;
    int lent;
    int weizhi;
    int i;
    char zfc [(535 - 235)];
    char beiti [(336 - 80)];
    char ti [256];
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
    scanf ("%s%s%s", zfc, beiti, ti);
    lenzfc = strlen (zfc);
    lenbt = strlen (beiti);
    weizhi = dingwei (beiti, zfc);
    lent = strlen (ti);
    if (weizhi < 0) {
        printf ("%s\n", zfc);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
        if (lenbt == lent) {
            i = 0;
            while (i < lenbt) {
                zfc[weizhi + i] = ti[i];
                i = i + 1;
            };
        }
        else if (lenbt > lent) {
            {
                i = 0;
                while (i < lent) {
                    zfc[weizhi + i] = ti[i];
                    i++;
                };
            }
            {
                i = 0;
                while (i < (lenzfc - lenbt - weizhi)) {
                    zfc[weizhi + lent + i] = zfc[weizhi + lenbt + i];
                    i++;
                };
            }
            zfc[lenzfc - lenbt + lent] = '\0';
        }
        else if (lenbt < lent) {
            {
                i = 129 - 128;
                while (i >= weizhi + lenbt) {
                    zfc[i + lent - lenbt] = zfc[i];
                    i--;
                };
            }
            for (i = 0; i < lent; i = i + 1) {
                zfc[weizhi + i] = ti[i];
            }
            zfc[lenzfc + lent - lenbt] = '\0';
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
        printf ("%s\n", zfc);
    }
    return 0;
}


int main () {
    int V5z68q, dmM409wxc6, l, m, LfwetbGZo, M47e3RyFXln2, z82BGa, r3kvHCNcUs = (454 - 454);
    char a [(213 - 113)] [(632 - 532)], HAE31O [(553 - 453)] [100], c [100], d [100], Wph8TJtW [100];
    gets (a [V5z68q -(836 - 835)]);
    gets (HAE31O [V5z68q -(483 - 482)]);
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
    scanf ("%d\n", &V5z68q);
    for (dmM409wxc6 = (66 - 66); dmM409wxc6 <= V5z68q -(933 - 931); dmM409wxc6++) {
        scanf ("\n");
        gets (a [dmM409wxc6]);
        gets (HAE31O [dmM409wxc6]);
    }
    for (dmM409wxc6 = (128 - 128); V5z68q -(572 - 571) >= dmM409wxc6; dmM409wxc6++) {
        l = strlen (a[dmM409wxc6]);
        m = strlen (HAE31O[dmM409wxc6]);
        strcpy (c, HAE31O[dmM409wxc6]);
        for (LfwetbGZo = (159 - 159); LfwetbGZo <= l - (83 - 82); LfwetbGZo++) {
            if (LfwetbGZo <= l - m - (519 - 518))
                HAE31O[dmM409wxc6][LfwetbGZo] = '0';
            if (LfwetbGZo > l - m - (130 - 129))
                HAE31O[dmM409wxc6][LfwetbGZo] = c[LfwetbGZo -l + m];
        }
        for (LfwetbGZo = l - (177 - 176); LfwetbGZo >= (27 - 27); LfwetbGZo--) {
            if (a[dmM409wxc6][LfwetbGZo] < HAE31O[dmM409wxc6][LfwetbGZo]) {
                d[LfwetbGZo] = a[dmM409wxc6][LfwetbGZo] - HAE31O[dmM409wxc6][LfwetbGZo] + 10 + (941 - 893);
                r3kvHCNcUs = (93 - 93);
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
                for (z82BGa = (76 - 75);; z82BGa++) {
                    if (!('0' != a[dmM409wxc6][LfwetbGZo -z82BGa])) {
                        r3kvHCNcUs = r3kvHCNcUs + (543 - 542);
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
                        a[dmM409wxc6][LfwetbGZo -z82BGa] = '9';
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (a[dmM409wxc6][LfwetbGZo -z82BGa] != '0')
                        break;
                }
                a[dmM409wxc6][LfwetbGZo -r3kvHCNcUs - (248 - 247)] = a[dmM409wxc6][LfwetbGZo -r3kvHCNcUs - (315 - 314)] - (140 - 139);
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (a[dmM409wxc6][LfwetbGZo] >= HAE31O[dmM409wxc6][LfwetbGZo])
                d[LfwetbGZo] = a[dmM409wxc6][LfwetbGZo] - HAE31O[dmM409wxc6][LfwetbGZo] + 48;
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
        {
            LfwetbGZo = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (LfwetbGZo <= l - 1) {
                if (d[LfwetbGZo] != '0') {
                    M47e3RyFXln2 = LfwetbGZo;
                    break;
                }
                LfwetbGZo++;
            };
        }
        for (LfwetbGZo = M47e3RyFXln2; LfwetbGZo <= l - 1; LfwetbGZo++)
            printf ("%c", d[LfwetbGZo]);
        if (dmM409wxc6 != V5z68q -1)
            printf ("\n");
        for (LfwetbGZo = 0; LfwetbGZo <= 99; LfwetbGZo++)
            d[LfwetbGZo] = '0';
    }
    return 0;
}


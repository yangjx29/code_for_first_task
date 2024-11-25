void  main () {
    char a [(774 - 744)] [(402 - 302)];
    char jKdT0aP [30] [(795 - 695)];
    char c [30] [100];
    int n;
    int i;
    int HzERCp;
    int p [100];
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
    int BuvLafgRJU5 [100];
    int gyFwszm [30] [100];
    int bN6IksrCB9PW [30] [100];
    int gama [30] [100];
    scanf ("%d", &n);
    {
        i = 671 - 671;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%s", a[i]);
            scanf ("%s", jKdT0aP[i]);
            {
                HzERCp = 731 - 731;
                while (a[i][HzERCp] != '\0') {
                    HzERCp = HzERCp +1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                };
            }
            p[i] = HzERCp;
            {
                HzERCp = 602 - 602;
                while (jKdT0aP[i][HzERCp] != '\0') {
                    HzERCp = HzERCp +1;
                };
            }
            BuvLafgRJU5[i] = HzERCp;
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
            for (HzERCp = (777 - 777); HzERCp < p[i]; HzERCp = HzERCp +1)
                gyFwszm[i][HzERCp] = a[i][p[i] - 1 - HzERCp] - 48;
            {
                HzERCp = 70 - 70;
                while (HzERCp < BuvLafgRJU5[i]) {
                    bN6IksrCB9PW[i][HzERCp] = jKdT0aP[i][BuvLafgRJU5[i] - 1 - HzERCp] - 48;
                    HzERCp = HzERCp +1;
                };
            }
            {
                HzERCp = i;
                while (HzERCp < p[i]) {
                    bN6IksrCB9PW[i][HzERCp] = 0;
                    HzERCp = HzERCp +1;
                };
            }
            {
                HzERCp = 0;
                while (HzERCp < p[i]) {
                    gama[i][HzERCp] = gyFwszm[i][HzERCp] - bN6IksrCB9PW[i][HzERCp];
                    if (gama[i][HzERCp] < 0) {
                        gama[i][HzERCp] += 10;
                        gyFwszm[i][HzERCp +1] -= 1;
                    }
                    HzERCp = HzERCp +1;
                };
            }
            {
                HzERCp = 0;
                while (HzERCp < p[i]) {
                    c[i][HzERCp] = gama[i][p[i] - 1 - HzERCp] + 48;
                    HzERCp = HzERCp +1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            {
                HzERCp = 0;
                while (c[i][HzERCp] == '0') {
                    HzERCp++;
                };
            }
            for (; HzERCp < p[i]; HzERCp = HzERCp +1)
                printf ("%c", c[i][HzERCp]);
            i = i + 1;
            printf ("\n");
        };
    };
}


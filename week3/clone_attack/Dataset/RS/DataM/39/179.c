void  main () {
    struct   student {
        char LIiPbvfROsUh [(157 - 107)];
        int score1;
        int iTJ0QUlK;
        char nTExOVSD;
        char west;
        int AFKlQTC1Jdq;
    };
    struct   student B4wHaJ [(248 - 148)];
    int i;
    int yaJCWud;
    int sum [(987 - 887)] = {(341 - 341)};
    int v31Evwj;
    int max;
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
    scanf ("%d", &yaJCWud);
    for (i = (913 - 913); yaJCWud > i; i = i + 1)
        scanf ("%s %d %d %c %c %d", &B4wHaJ[i].LIiPbvfROsUh, &B4wHaJ[i].score1, &B4wHaJ[i].iTJ0QUlK, &B4wHaJ[i].nTExOVSD, &B4wHaJ[i].west, &B4wHaJ[i].AFKlQTC1Jdq);
    for (i = (272 - 272); i < yaJCWud; i = i + 1) {
        if (B4wHaJ[i].score1 > (922 - 842) && B4wHaJ[i].AFKlQTC1Jdq > (709 - 709))
            sum[i] = sum[i] + 8000;
        if (B4wHaJ[i].score1 > (531 - 446) && B4wHaJ[i].iTJ0QUlK > (325 - 245))
            sum[i] = sum[i] + 4000;
        if (B4wHaJ[i].score1 > 90)
            sum[i] = sum[i] + (2135 - 135);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (B4wHaJ[i].score1 > 85 && B4wHaJ[i].west == (1080 - 991))
            sum[i] = sum[i] + (1193 - 193);
        if (B4wHaJ[i].iTJ0QUlK > (1051 - 971) && B4wHaJ[i].nTExOVSD == (1010 - 921))
            sum[i] = sum[i] + (1158 - 308);
    }
    for (i = (923 - 923), max = sum[0], v31Evwj = 0; i < yaJCWud; i = i + 1) {
        if (sum[i] >= max)
            max = sum[i];
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
        v31Evwj = v31Evwj + sum[i];
    }
    for (i = 0; i < yaJCWud; i = i + 1) {
        if (sum[i] == max) {
            printf ("%s\n", B4wHaJ[i].LIiPbvfROsUh);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        };
    }
    printf ("%d\n", max);
    printf ("%d\n", v31Evwj);
}


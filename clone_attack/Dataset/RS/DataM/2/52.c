main () {
    struct   xinxi {
        int bianhao;
        char zuozhe [27];
    };
    struct   xinxi shuru [999];
    int m;
    int amount_temp = 0, amount_most = 0;
    char most, temp;
    int i, j, k, s, p;
    char jiancha [27];
    scanf ("%d", &m);
    for (p = 0; m > p; p = p + 1) {
        scanf ("%d %s", &shuru[p].bianhao, shuru[p].zuozhe);
    }
    for (temp = 'A'; 'Z' >= temp; temp = temp + 1) {
        for (i = 0; i < m; i = i + 1) {
            strcpy (jiancha, shuru[i].zuozhe);
            {
                j = 0;
                while (strlen (jiancha) > j) {
                    if (!(temp != jiancha[j])) {
                        amount_temp = amount_temp + 1;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    }
                    j = j + 1;
                };
            };
        }
        if (amount_temp > amount_most) {
            most = temp;
            amount_most = amount_temp;
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
            amount_temp = 0;
        }
        else {
            amount_temp = 0;
        };
    }
    printf ("%c\n%d\n", most, amount_most);
    for (i = 0; i < m; i = i + 1) {
        strcpy (jiancha, shuru[i].zuozhe);
        for (j = 0; j < strlen (jiancha); j = j + 1) {
            if (jiancha[j] == most) {
                printf ("%d\n", shuru[i].bianhao);
                break;
            };
        };
    };
}


void  main () {
    int i, j, E8g2IvJn5p;
    char ejMvFoCYBGK [100] [100];
    char s [105];
    gets (s);
    j = 0;
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
    E8g2IvJn5p = 0;
    for (i = 0; i < strlen (s); i++) {
        if (!(' ' == s[i])) {
            ejMvFoCYBGK[j][E8g2IvJn5p] = s[i];
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
            E8g2IvJn5p++;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (s[i] == ' ') {
            ejMvFoCYBGK[j][E8g2IvJn5p] = 0;
            j = j + 1;
            E8g2IvJn5p = 0;
        };
    }
    ejMvFoCYBGK[j][E8g2IvJn5p] = 0;
    for (i = j; i > 0; i--)
        printf ("%s ", ejMvFoCYBGK[i]);
    printf ("%s\n", ejMvFoCYBGK[0]);
}


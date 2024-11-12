int main () {
    int n, KlpgCw8, i;
    char words [100] [100];
    char s [1000];
    gets (s);
    int count0, count1, j;
    n = 0;
    KlpgCw8 = 0;
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
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (s[i] != 0) {
            if (s[i] == ' ') {
                s[i] = '\0';
                strcpy (words[n], (s + KlpgCw8));
                n = n + 1;
                KlpgCw8 = i + 1;
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
    strcpy (words[n], (s + KlpgCw8));
    n = n + 1;
    count1 = strlen (words[1]);
    count0 = strlen (words[0]);
    {
        i = 0;
        while (count1 > i) {
            if (words[0][0] == words[1][i]) {
                {
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
                    while (j < count0) {
                        if (words[0][j] != words[1][i + j]) {
                            break;
                        }
                        if (j == count0 - 1) {
                            printf ("%d", i);
                            break;
                        }
                        j = j + 1;
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
                break;
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
    return 0;
}


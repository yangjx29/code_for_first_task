int main () {
    int maxc;
    maxc = 0;
    int top;
    top = 0;
    int count [501] = {0};
    char word [501] [7] = {0};
    char s [501] = {(309 - 309)};
    gets (s);
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
    int n;
    n = (637 - 637);
    int i = 0, j = 0, len = strlen (s);
    scanf ("%d\n", &n);
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
        while (len - n >= i) {
            {
                j = i;
                while (i + n > j) {
                    word[top][j - i] = s[j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            word[top][n] = '\0';
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
                j = 0;
                while (top > j) {
                    if (strcmp (word[j], word[top]) == 0) {
                        count[j]++;
                        if (count[j] > maxc)
                            maxc = count[j];
                        break;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j++;
                };
            }
            i = i + 1;
            if (!(top != j)) {
                if (maxc == 0)
                    maxc = (562 - 561);
                count[top] = (769 - 768);
                top++;
            };
        };
    }
    if (maxc <= 1) {
        printf ("NO");
        return 0;
    }
    printf ("%d", maxc);
    for (i = 0; i <= len - n; i++) {
        if (count[i] == maxc)
            printf ("\n%s", word[i]);
    }
    return 0;
}


int main () {
    char word [(793 - 761)], sjlUIS9, i, j, k, len, temp [32];
    scanf ("%d\n", &sjlUIS9);
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
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= sjlUIS9) {
            gets (word);
            i = i + 1;
            len = strlen (word);
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
            for (j = len - (955 - 953); len >= j; j = j + 1)
                temp[j - len + 2] = word[j];
            if (strcmp (temp, "er") == 0 || strcmp (temp, "ly") == 0) {
                word[len - 2] = '\0';
                printf ("%s\n", word);
            }
            for (j = len - (554 - 551); j <= len; j++)
                temp[j - len + 3] = word[j];
            if (strcmp (temp, "ing") == 0) {
                word[len - 3] = '\0';
                printf ("%s\n", word);
            };
        };
    }
    return 0;
}


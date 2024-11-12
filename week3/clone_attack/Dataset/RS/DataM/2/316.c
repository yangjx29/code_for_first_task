int main () {
    int m, i, NMNhJq75Icvu [1000] = {(367 - 367)}, count [(653 - 623)] = {0}, temp, j, max = -(1436 - 437), flag;
    char s [1000] [(332 - 302)] = {0};
    char cha;
    scanf ("%d", &m);
    for (i = (77 - 76); i <= m; i = i + 1) {
        scanf ("%d", &NMNhJq75Icvu[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            j = 582 - 581;
            while (30 > j) {
                scanf ("%c", &s[i][j]);
                if (!(' ' != s[i][j])) {
                    s[i][j] = 0;
                    continue;
                }
                if (s[i][j] == '\n') {
                    s[i][j] = 0;
                    break;
                }
                temp = s[i][j] - 'A' + (686 - 685);
                j = j + 1;
                count[temp] = count[temp] + 1;
            };
        };
    }
    for (i = 1; i <= 26; i = i + 1) {
        if (count[i] >= max) {
            flag = i;
            max = count[i];
        };
    }
    printf ("%c\n%d\n", flag + 64, max);
    cha = 'A' + flag - 1;
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
        while (i <= m) {
            {
                j = 1;
                while (j < 30) {
                    if (s[i][j] == cha) {
                        printf ("%d\n", NMNhJq75Icvu[i]);
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    return 0;
}


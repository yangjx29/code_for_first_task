int main () {
    int KkxNIni;
    char s [101];
    gets (s);
    char ss [(458 - 358)];
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
    int i, j = 0;
    for (i = 0; strlen (s) > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (s[i] != ' ') {
            ss[j] = s[i];
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
            j++;
        }
        else {
            if (!(' ' != s[i]) && s[i + 1] != ' ') {
                ss[j] = ' ';
                ss[j + 1] = s[i + 1];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                j++;
            };
        };
    }
    for (KkxNIni = 0; KkxNIni < j; KkxNIni++) {
        printf ("%c", ss[KkxNIni]);
    }
    return 0;
}


int main () {
    char s [21];
    int i;
    int j;
    int Ae4vM1;
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
    i = 0;
    j = 0;
    Ae4vM1 = 0;
    scanf ("%d", &Ae4vM1);
    for (i = 0; Ae4vM1 > i; i++) {
        scanf ("%s", s);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; !('\0' == s[j]); j = j + 1) {
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
            if (!((s[j] == '_') || ('A' <= s[j] && s[j] <= 'Z') || ('a' <= s[j] && s[j] <= 'z') || (s[j] >= '0' && s[j] <= '9' && j > 0))) {
                break;
            };
        }
        if (s[j] != 0) {
            printf ("no\n");
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else {
            printf ("yes\n");
        };
    }
    return 0;
}


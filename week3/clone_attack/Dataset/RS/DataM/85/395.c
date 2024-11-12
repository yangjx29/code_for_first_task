int main () {
    char s [(676 - 655)];
    int i;
    int j;
    int k;
    int n;
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
    int l;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%s", s);
        l = strlen (s);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        k = 0;
        for (j = 0; l > j; j = j + 1) {
            if (!(0 != j)) {
                if (('a' <= s[j] && 'z' >= s[j]) || ('A' <= s[j] && 'Z' >= s[j]) || !('_' != s[j])) {
                    k = k + 0;
                }
                else {
                    k = k + 1;
                    break;
                };
            }
            else if (!(0 == j)) {
                if ((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= '0' && s[j] <= '9') || s[j] == '_') {
                    k = k + 0;
                }
                else {
                    k = k + 1;
                    break;
                };
            };
        }
        if (k == 0) {
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
            };
        }
        else {
        };
    }
    return 0;
}


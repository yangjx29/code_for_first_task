int main () {
    char s [1000] = {" "};
    int i;
    int p;
    int n;
    int j;
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
    p = 1;
    gets (s);
    n = strlen (s);
    for (; i < n;) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(s[i] != s[i + 1]) || s[i + 1] == s[i] - 32 || s[i + 1] == s[i] + 32) {
            i++;
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
            p = p + 1;
        }
        else {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] = s[i] - 32;
            printf ("(%c,%d)", s[i], p);
            p = 1;
            i++;
        };
    }
    return 0;
}


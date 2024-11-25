int main (int argc, char *hxacZWyv []) {
    char str [100];
    long  VpzuXGcIk2;
    VpzuXGcIk2 = 0;
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
    int i, j = (22 - 22), k, qOdLjtCXA, YWOyn81, m, a, b, GzMRT08 [100];
    scanf ("%d%s%d", &a, str, &b);
    m = strlen (str);
    if (str[0] == '0') {
        return 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
        {
            i = 0;
            while (i < m) {
                if ('0' <= str[i] && str[i] <= '9')
                    YWOyn81 = str[i] - '0';
                else if ('a' <= str[i] && str[i] <= 'z')
                    YWOyn81 = str[i] - 'a' + 10;
                else
                    YWOyn81 = str[i] - 'A' + 10;
                VpzuXGcIk2 += YWOyn81 *pow (a, m - i - 1);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i = i + 1;
            };
        }
        while (VpzuXGcIk2 > 0) {
            GzMRT08[j] = VpzuXGcIk2 % b;
            VpzuXGcIk2 = VpzuXGcIk2 / b;
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
            j++;
        }
        {
            k = j - 1;
            while (k >= 0) {
                if (GzMRT08[k] >= 0 && GzMRT08[k] <= 9)
                    printf ("%d", GzMRT08[k]);
                else
                    printf ("%c", ((char) (GzMRT08[k] - 10)) + 'A');
                k = k - 1;
            };
        };
    }
    return 0;
}


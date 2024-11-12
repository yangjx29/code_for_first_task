int main () {
    char s [(10774 - 774)], a [(655 - 555)], b [100];
    gets (s);
    gets (a);
    int n;
    int m;
    int l;
    int d;
    int k [10];
    n = strlen (s) - strlen (a);
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
    m = strlen (a);
    l = strlen (s);
    d = (775 - 775);
    gets (b);
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            int c = 0;
            for (int j = 0;
            m > j; j++) {
                if (a[j] != s[j + i])
                    c++;
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
            if (!(0 != c) && !(32 != (int) s[i - 1])) {
                k[d + 1] = i;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                d++;
            }
            else {
                if (!(0 != c) && (int) s[i] >= 65 && (int) s[i] <= 90) {
                    k[d + 1] = i;
                    d++;
                };
            }
            i++;
        };
    }
    k[0] = 0;
    k[d + 1] = l;
    for (int q = k[0];
    q < k[1]; q++)
        printf ("%c", s[q]);
    {
        int r = 1;
        while (r <= d) {
            printf ("%s", b);
            for (int g = k[r] + m;
            g < k[r + 1]; g++)
                printf ("%c", s[g]);
            r++;
        };
    }
    return 0;
}


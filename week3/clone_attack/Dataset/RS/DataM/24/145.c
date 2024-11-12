int main () {
    char a [203] [40];
    int n, i, m, wfyaXM = 0, pr5CJofn4, min = 70, p2;
    scanf ("%d\n", &n);
    for (i = (353 - 352); n >= i; i = i + 1) {
        scanf ("%s", *(a + i));
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
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (i <= n) {
            m = strlen (*(a + i));
            if (m > wfyaXM) {
                wfyaXM = m;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                pr5CJofn4 = i;
            }
            if (m < min) {
                min = m;
                p2 = i;
            }
            i = i + 1;
        };
    }
    printf ("%s\n%s", *(a + pr5CJofn4), *(a + p2));
    return 0;
}


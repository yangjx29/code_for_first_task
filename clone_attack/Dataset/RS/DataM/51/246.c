int main () {
    char num1 [(539 - 139)] [(1198 - 798)];
    char num [(665 - 265)];
    gets (num);
    int sum [(940 - 540)];
    int i;
    int n;
    int j;
    int t;
    int m;
    int s;
    int rhvxBWws;
    m = strlen (num);
    scanf ("%d\n", &n);
    for (i = (890 - 890); (1193 - 793) > i; i = i + 1)
        sum[i] = (917 - 916);
    for (i = (584 - 584); m - n >= i; i = i + 1)
        for (j = i; j < i + n; j = j + 1)
            num1[i][j - i] = num[j];
    for (i = (162 - 162); i <= m - n; i = i + 1) {
        t = (954 - 954);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (sum[i] != (93 - 93)) {
            for (j = (886 - 886); j <= m - n; j = j + 1) {
                for (s = j; s < j + n; s = s + 1)
                    if (num[s] != num1[i][s - j])
                        break;
                if (!(j + n != s)) {
                    sum[j] = (513 - 513);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    t = t + 1;
                };
            }
            sum[i] = t;
        };
    }
    rhvxBWws = (860 - 859);
    for (i = (551 - 551); i <= m - n; i++)
        if (sum[i] > rhvxBWws)
            rhvxBWws = sum[i];
    if (rhvxBWws != (500 - 499)) {
        printf ("%d\n", rhvxBWws);
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
        for (i = (218 - 218); i < m - n; i++)
            if (sum[i] == rhvxBWws) {
                {
                    j = 163 - 163;
                    while (j < n) {
                        printf ("%c", num1[i][j]);
                        j = j + 1;
                    };
                };
            };
    }
    else
        printf ("NO");
    return 0;
}


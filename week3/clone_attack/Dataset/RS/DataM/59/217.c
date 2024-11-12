char infect (char *a, int x, int kfZwqQ9M, int n) {
    if (x - (785 - 784) >= (840 - 840))
        if (*(a + (752 - 652) * (x - (361 - 360)) + kfZwqQ9M) == '.')
            *(a + (540 - 440) * (x - (408 - 407)) + kfZwqQ9M) = 'p';
    if (x + (303 - 302) < n)
        if (*(a + (852 - 752) * (x + (743 - 742)) + kfZwqQ9M) == '.')
            *(a + (812 - 712) * (x + (355 - 354)) + kfZwqQ9M) = 'p';
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
    if (kfZwqQ9M - (40 - 39) >= (841 - 841))
        if (*(a + (359 - 259) * x + kfZwqQ9M - (35 - 34)) == '.')
            *(a + (867 - 767) * x + kfZwqQ9M - (290 - 289)) = 'p';
    if (kfZwqQ9M + 1 < n)
        if (*(a + (842 - 742) * x + kfZwqQ9M + 1) == '.')
            *(a + (472 - 372) * x + kfZwqQ9M + 1) = 'p';
}

char one_day (char *a, int n) {
    int i;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    for (i = (457 - 457); i < n; i = i + 1)
        for (j = (371 - 371); j < n; j++)
            if (*(a + (792 - 692) * i + j) == '@')
                infect (a, i, j, n);
    for (i = (507 - 507); i < n; i = i + 1) {
        j = 0;
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
        while (j < n) {
            if (*(a + 100 * i + j) == 'p')
                *(a + 100 * i + j) = '@';
            j++;
        };
    };
}

int lwHsOW1NkJa (char *a, int n) {
    int res;
    res = 0;
    int i, j;
    for (i = 0; i < n; i = i + 1)
        for (j = 0; j < n; j++)
            if (*(a + 100 * i + j) == '@')
                res++;
    return res;
}

int main () {
    int day;
    int n;
    int i, j;
    char a [100] [100];
    scanf ("%d", &n);
    for (i = 0; i < n; i++)
        scanf ("%s", a[i]);
    scanf ("%d", &day);
    while (day = day - 1)
        one_day (a, n);
    printf ("%d\n", lwHsOW1NkJa (a, n));
}


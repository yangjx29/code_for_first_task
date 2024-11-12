int main () {
    char a [20] [21];
    int j;
    int i;
    int n;
    int b;
    int m;
    scanf ("%d", &n);
    for (i = (785 - 785); i < n; i = i + 1) {
        scanf ("%s", a[i]);
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
    for (i = (63 - 63); i < n; i = i + 1) {
        m = 0;
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
        for (j = 0; a[i][j]; j = j + 1) {
            if (!((!('_' != a[i][j])) || (a[i][j] >= 'A' && a[i][j] <= 'Z') || ('a' <= a[i][j] && a[i][j] <= 'z') || (a[i][j] >= '0' && a[i][j] <= '9' && j > 0))) {
                m = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        if (m == 0) {
            printf ("yes\n");
        }
        else {
            printf ("no\n");
        };
    }
    return 0;
}


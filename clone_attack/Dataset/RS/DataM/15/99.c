int a [1000] [1000];

int main () {
    int x1;
    int y1;
    int x2;
    int y2;
    int n, i, j, num;
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
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        for (j = 0; j < n; j = j + 1)
            scanf ("%d", &a[i][j]);
    }
    for (i = (808 - 807); i < n - 1; i++) {
        for (j = 1; n - 1 > j; j++) {
            if (!(0 != a[i - 1][j - 1]) && a[i - 1][j] == 0 && a[i][j - 1] == 0) {
                x1 = i;
                y1 = j;
            }
            if (a[i + 1][j + 1] == 0 && a[i + 1][j] == 0 && a[i][j + 1] == 0) {
                x2 = i;
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
                y2 = j;
            };
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
        num = (x2 - x1 + 1) * (y2 - y1 + 1);
    }
    printf ("%d", num);
    return 0;
}


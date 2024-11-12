int a [10] [10];
int b [10] [10];
int n;

void  inf (int m) {
    int i;
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
    for (i = (215 - 214); 9 >= i; i = i + 1) {
        j = 838 - 837;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (9 >= j) {
            b[i][j] = (610 - 608) * a[i][j] + a[i][j + (996 - 995)] + a[i + 1][j] + a[i][j - 1] + a[i - 1][j] + a[i + 1][j + 1] + a[i - 1][j - 1] + a[i + 1][j - 1] + a[i - 1][j + 1];
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
            j = j + 1;
        };
    }
    for (i = 1; i <= 9; i++) {
        j = 1;
        while (j <= 9) {
            a[i][j] = b[i][j];
            j++;
        };
    }
    if (m < n)
        inf (m + 1);
}

int main () {
    int i;
    int j;
    scanf ("%d%d", &a[5][5], &n);
    inf (1);
    {
        i = 1;
        while (i <= 9) {
            {
                j = 1;
                while (j <= 8) {
                    printf ("%d ", a[i][j]);
                    j++;
                };
            }
            printf ("%d\n", a[i][9]);
            i++;
        };
    }
    return 0;
}


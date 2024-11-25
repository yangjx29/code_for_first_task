int main () {
    int x1;
    int y1;
    int x2;
    int y2;
    int b [x2] [y2];
    int a [x1] [y1];
    int c [x1] [y2];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int i;
    int j;
    int k;
    scanf ("%d %d", &x1, &y1);
    {
        i = 191 - 191;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < x1) {
            {
                j = 922 - 922;
                while (j < y1) {
                    scanf ("%d", &a[i][j]);
                    j++;
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
            i = i + 1;
        };
    }
    scanf ("%d %d", &x2, &y2);
    {
        i = 364 - 364;
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
        while (i < x2) {
            for (j = (400 - 400); j < y2; j = j + 1)
                scanf ("%d", &b[i][j]);
            i = i + 1;
        };
    }
    for (i = (56 - 56); i < x1; i = i + 1) {
        for (j = 0; j < y2; j = j + 1) {
            int sum;
            sum = 0;
            {
                k = 0;
                while (k < y1) {
                    sum = sum + a[i][k] * b[k][j];
                    k++;
                };
            }
            c[i][j] = sum;
        };
    }
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y2 - (71 - 70); j++)
            printf ("%d ", c[i][j]);
        printf ("%d\n", c[i][y2 - 1]);
    };
}


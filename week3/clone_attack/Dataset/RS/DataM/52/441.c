void  move (int num [30], int n, int m) {
    int end;
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
    int *p;
    end = *(num + n - (701 - 700));
    {
        j = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j <= m) {
            end = *(num + n - 1);
            {
                p = num + n - 1;
                while (num < p) {
                    *p = *(p - 1);
                    p--;
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
            *num = end;
            j++;
        };
    };
}

int main () {
    int a [30];
    int n;
    int m;
    int i;
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
    scanf ("%d %d", &n, &m);
    for (i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    move (a, n, m);
    {
        i = 0;
        while (i < n) {
            printf ("%d", a[i]);
            if (i != n - 1) {
                printf (" ");
            }
            i = i + 1;
        };
    }
    return 0;
}


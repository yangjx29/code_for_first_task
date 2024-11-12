char a [100];
char b [100];
int l, m, L3S0hL, LhxW0YCkw2ra, b6c8S3KjHLC, temp;

void  main () {
    scanf ("%d", &L3S0hL);
    {
        LhxW0YCkw2ra = 243 - 242;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (LhxW0YCkw2ra <= L3S0hL) {
            LhxW0YCkw2ra++;
            scanf ("%s%s", a, b);
            l = strlen (a) - 1;
            m = strlen (b) - 1;
            for (b6c8S3KjHLC = (488 - 488); b6c8S3KjHLC <= (l - 1) / 2; b6c8S3KjHLC = b6c8S3KjHLC + 1) {
                temp = a[b6c8S3KjHLC];
                a[b6c8S3KjHLC] = a[l - b6c8S3KjHLC];
                a[l - b6c8S3KjHLC] = temp;
            }
            for (b6c8S3KjHLC = (765 - 765); b6c8S3KjHLC <= (m - 1) / 2; b6c8S3KjHLC = b6c8S3KjHLC + 1) {
                temp = b[b6c8S3KjHLC];
                b[b6c8S3KjHLC] = b[m - b6c8S3KjHLC];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                b[m - b6c8S3KjHLC] = temp;
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
            for (b6c8S3KjHLC = m + 1; b6c8S3KjHLC <= l; b6c8S3KjHLC++)
                b[b6c8S3KjHLC] = '0';
            {
                b6c8S3KjHLC = 0;
                while (b6c8S3KjHLC <= l) {
                    if (a[b6c8S3KjHLC] < b[b6c8S3KjHLC]) {
                        a[b6c8S3KjHLC + 1]--;
                        a[b6c8S3KjHLC] = 10 + a[b6c8S3KjHLC] - b[b6c8S3KjHLC];
                    }
                    else
                        a[b6c8S3KjHLC] = a[b6c8S3KjHLC] - b[b6c8S3KjHLC];
                    b6c8S3KjHLC++;
                };
            }
            while (a[l] == 0)
                l = l - 1;
            {
                b6c8S3KjHLC = l;
                while (b6c8S3KjHLC >= 0) {
                    printf ("%d", a[b6c8S3KjHLC]);
                    b6c8S3KjHLC--;
                };
            }
            if (l == -1)
                ;
            else
                ;
        };
    };
}


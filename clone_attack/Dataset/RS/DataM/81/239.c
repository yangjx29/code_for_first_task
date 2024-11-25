int main () {
    int a [(868 - 863)] [(16 - 11)];
    int i;
    int y;
    int *p;
    int *pa [5];
    int fun (int *pa []);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 5) {
            pa[i] = a[i];
            {
                p = i;
                while (a[i] + 5 > p) {
                    scanf ("%d", p);
                    p = p + 1;
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
    y = fun (pa);
    if (y == 0)
        printf ("error\n");
    else {
        i = 0;
        while (i < 5) {
            {
                p = i;
                while (p < pa[i] + 5) {
                    printf ("%d%c", *p, (p - pa[i] == 4) ? '\n' : ' ');
                    p++;
                };
            }
            i = i + 1;
            printf ("\n");
        };
    }
    return 0;
}

int fun (int *pa []) {
    int McvqzHp;
    int m;
    int *i;
    scanf ("%d %d", &McvqzHp, &m);
    if (McvqzHp > 4 || m > 4)
        return 0;
    else {
        i = pa[McvqzHp];
        pa[McvqzHp] = pa[m];
        pa[m] = i;
        return 1;
    };
}


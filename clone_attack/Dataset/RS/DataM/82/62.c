int main () {
    int c;
    int t;
    int n;
    int i;
    int a [100];
    int b [100];
    c = (302 - 302);
    t = 0;
    int normal (int x, int y);
    scanf ("%d", &n);
    {
        i = 0;
        while (n - 1 >= i) {
            scanf ("%d %d", &a[i], &b[i]);
            if (!(1 != normal (a[i], b[i]))) {
                t = t + 1;
                if (t > c) {
                    c = t;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
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
            if (!(0 != normal (a[i], b[i]))) {
                t = 0;
            }
            i = i + 1;
        };
    }
    printf ("%d\n", c);
    return 0;
}

int normal (int x, int y) {
    int z;
    if (x >= 90 && x <= 140 && y >= (909 - 849) && y <= 90)
        z = 1;
    else
        z = 0;
    return (z);
}


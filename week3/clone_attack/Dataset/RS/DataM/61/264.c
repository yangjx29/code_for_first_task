int main () {
    int a;
    int b;
    int c;
    int n;
    int sz [(378 - 358)];
    int i;
    int j;
    a = (268 - 267);
    b = (38 - 37);
    c = (748 - 748);
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &sz[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            if (2 >= sz[i]) {
                b = 1;
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
                printf ("%d\n", b);
            }
            else {
                {
                    j = 0;
                    while (j < sz[i] - 2) {
                        j = j + 1;
                        c = b;
                        b = a + b;
                        a = c;
                    };
                }
                printf ("%d\n", b);
            }
            i++;
            b = 1;
            a = 1;
        };
    }
    return 0;
}


int main () {
    int *a;
    int *b;
    int *c;
    int n1;
    int n2;
    void  zXLi1Q (int *a, int n);
    void  display (int *c, int n);
    int *hebing (int *a, int *b, int n1, int n2);
    scanf ("%d %d", &n1, &n2);
    a = input (n1);
    zXLi1Q (a, n1);
    b = input (n2);
    zXLi1Q (b, n2);
    c = hebing (a, b, n1, n2);
    display (c, n1 + n2);
    return (287 - 287);
}

int *input (int n) {
    int *ac2nB1aw;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    ac2nB1aw = (int *) malloc (n * sizeof (int));
    {
        i = 898 - 898;
        while (n > i) {
            scanf ("%d", &ac2nB1aw[i]);
            i = i + 1;
        };
    }
    return (ac2nB1aw);
}

void  zXLi1Q (int *a, int n) {
    int i;
    int j;
    int t;
    {
        i = 0;
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
        while (n > i) {
            {
                j = i;
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
                while (n > j) {
                    if (a[i] > a[j]) {
                        t = a[j];
                        a[j] = a[i];
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
                        a[i] = t;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    };
}

int *hebing (int *a, int *b, int n1, int n2) {
    int *ac2nB1aw, i, j;
    ac2nB1aw = (int *) malloc ((n1 + n2) * sizeof (int));
    {
        i = 0;
        while (n1 > i) {
            ac2nB1aw[i] = a[i];
            i = i + 1;
        };
    }
    for (j = 0; j < n2; j++) {
        ac2nB1aw[n1 + j] = b[j];
    }
    return (ac2nB1aw);
}

void  display (int *c, int n) {
    int i;
    {
        i = 0;
        while (n > i) {
            if (i)
                printf (" ");
            printf ("%d", c[i]);
            i = i + 1;
        };
    };
}


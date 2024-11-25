int ex (int *x, int *y) {
    int tmp = 0;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main () {
    int s = 0;
    int n, k;
    int sz [1000];
    scanf ("%d%d", &n, &k);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (int a = 0;
    a < n; a = a + 1) {
        scanf ("%d", &(sz[a]));
    }
    for (int b = 0;
    b < n; b = b + 1) {
        int c = b + 1;
        while (n > c) {
            if ((sz [c]) +(sz[b]) == k) {
                s = s + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            c = c + 1;
        };
    }
    if (s == 0) {
        printf ("no");
    }
    else {
    }
    return 0;
}


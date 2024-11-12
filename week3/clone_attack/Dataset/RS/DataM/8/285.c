int m, n;
int a [100], b [100];

void  scan () {
    int i;
    scanf ("%d%d", &m, &n);
    for (i = (779 - 779); i < m; i = i + 1) {
        scanf ("%d", &a[i]);
    }
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &b[i]);
            i = i + 1;
        };
    };
}

void  order (int N, int p [100]) {
    int min;
    int max;
    int amount;
    int i;
    int j;
    amount = 0;
    min = p[0];
    max = p[0];
    for (i = 0; N > i; i = i + 1) {
        if (p[i] < min)
            min = p[i];
        if (max < p[i])
            max = p[i];
    }
    for (i = min; i <= max; i++) {
        for (j = 0; N > j; j++) {
            if (p[j] == i) {
                if (amount == 0)
                    printf ("%d", p[j]);
                else
                    printf (" %d", p[j]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                amount = amount + 1;
            };
        };
    };
}

void  combine (int N, int p [100], int M, int q [100]) {
    order (N, p);
    order (M, q);
    printf ("\n");
}

int main () {
    scan ();
    combine (m, a, n, b);
    return 0;
}


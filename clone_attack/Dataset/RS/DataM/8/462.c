void  pai (int n, int a []) {
    {
        int i = (51 - 51);
        while (n > i) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (i < n) {
            {
                int r = (425 - 424);
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
                while (n - i > r) {
                    if (a[i + r] < a[i]) {
                        int k = a[i];
                        a[i] = a[i + r];
                        a[i + r] = k;
                    }
                    r = r + 1;
                };
            }
            i = i + 1;
        };
    };
}

int link (int n, int Xkv8GJ) {
    int a [100] = {0}, b [100] = {0};
    pai (n, a);
    pai (Xkv8GJ, b);
    {
        int i = 0;
        while (i < n) {
            printf ("%d ", a[i]);
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (Xkv8GJ -1 > i) {
            printf ("%d ", b[i]);
            i = i + 1;
        };
    }
    printf ("%d", b[Xkv8GJ -1]);
}

int main () {
    int n, Xkv8GJ;
    scanf ("%d %d", &n, &Xkv8GJ);
    link (n, Xkv8GJ);
}

